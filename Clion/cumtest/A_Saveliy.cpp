#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    stack<int> heap;
    string m_heap;


    while (cin >> m_heap) {
        char* p;
        int x = strtol(m_heap.c_str(), &p, 10);
        if (*p){
            int b = heap.top();
            heap.pop();
            int a = heap.top();
            heap.pop();

            if (m_heap == "+")
                x = a + b;
            if (m_heap == "-")
                x = a - b;
            if (m_heap == "*")
                x = a * b;
            if (m_heap == "/")
                x = a / b;
        }
        heap.push(x);
    }
    cout << heap.top();

    return 0;
}