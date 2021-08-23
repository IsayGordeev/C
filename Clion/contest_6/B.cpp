#include <iostream>
#include <vector>
#include <string>

void RKA(std::string const& A, std::string const& B){
    const int p = 37;
    const int m = 1000000087;
    int a = A.size(), b = B.size();

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



    for (int i = 0; i < a; i++){
        hashA = (hashA + (A[i] - 'a' + 1) * pd[i]) % m;
    }

    bool is = false;
    for (int i = 0; i + a - 1 < b; i++){
        int64_t m_hashB = (hashB[i+a]  - hashB[i]);
        if (m_hashB == hashA * pd[i] % m){
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