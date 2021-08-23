#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <list>
#include <forward_list>

using namespace std;

int unit(){
    static int curr = 0;
    return curr++;
}

//int my_rand(int& max, int& min){
//    return rand()%(max - min + 1) + min;
//}



struct MyRand{
    int min, max;
    int operator()() {
        return rand()%(max - min + 1) + min;
    }
};

int main1231(){

    vector<int> A(10);
    int min, max;
//    MyRand rnd;
//    cin >> min >> max;
//    rnd.min = min;
//    rnd.max = max;
//
//
//  int random_num = rand()%(max - min + 1) + min;
//
//
//    generate(A.begin(), A.end(), rnd);
//
//    for(auto i : A)
//        cout << i << " ";
    int sum;

    cin >> sum;


    return 0;
}