#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <map>
using namespace std;

int main5() {

    string a,b,c;

    cin >> a >> b >> c;
    if(a > b && a > c){
        if(b >= c)
            cout << c;
        else cout << b;
    }
    else cout << a;

    return 0;
}