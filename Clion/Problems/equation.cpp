#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main() {
    double a , b, c, x1, x2, D;
    cin >> a >> b >> c;
    D=sqrt(b*b-4*a*c);

        if(a!=0){
            if(D > 0){
                x1 = (-b+D)/(2*a);
                x2 = (-b-D)/(2*a);
                    cout << x1 << " " << x2;
                }
            else if(D==0){
                if (b==0)
                    cout << 0;
                else{
                x1=-b/(2*a);
                    cout << x1;
                }}
            }
        else{
            if(b!=0)
                cout << -c/b;
        }
    return 0;
}
