#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a;
    vector<vector<int>> d;
    map<int, int> num;
    for (int i = 0; i < N; ++i){
        int b;
        cin >> b;
        a.push_back(b);
        num[b] = count(a.begin(),a.end(), b);
    }
    for(int i = 0; i < N; ++i){
        for (int j = i+1; j < N; ++j){
            for(int k = j+1; k < N; ++k){
                if(a[i]+a[j]+a[k]==0){
                    vector<int> f;
                    f.push_back(a[i]);
                    f.push_back(a[j]);
                    f.push_back(a[k]);
                    sort(f.begin(),f.end());
                    if(count(d.begin(),d.end(),f) == 0)
                        d.push_back(f);
                }
            }
        }
    }
    sort(d.begin(),d.end());
    for(int i = 0; i < d.size(); ++i){
        for(int j = 0; j < 3; ++j){
            if(count(d[i].begin(),d[i].end(),d[i][j]) > num[d[i][j]]){
                d[i].clear();
                break;
            }
            cout << d[i][j] << " ";
        }

    }
}