#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void PrintMap1( map<string, string>& m){

    for(auto i : m)
        cout << i.first << ": " << i.second << endl;

}
void PrintAnswersMap( map<int, vector<string>>& m){

    for(auto i : m){
        cout << i.first <<": " ;
        for(string k : i.second)
            cout << k << " ";
        cout << endl;
    }

}

int main090(){
    int N, i = 0;
    cin >> N;
    string command;
    map<string, string> CC;
    map<int,vector<string>> answers;
    while (i < N){
        cin >> command;
        if (command == "CHANGE_CAPITAL"){
            string country, capital;
            cin >> country >> capital;
            if(CC[country].empty()){
                CC.insert(pair<string,string>(country,capital));
                answers[i].push_back("Introduce new county");
                answers[i].push_back(country);
                answers[i].push_back("with capital");
                answers[i].push_back(capital);
            }
            else{
                if(CC[country] == capital){
                    answers[i].push_back("Country");
                    answers[i].push_back(country);
                    answers[i].push_back("hasn't changed its capital");
                }
                else {
                    answers[i].push_back("Country");
                    answers[i].push_back(country);
                    answers[i].push_back("has changed its capital from");
                    answers[i].push_back(CC[country]);
                    answers[i].push_back("to");
                    answers[i].push_back(capital);
                    CC[country]=capital;
                }
            }}
        if (command == "RENAME"){
            string old_country_name, new_country_name;
            cin >> old_country_name >>  new_country_name;
            if(old_country_name == new_country_name)
                answers[i].push_back("Incorrect rename, skip");
            else{
                int k = 0,l = 0;
                for (auto& [i,j] : CC){
                    if(i == old_country_name)
                        ++k;
                    if(i == new_country_name)
                        ++l;}
                if(k == 0 || l!=0)
                    answers[i].push_back("Incorrect rename, skip");
                else{
                    answers[i].push_back("Country");
                    answers[i].push_back(old_country_name);
                    answers[i].push_back("with capital");
                    answers[i].push_back(CC[old_country_name]);
                    answers[i].push_back("has been renamed");
                    answers[i].push_back("to");
                    answers[i].push_back(new_country_name);
                    CC[new_country_name]=CC[old_country_name];
                    CC.erase(old_country_name);
                }
            }
        }
        if (command == "ABOUT"){
            string country;
            cin >> country;
            if (CC[country].empty()){
                answers[i].push_back("Country");
                answers[i].push_back(country);
                answers[i].push_back("doesn't exist");
            }
            else{
                answers[i].push_back("Country");
                answers[i].push_back(country);
                answers[i].push_back("has capital");
                answers[i].push_back(CC[country]);
            }
        }
        if (command == "DUMP"){
            if(CC.empty()){
                answers[i].push_back("There are no countries in the world");
            }
            else{
                PrintMap1(CC);
            }
        }
        ++i;
    }

    PrintAnswersMap(answers);


    return 0;
}
