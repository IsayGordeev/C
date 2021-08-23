#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> A;
    int I;
    cin >> I;
    for(int i = 0; i < I; ++i ){
        int h;
        cin >> h;
        A.insert(h);
    }
    cout << A.size();
    return 0;
}