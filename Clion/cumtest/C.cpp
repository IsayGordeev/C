#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(){
    int A, K, T, M, N;
    
    char m_alphabet;
    
    int begin, end;
    std::vector <int> term_conditions;
    std::vector <std::string> request;
    std::map <std::pair<int, char>, int> DKA;

    std::cin >> A >> N >> M;
    for(int i = 0; i < M; i++){
        std::cin >> begin >> end >> m_alphabet;
        DKA[std::make_pair(begin, m_alphabet)] = end;
    }

    std::cin >> T;
    for(int i = 0; i < T; i++){
        int x;
        std::cin >> x;
        term_conditions.push_back(x);
    }

    std::cin >> K;
    for(int i = 0; i < K; i++){
        std::string s;
        std::cin >> s;
        request.push_back(s);
    }
    
    for(int i = 0; i < K; i++){
        bool is_DKA_part = false;
        int term_condition = 0;

        for(int j = 0; j < request[i].length(); j++){
            if(DKA.find(std::make_pair(term_condition, request[i][j])) == DKA.end()){
                is_DKA_part = false;
                break;
            }
            term_condition = DKA[std::make_pair(term_condition, request[i][j])];
        }
        
        for(int k = 0; k < T; k++){
            if(term_condition == term_conditions[k]){
                is_DKA_part = true;
                    break;
            }
        }

        std::cout << is_DKA_part << ' ';
    }
}