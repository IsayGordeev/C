#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main2 () {

    int A[5][5], B[5][5], C[5][5],n;

        cin >> n;

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            A[i][j]=B[i][j]=C[i][j]=0;

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> A[i][j];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> B[i][j];

        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j )
                for(int k = 0; k < n; ++k)
                    C[i][j]+=A[j][k]*B[k][j];

        for(int i = 0; i < n; ++i){
            cout << endl;
            for(int j = 0; j < n; ++j)
                cout << C[i][j] << " ";}


    return 0;
}