#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

void find_the_end(std::string s, std::multimap <std::pair<int, char>, int> m, std::vector  <int> ter, int pos, int start, int &check, int T){
    int flag;
    flag = 0;
    if(check)
        return;
    if(start == s.length()){
        for(int k = 0; k < T; k++){
            if(pos == ter[k]){
                check = 1;
                return;
            }
        }
    }

    if(m.find(std::make_pair(pos, s[start])) == m.end()){
        return;
    }
    auto range = m.equal_range(std::make_pair(pos, s[start]));
    for (auto i = range.first; i != range.second; i++){
        find_the_end(s, m, ter, i->second, start + 1, check, T);
    }

}

int main(){
    int A, N, M, T, K;
    int from, to, flag, check, x;
    check = 0;
    flag = 0;
    char let;
    int pos, ans;
    ans = 1;
    std::vector <int> ter;
    std::string s;
    std::vector <std::string> data;
    std::multimap <std::pair<int, char>, int> m;

    std::cin >> A >> N >> M;
    for(int i = 0; i < M; i++){
        std::cin >> from >> to >> let;
        m.insert(std::make_pair(std::make_pair(from, let), to));
    }

    std::cin >> T;
    for(int i = 0; i < T; i++){
        std::cin >> x;
        ter.push_back(x);
    }

    std::cin >> K;
    for(int i = 0; i < K; i++){
        std::cin >> s;
        data.push_back(s);
    }
    for(int i = 0; i < K; i++){
        find_the_end(data[i], m, ter, 0, 0, check, T);
        std::cout << check << ' ';
        check = 0;
    }
}