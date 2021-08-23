#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int64_t Hash( std::string const& B, std::vector<int64_t>& pd , int k){
    int64_t hashA = 0;
    const int m = 1000000087;
    int itt = 1;
    for (int i = k; i < k + 3; ++i){
        hashA+=(B[i] - 'A'+1) * pd[itt];
        cout << (B[i] - 'A'+1) <<"*"<< pd[itt];
        ++itt;
    }

    cout << "=";
    return hashA;
}


void RKA(string& a){
    const int p = 20;
    const int m = 1000000087;
    int len = 3, b = a.size();

    vector<int64_t> degree(max(len, b));

    degree[0] = 1;
    for (int i = 1; i < (int)degree.size(); i++){
        degree[i] = (degree[i-1] * p);
    }

    int64_t q = Hash(a, degree, 0);
    int64_t strhash[b - len];
    strhash[b - len] = q;
    int itt = 1;
    for(int i = 0; i < b - 3 ; ++i){
        strhash[b - len - i - 1] = strhash[b - len - i]*degree[itt] -
                if(itt < 3)
                    ++itt;
                else itt = 1;
    }
//    cout << strhash[0] << endl << Hash(a, degree, 0);

//    for(int j = 0; j < b - len; ++j ){
//        for(int i = 0; i < b - len; ++i){
//
//        }
//    }

    
}

int main(){

    string a;
    cin >> a;
    RKA(a);


    return 0;
}