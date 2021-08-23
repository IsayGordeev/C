#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    string name, group;
    int age;
    double* memory;

public:
    Student(string name_, string group_, int age_) {
        name = name_;
        age = age_;
        group = group_;
        memory = new double[100];
    }
    void print() {
        cout << name << " " << age << " " << group << endl;
    }
    void ageing(){
        age++;
    }
    ~Student(){
        cout << name << " was dropped out" << endl;
        delete[] memory;
    }
};

int main(){
    Student a("Isay","B02-920",18);
    Student b("Isaydd","B02d-920",18);
    a.print();
    a.ageing();
    a.print();

    return 0;
}