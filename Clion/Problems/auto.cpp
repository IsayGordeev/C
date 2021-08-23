#include <iostream>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

int main4(){
   //Cycle
   /*
    * vector <string> nums_letter = {"a1","b2"};
    for (auto c : nums_letter)
        cout << c << " ";
   */
    // Ammout of one
    vector <int> nums = {1,2,3,4,5,6,1,2,1,1,3};
    int ammount1 = 0;
    for (int i : nums) {
        if (i == 1)
            ++ammount1;
    }
    int ammount2 = count(begin(nums),end(nums),1);
    cout << ammount1 << " " << ammount2 << endl;
     // Sorting nums
     sort(begin(nums),end(nums));
     for ( auto i : nums)
         cout << i << " ";







    return 0;
}