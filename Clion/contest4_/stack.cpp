#include <cstdint>
#include <iostream>
#include <utility>
using namespace std;

template <typename T>
class MinStack{
private:
    int m_length;
    T *m_data;

public:
    MinStack():
            m_length(0), m_data(nullptr)
    {
    }

    MinStack(int length):
            m_length(length)
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new T[length];
        else
            m_data = nullptr;
    }

    ~MinStack()
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

    void pop(int index)
    {
        assert(index >= 0 && index < m_length);

        if (m_length == 1)
        {
            erase();
            return;
        }
        else{
        T *data = new T[m_length-1];

        for (int before=0; before  < index; ++before)
            data[before] = m_data[before];

        for (int after=index+1; after < m_length; ++after )
            data[after-1] = m_data[after];


        delete[] m_data;
        m_data = data;
        --m_length;}
    }

    T top(){
        return m_data[m_length-1];
    };
    void print(){
        for(auto i : m_data){
            cout << i << " ";
        }
    }
    int getMin() { return m_length; }



};