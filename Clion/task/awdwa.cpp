#include <iostream>
#include <string>
#include <cmath>
#include <vector>

size_t p = 31;
std::string s;
const size_t m = 1e9 + 9;
std::vector<size_t> p_pow;
void generate_pow(const size_t n){
    p_pow.resize(n);
    p_pow[0] = 1;
    for(size_t i = 1; i < n; ++i)
        p_pow[i] = (p_pow[i-1]*p) % m;
}

std::vector<size_t> s_h;
void generate_s_h(){
    s_h.assign(s.size()+1, 0);

    for(size_t i = 0; i < s.size(); ++i)
        s_h[i+1] = (s_h[i] + (s[i]+1 - 'A')*p_pow[i]) % m;
}

bool check_substr(size_t beg, size_t len){
    size_t p_h = 0;
    for(size_t i = 0; i < len; ++i)
        p_h = (p_h + (s[beg + i]+1 - 'A')*p_pow[i]) % m;


    size_t count = 0;
    for(size_t i = 0; i < s.size() + 1 - len; ++i){
        auto c_hash = (m + s_h[i + len] - s_h[i]) % m;
        if(c_hash == (p_h*p_pow[i]) % m){
            ++count;
            if(i < beg)
                return false;
        }
        if(count > 1)
            return true;
    }

    return count > 1;
}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    if(!(std::cin >> s))
        return 0;
    if(s.size() < 10)
        return 0;

    generate_pow(s.size());
    generate_s_h();
    size_t len = 10;
    for(size_t i = 0; i < s.size()-len+1; ++i){
        if(check_substr(i, len))
            std::cout << s.substr(i, len) << " ";
    }
    std::cout << std::endl;

}