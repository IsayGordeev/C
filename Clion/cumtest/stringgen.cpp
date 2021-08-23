#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
    char c = 0;
    vector<string> string1;
    vector<int> operands;
    vector<char> operators;
    string a;
    int j = 0;
    while(cin >> a){
        string1.push_back(a);
    }
    cout << string1.size();
    return 0;
}