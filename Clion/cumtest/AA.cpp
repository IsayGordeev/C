#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(){
    stack<int> operands;
    stack<char> operators;
//    vector_push
    char s;
    char* p;

    while (cin >> s){
            operators.push(s);
    }
    cout << operators.top();
}