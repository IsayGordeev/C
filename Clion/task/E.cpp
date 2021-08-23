#include <iostream>
#include <vector>
#include <string>

int64_t hash(int& a, std::string const& B,std::vector<int64_t> &pd ){
    int64_t hashA = 0;
    int itterator = 0;
    const int m = 1000000087;
    for (int i = a; i < a + 10; i++){
        hashA = (hashA + (B[i] - 'A' + 1) * pd[itterator]) % m;
        itterator++;
    }
    return hashA;
}

void Rabin_Karpov(std::string const& B){
    const int p = 37;
    const int m = 1000000087;
    int a = 10, b = B.size();

    std::vector<int64_t> p_deg(std::max(a, b));
    p_deg[0] = 1;

    for (int i = 1; i < (int)p_deg.size(); i++){
        p_deg[i] = (p_deg[i-1] * p) % m;
    }

    std::vector<int64_t> vec(b + 1, 0);

    for (int i = 0; i < b; i++){
        vec[i+1] = (vec[i] + (B[i] - 'A' + 1) * p_deg[i]) % m;
    }

    int64_t vec_A = 0;

    for (int i = 0; i < a; i++){
        vec_A = (vec_A + (B[i] - 'A' + 1) * p_deg[i]) % m;
    }

    int flag = 0;
    for(int j = 0; j  < b - a; ++j){
        std::cout << j << std::endl;
    for (int i = j+1; i + a - 1 < b; i++){
        if (vec[i+a] - vec[i] == hash(j, B, p_deg) * p_deg[i] % m){
            std::cout << i << " ";
            flag++;
        }
    }
        std::cout << std::endl;
    }
    if (flag == 0){
        std::cout << -1;
    }
}

int main()
{
    std::string B;
    std::cin >> B;
    Rabin_Karpov(B);
}