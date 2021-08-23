#include <iostream>
#include <vector>
#include <string>

void RKA(std::string const& A, std::string const& B){
    const int p = 37;
    const int m = 1000000087;
    int a = 10, b = B.size();

    std::vector<uint64_t> pd(std::max(a, b));
    std::vector<uint64_t> hashB(b + 1, 0);

    pd[0] = 1;
    for (int i = 1; i < (int)pd.size(); i++){
        pd[i] = (pd[i-1] * p) % m;
    }


    for (int i = 0; i < b; i++){
        hashB[i+1] = (hashB[i] + (B[i] - 'a' + 1) * pd[i]) % m;
    }

    std::vector<int> hashAs(b-a);
    for (int j = 0; j + a < b; ++j){
        int64_t hashA = 0;
        for (int i = j; i < j + a; i++){
            hashA = (hashA + (B[i] - 'a' + 1) * pd[i]) % m;
        }
        hashAs.push_back(hashA);
    }
//    for (int i = 0; i < b- a; ++i){
//        std::cout << hashAs[i];
//    }
    bool is = false;
    for (int i = 0; i + a - 1 < b; i++){
        int64_t m_hashB = (hashB[i+a]  - hashB[i]);
        if (m_hashB == hashAs[i] * pd[i] % m){
            std::cout << i << " ";
            is = true;
        }
    }
    if (!is){
        std::cout << -1;
    }
}

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    RKA(a, b);
}