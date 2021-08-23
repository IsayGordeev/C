#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool IsPalindrom (string w){
    if (w.empty())
        return true;
    vector <char>  d;
    for(int i = w.size()-1; 0 <= i ;--i)
        d.push_back(w[i]);
    for (int i = 0; i <= w.size()-1; ++i)
        if(d[i]!=w[i])
            return false;
    return true;
}

vector <string> PalindromFilter (vector<string> words, int minLength){
    vector<string> abc;
    for(int i = 0; i < words.size(); ++i)
        if(IsPalindrom(words[i]) && words[i].size()>=minLength)
            abc.push_back(words[i]);
        return abc;
}

int main10(){

    return 0;
}
