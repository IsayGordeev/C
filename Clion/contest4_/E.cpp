#include <iostream>
#include <stack>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    stack <int> a;
    int b, c;
    cin >> b;
    while ( b != 0){
        if ( b > 0 ) {
            a.push(b);
        }
        if ( b < 0 && !a.empty()) {
            if( abs(b) < a.top() ) {
                c = a.top() + b;
                a.pop();
                a.push(c);
            }
            else {
                a.pop();
            }
        }
        cin >> b;
    }
    if ( !a.empty()) {
        cout << a.size() << " "<< a.top();
    }
    else {
        cout << "0" << " " << "-1";
    }
}