#include <iostream>
#include <memory>
using namespace std;

#ifndef SUBVECTOR_H
#define SUBVECTOR_H


template <typename T>
class subvector{

protected:
    shared_ptr <T[]> mas;
    int top=0;
    int capacity=0;
    
public:
    subvector(int a){

        top=0;
        capacity=a;
        mas = shared_ptr <T[]>(new T[capacity]);

    };

    ~subvector(){
    };


    void resize(int a){
        if (a<top){
            throw runtime_error("Oops in resize!");
        }
        if (capacity==1){
            shared_ptr <T[]> mas = shared_ptr <T[]> (new T[1]);
        }
        else
        {
            shared_ptr <T[]> mas2 = mas;
            shared_ptr <T[]> mas = shared_ptr <T[]> (new T[a]);
            for(int i=0;i<top;i++)
                mas[i]=mas2[i];
            for(int i=0;i<capacity;i++)
                cout<<"mas["<<i<<"]="<<mas[i]<<endl;
            for(int i=0;i<capacity;i++)
                cout<<"mas2["<<i<<"]="<<mas2[i]<<endl;
            cout<<"resize"<<top<<" "<<capacity<<endl;
            for(int i=0;i<capacity;i++)
                cout<<"mas["<<i<<"]="<<mas[i]<<endl;
        }
    };

    void push_back(const T& a){
        if (top == capacity){
            if (capacity==0){
                capacity++;
                resize(capacity);}
            else{
                capacity*=2;
                resize(capacity);
            }}
        mas[top] = a;
        // cout<<top<<" "<<a<<endl;
        top++;
    };

    T pop_back(){

        if (top==0) {
            throw runtime_error("Oops with pop_back!");
        }
        else
        {
            top--;
            return mas[top];

        }
    };

    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    void shrink_to_fit(){
        if (top<capacity){
            shared_ptr <T[]> mas2=shared_ptr <T[]>(new T[top]);
            for(int i=0;i<top;i++)
                mas2[i]=mas[i];
            mas=mas2;
            capacity=top;
        }};

    void clear(){
        for(int i=0;i<top;i++)
            mas[i]=NULL;
        top=0;
    };

    void destructor(){
        top=0;
        capacity=0;
        resize(0);
    };

    unsigned int get_capacity(){
        return capacity;
    }

};

#endif