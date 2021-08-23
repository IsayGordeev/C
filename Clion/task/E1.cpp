#include <iostream>
#include <vector>
#include <string>


int64_t Hash( std::string const& B, std::vector<uint64_t>& pd , int k){
    int64_t hashA = 0;
    const int m = 1000000087;
    for (int i = k; i < k + 10; i++){
        hashA = (hashA + (B[i] - 'a' + 1) * pd[i]) % m;
    }
    return hashA;
}
void print(std::string const& B, int k){
    for (int i = k; i < k + 10; i++){
        std::cout << B[i];
    }
}
void RKA(std::string const& B){
    const int p = 37;
    const int m = 1000000087;
    int a = 10, b = B.size();

    std::vector<uint64_t> pd(std::max(a, b));
    std::vector<uint64_t> hashB(b + 1, 0);

    pd[0] = 1;
    int64_t hashA = 0;
    for (int i = 1; i < (int)pd.size(); i++){
        pd[i] = (pd[i-1] * p) % m;
    }


    for (int i = 0; i < b; i++){
        hashB[i+1] = (hashB[i] + (B[i] - 'a' + 1) * pd[i]) % m;
    }

    for (int i = 0; i < 10; i++){
        hashA = (hashA + (B[i] - 'a' + 1) * pd[i]) % m;
    }


    bool is = false;
    for(int j = 0; j < b - a + 1; j++){
        for (int i = 0; i + a - 1 < b; i++){
            int64_t m_hashB = (hashB[i+a]  - hashB[i]);
            if (m_hashB == Hash(B, pd, j) * pd[i] % m){
                std::cout << i << " ";
                print(B, i);
                is = true;
            }
        }}
    if (!is){
        std::cout << -1;
    }
}

int main()
{
    std::string b;
    std::cin >> b;
    RKA(b);
}