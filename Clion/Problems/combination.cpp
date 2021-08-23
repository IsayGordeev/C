#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main7() {
    int a;
    vector <int> b;
      cin >> a;
       while (a>0){
        if(a%2==0){
            b.push_back(0);
        }
        else
        b.push_back(1);
        a/=2;
       }
       for(int i = b.size()-1; 0 <= i; --i)
           cout << b[i];
  return 0;
}