#include <iostream>
#include <string>
using namespace std;


class MyClass{
private:
    int data;
public:
    MyClass(){};
    MyClass(int data){
        this->data = data;
    }
    MyClass sum(const MyClass& val){
        MyClass res;
        res.data = data + val.data;
        return res;
    }
    void print(){
        cout << data << endl;
    }
    MyClass operator+(const MyClass& val){
        return sum(val);
    }
    MyClass operator+(const int val) {
        return sum(MyClass(val));
    }
    friend MyClass operator+(int lval, MyClass& rval);
};

MyClass operator+(const int lval, MyClass& rval){
    return rval + lval ;
}

int main() {
    MyClass a(7),b(5);
    MyClass abs = a.sum(4);
    MyClass res = a + b ;
    res.print();
    return 0;
}