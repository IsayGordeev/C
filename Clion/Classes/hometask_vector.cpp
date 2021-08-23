#include <iostream>

#ifndef Vector_H
#define Vector_H

#include <cassert>




template <typename T>
class Vector
{
private:
    int m_length;
    T *m_data;

public:
    Vector():
            m_length(0), m_data(nullptr)
    {
    }

    Vector(int length):
            m_length(length)
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new T[length];
        else
            m_data = nullptr;
    }

    ~Vector()
    {
        delete[] m_data;
    }

    void erase()
    {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    void reallocate(int newLength)
    {
        erase();

        if (newLength <= 0)
            return;

        m_data = new T[newLength];
        m_length = newLength;
    }

    void resize(int newLength)
    {
        if (newLength == m_length)
            return;

        if (newLength <= 0)
        {
            erase();
            return;
        }

        T *data = new T[newLength];

        if (m_length > 0)
        {
            int elementsToCopy = (newLength > m_length) ? m_length : newLength;

            for (int index=0; index < elementsToCopy ; ++index)
                data[index] = m_data[index];
        }

        delete[] m_data;

        m_data = data;
        m_length = newLength;
    }

    void push(int value, int index)
    {
        assert(index >= 0 && index <= m_length);

        T *data = new T[m_length+1];

        for (int before=0; before < index; ++before)
            data [before] = m_data[before];

        data [index] = value;

        for (int after=index; after < m_length; ++after)
            data[after+1] = m_data[after];

        delete[] m_data;
        m_data = data;
        ++m_length;
    }
    void push2(int value, int index)
    {
        assert(index >= 0 && index <= m_length);

        T *data = new T[m_length*2];

        for (int before=0; before < index; ++before)
            data [before] = m_data[before];

        data [index] = value;

        for (int after=index; after < m_length; ++after)
            data[after+1] = m_data[after];

        delete[] m_data;
        m_data = data;
        m_length*=2;
    }

    void remove(int index)
    {
        assert(index >= 0 && index < m_length);

        if (m_length == 1)
        {
            erase();
            return;
        }

        T *data = new T[m_length-1];

        for (int before=0; before  < index; ++before)
            data[before] = m_data[before];

        for (int after=index+1; after < m_length; ++after )
            data[after-1] = m_data[after];


        delete[] m_data;
        m_data = data;
        --m_length;
    }

    void insertAtBeginning(int value) { insertBefore(value, 0); }
    void insertAtEnd(int value) { insertBefore(value, m_length); }
    void push_back(int value){
            if(isFullBuffer()){
                insertBefore1(value, m_length);
            }
            else{
                for (int i = 0; i  < m_length; ++i){
                    if(!m_data[i]){
                        m_data[i] == value;
                        break;}
                }
            }
    }
    
    bool isFullBuffer() {
        int a = 0;

        for (int i = 0; i < m_length; ++i) {

            if (m_data[i])
                ++a;
        }
        return a == m_length;
    }
    int getLength() { return m_length; }
};

#endif

