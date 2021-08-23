#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main9 () {
    string a;
    vector<string> b;
    cin >> a;
    b.push_back(a);
    cout << a[1] << " " << b[0][1];
    //cout << IsPalindrom(a);
    return 0;
}