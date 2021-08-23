#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


int main(){
    int A, N;
    cin >> A >> N;
    int M;
    cin >> M;
    map<pair<int, char>, int> uDKA;
    vector<int> sorte;
    for(int i = 0; i < M; ++i){
        int a,b;
        char c;
        cin >> a >> b >> c;
        sorte.push_back(a);
        sorte.push_back(b);
        uDKA[make_pair(a, c)] = b;
    }
    sort(begin(sorte),end(sorte));
    int T;
    cin >> T;
    vector<int> state;
    for(int i = 0; i < T; ++i){
        int a;
        cin >> a;
        state.push_back(a);
    }
    int K;
    cin >> K;
    vector<string> req;
    for(int i = 0; i < K; ++i){
        string a;
        cin >> a;
        req.push_back(a);
    }
    for(int i = 0; i < K; ++i){
        int m_state = sorte[0];
        for(int j = 0; j < req[i].size(); ++j){
            uDKA.find(make_pair(m_state, req[i][j]));
        }
    }







}