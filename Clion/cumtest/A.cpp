#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
    char c = 0;
    string string;
    vector<int> operands;
    vector<char> operators;
    int j = 0;
    cin >> string;
    for(int i = 0; i < string.size(); ++i){
        if(string[i] == '1'){
        operands.push_back(1);
        }
        if(string[i] == '2'){
        operands.push_back(2);
        }
        if(string[i] == '3'){
        operands.push_back(3);
        }
        if(string[i] == '4'){
        operands.push_back(4);
        }
        if(string[i] == '5'){
        operands.push_back(5);
        }
        if(string[i] == '6'){
        operands.push_back(6);
        }
        if(string[i] == '7'){
        operands.push_back(7);
        }
        if(string[i] == '8'){
        operands.push_back(8);
        }
        if(string[i] == '9'){
        operands.push_back(9);
        }
        cout << string[i];
    }
    cout << string.size();
    for(auto i : operands)
        cout << i;

    return 0;

}

