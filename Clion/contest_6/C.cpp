#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Checker{
private:
    const unsigned int hashnums[3] = {29, 31, 37};
    const unsigned int m_size = 50000000;
    std::vector<bool> hashset;
    uint64_t Hash(const std::string& key, unsigned int hashnum){
        uint64_t hashValue = 0;
        for(auto c: key){
            hashValue += c - 'a' + 1;
            hashValue *= hashnum;
        }
        return hashValue;
    }

public:
    Checker():hashset(m_size, false){}
    void Add(const std::string& s){
        for (unsigned int hashbase : hashnums){
            hashset[Hash(s, hashbase)] = true;
        }
    }
    bool Exists(const std::string& s){
        bool is = true;
        for (unsigned int hashbase : hashnums){
            if (!hashset[Hash(s, hashbase)]){
                is = false;
            }
        }
        return is;
    }
};


int main (){
    string a = "abc";
    string b = "abcd";
    Checker str;
    str.Add(a);
    str.Add(b);
    str.Add(a+b);
    cout << str.Exists(a+b);

    return 0;
}