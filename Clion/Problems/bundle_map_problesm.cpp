#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<char, int> Count(string& a){
    map<char, int> table;
    for(int i = 0; i < a.size(); ++i){
        int flag = 0;
        for(int j = 0; j < a.size(); ++j){
            if(a[i] == a[j])
                ++flag;
            }
            table.insert(pair<char,int>(a[i],flag));}
    return table;
}

int main452(){
    int N;
    cin >> N;
    vector<string> words1(N);


    for(int i = 0; i < N; ++i){
        string word1, word2;
        cin >> word1 >> word2;
       (Count(word1)!=Count(word2))?(words1.push_back("NO") ):(words1.push_back("YES"));
    }
    for (auto i : words1)
        cout << i << endl;

    return 0;
}