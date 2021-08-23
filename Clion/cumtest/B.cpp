#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class Automate{
public:
    Automate() = default;
    char bylet;
    unsigned num;
    Automate(unsigned n, char l){
        num = n;
        bylet = l;
    }
};

int main(){
    int x, y, pos=1, cond;
    char a, b;
    
    std::string s;
    std::vector <char> ans;
    std::map <std::pair<int, char>, Automate> m;
    std::cin >> cond;
    for(int i = 0; i < 4 * cond; i++){
        std::cin >> x >> a;
        std::cin >> y >> b;
        Automate inf(y, a);
        m[std::make_pair(x, b)] = inf;
    } 
    std::cin >> s;
    for(char & i : s){
        ans.push_back(m[std::make_pair(pos, i)].bylet);
        pos = m[std::make_pair(pos, i)].num;
    }
    for(char & i : ans){
        std::cout << i;
    }
}
