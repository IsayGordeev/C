#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct People{

    string name;
    string surname;
    int age;
    string sex;

};

struct Adress{

    string streetname;
    string city;
    int homenumber;
    string sex;

};


int main1() {
    vector<vector<int>> oddnumerals = { {}, {1,2,3}  };
    vector<vector<int>> oddnumerals1 = { {1,2}, {1,2,3}  };

    oddnumerals[0].insert( end(oddnumerals[0]), begin(oddnumerals1[1]), end(oddnumerals1[1]));
    for (auto i : oddnumerals[0])
        cout << i << " ";

    return 0;
}