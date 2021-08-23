#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

int main(){
    int A, N, M, T, K;
    int from, to, x, flag;
    flag = 0;
    char let;
    int pos, ans;
    ans = 1;
    std::vector <int> ter;
    std::string s;
    std::vector <std::string> data;
    std::map <std::pair<int, char>, int> m;

    std::cin >> A >> N >> M;
    for(int i = 0; i < M; i++){
        std::cin >> from >> to >> let;
        m[std::make_pair(from, let)] = to;
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
        pos = 0;
        for(int j = 0; j < data[i].length(); j++){
            if(m.find(std::make_pair(pos, data[i][j])) == m.end()){
                ans = 0;
                break;
            }
            pos = m[std::make_pair(pos, data[i][j])];
        }
        for(int k = 0; k < T; k++){
            if(pos == ter[k]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            ans = 0;
        }
        std::cout << ans << ' ';
        ans = 1;
        flag = 0;
    }
}