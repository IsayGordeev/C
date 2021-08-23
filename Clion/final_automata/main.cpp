#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<pair<int, char>, int> abs;
    abs[{1,1}] = 1;
    abs[{3,2}] = 2;
    abs[{1,0}] = 3;
    for (auto i : abs){
        cout << i.second << endl;}
}