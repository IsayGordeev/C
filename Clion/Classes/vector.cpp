#include <iostream>

#ifndef ARRAYINT_H
#define ARRAYINT_H

#include <cassert> // для assert()

#include <vector>


template <typename T>
class ArrayInt
{
private:
    int m_length;
    T *m_data;

public:
    ArrayInt():
            m_length(0), m_data(nullptr)
    {
    }

    ArrayInt(int length):
            m_length(length)
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new T[length];
        else
            m_data = nullptr;
    }

    ~ArrayInt()
    {
        delete[] m_data;
    }

    void erase()
    {
        delete[] m_data;
        // Здесь нужно указать m_data значение nullptr, чтобы на выходе не было висячего указателя
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    // Функция reallocate() изменяет размер массива. Все существующие элементы внутри массива будут уничтожены. Процесс быстрый
    void reallocate(int newLength)
    {
        // Удаляем все существующие элементы внутри массива
        erase();

        // Если наш массив должен быть пустым, то выполняем возврат здесь
        if (newLength <= 0)
            return;

        // Затем выделяем новые элементы
        m_data = new T[newLength];
        m_length = newLength;
    }

    // Функция resize() изменяет размер массива. Все существующие элементы сохраняются. Процесс медленный
    void resize(int newLength)
    {
        // Если массив нужной длины, то выполняем return
        if (newLength == m_length)
            return;

        // Если нужно сделать массив пустым, то делаем это и затем выполняем return
        if (newLength <= 0)
        {
            erase();
            return;
        }

        // Теперь предположим, что newLength состоит, по крайней мере, из одного элемента. Выполняется следующий алгоритм действий:
        // 1. Выделяем новый массив.
        // 2. Копируем элементы из существующего массива в наш, только что выделенный, массив.
        // 3. Уничтожаем старый массив и указываем m_data указывать на новый массив.

        // Выделяем новый массив
        T *data = new T[newLength];

        // Затем нам нужно разобраться с количеством копируемых элементов в новый массив.
        // Мы хотим скопировать столько элементов, сколько их есть в меньшем из массивов
        if (m_length > 0)
        {
            int elementsToCopy = (newLength > m_length) ? m_length : newLength;

            // Поочередно копируем элементы
            for (int index=0; index < elementsToCopy ; ++index)
                data[index] = m_data[index];
        }

        // Удаляем старый массив, так как он нам уже не нужен
        delete[] m_data;

        // И используем вместо старого массива новый! Обратите внимание, m_data указывает на тот же адрес, на который указывает наш новый динамически выделенный массив.
        // Поскольку данные были динамически выделенные, то они не будут уничтожены, когда выйдут из области видимости
        m_data = data;
        m_length = newLength;
    }

    void insertBefore(int value, int index)
    {
        // Проверка корректности передаваемого индекса
        assert(index >= 0 && index <= m_length);

        // Создаем новый массив на один элемент больше старого массива
        T *data = new T[m_length+1];

        // Копируем все элементы аж до index-а
        for (int before=0; before < index; ++before)
            data [before] = m_data[before];

        // Вставляем наш новый элемент в наш новый массив
        data [index] = value;

        // Копируем все значения после вставляемого элемента
        for (int after=index; after < m_length; ++after)
            data[after+1] = m_data[after];

        // Удаляем старый массив и используем вместо него новый массив
        delete[] m_data;
        m_data = data;
        ++m_length;
    }

    void remove(int index)
    {
        // Проверка на корректность передаваемого индекса
        assert(index >= 0 && index < m_length);

        // Если это последний элемент массива, то делаем массив пустым и выполняем return
        if (m_length == 1)
        {
            erase();
            return;
        }

        // Cоздаем новый массив на один элемент меньше нашего старого массива
        T *data = new T[m_length-1];

        // Копируем все элементы аж до index-а
        for (int before=0; before  < index; ++before)
            data[before] = m_data[before];

        // Копируем все значения после удаляемого элемента
        for (int after=index+1; after < m_length; ++after )
            data[after-1] = m_data[after];

        // Удаляем старый массив и используем вместо него новый массив
        delete[] m_data;
        m_data = data;
        --m_length;
    }

    // Несколько дополнительных функций просто для удобства
    void insertAtBeginning(int value) { insertBefore(value, 0); }
    void insertAtEnd(int value) { insertBefore(value, m_length); }

    int getLength() { return m_length; }
};

#endif

