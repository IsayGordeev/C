#include <iostream>
#include "subvector.h"
using namespace std;


int main(){

    subvector<int> s1(3);
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(3);
    s1.push_back(4);
    cout<<s1.pop_back()<<endl;
    cout<<s1.pop_back()<<endl;
    cout<<s1.pop_back()<<endl;

//    s1.clear();
//    s1.destructor();
//    s1.push_back(4);
//    s1.push_back(7);
//
//    s1.push_back(7);
//    s1.push_back(5);
//    cout<<s1.pop_back()<<endl;
//    cout<<s1.pop_back()<<endl;
//    cout<<s1.pop_back()<<endl;
//    cout<<s1.pop_back()<<endl;

//    s1.shrink_to_fit();
//    cout<<s1.pop_back()<<endl;
//    cout<<s1.pop_back()<<endl;
//    cout<<s1.pop_back()<<endl;
//    cout<<s1.pop_back()<<endl;
//    cout<<s1.pop_back()<<endl;
//
//
//    s1.shrink_to_fit();

    return 0;
}