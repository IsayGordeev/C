#include <iostream>
#include <vector>
using namespace std;

int mai00909n()
{
    int N,a,b;
    cin >> N;
    int res = N;
    vector<int> A;
    vector<int> B;

    for (int i = 0; i < N; i++){
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
        if (a + b != N - 1)
            res-=1;
        else{
            for (int j = 0; j < i; j++){
                if ((A[A.size()-1] == A[j]) and (B[B.size()-1] == B[j]) and (A[A.size()-1]!= -1)){
                    res-=1;
                    A.pop_back();
                    A.push_back(-1);
                    B.pop_back();
                    B.push_back(-1);
                }
                else {

                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
