#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <utility>
using namespace std;



int main(){
    int N;
    cin >> N;
    vector<string> name;
    vector<int> number;
    vector<int> debt;
    map<int,pair<string, int>> katalog;
    for(int i = 0; i < N; ++i){
        string m_name;
        cin >> m_name;
        int m_number;
        cin >> m_number;
        int m_debt;
        cin >> m_debt;
        katalog[m_debt] = make_pair(m_name, m_number);
    }
    int stop = 0;

    map<int,pair<string, int>>::reverse_iterator it = katalog.rbegin();
    while (it != katalog.rend() ) {
        if(it->first > 0){
            cout <<  it -> second.first << " " << it ->second.second << " " << it ->first << endl;
            it++;
            ++stop;
        }
        if (stop > 9)
            break;
    }

};