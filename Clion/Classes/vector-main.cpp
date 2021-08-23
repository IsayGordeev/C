#include <iostream>
#include "vector_container.cpp"
using namespace std;

int main()
{
    Vector<int> array(10);

    array.push_back(1);
    array.push_back(1);
    array.pop_back();
    for (int i = 0; i < 5; ++i){
        array[i] = 2;
    }

    array.print();

    return 0;}