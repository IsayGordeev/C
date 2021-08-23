#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;



void PrintMap( map<int, string>& m){

    for(auto i : m)
        cout << i.first << ": " << i.second << endl;

}



int mainawdw(){

    map<int, string> event;
    event[1] = "Fuck";
    event[2] = "Fuckagain";
    event[3] = "Informalize";
    for (auto& [i,j] : event)
        cout << i << ": " << j << endl;
    cout << "new" << endl;
    map<int, string> m = {{1, "odd"}, {2, "even"}, {1, "one"}};
    m[2] = "two";
    m.erase(1);
    m[3] = "three";
    m.erase(4);
    m[5] = "five";
    cout << m.size();
    for (auto& [i,j] : m)
        cout << i << ": " << j << endl;




    return 0;
}