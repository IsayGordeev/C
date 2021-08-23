//
//  house_deeds.cpp
//  bundle_of_problems
//
//  Created by Isay Gordeev on 7/15/20.
//  Copyright © 2020 Isay Gordeev. All rights reserved.
//

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main222(){
    int N, i = 0, month_number = 1, quantity, l = 0;
    cin >> N;
    string command;
    string house_work;
    vector<vector<string>> house_works(31);
    house_works.assign(31, vector<string>(100));
    vector<vector<string>> dump_name;
    dump_name.assign(100, vector<string>(100));

    while(i < N){
        cin >> command;

        if (command == "NEXT"){
            ++month_number;
            if(month_number == 2){
                for(int j = 28; j < 31; ++j)
                    if(!house_works[j].empty()){
                        house_works[27].insert(end(house_works[27]),begin(house_works[j]),end(house_works[j]));
                        house_works[j].clear();
                    }
            }
            else{
                if(month_number%2!=0 && (month_number+1)%2==0){
                    if(!house_works[30].empty())
                        house_works[29].insert(end(house_works[29]),begin(house_works[30]),end(house_works[30]));
                    house_works[30].clear();
                }
            }}
        else{
            if (command == "ADD"){
                cin >> quantity;
                cin >> house_work;
                house_works[quantity-1].push_back(house_work);
                house_work.clear();
            }
            else {
                if (command == "DUMP"){
                    cin >> quantity;
                    dump_name.push_back(house_works[quantity-1]);
                    ++l;
                }}
        }
        ++i;
    }

    for(int j = 0; j < l; ++j){
        cout << dump_name[j].size() << " ";
        for(auto k : dump_name[j])
            cout << j;
        cout << endl;}
    return 0;
}
