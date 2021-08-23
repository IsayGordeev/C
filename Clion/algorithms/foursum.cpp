#include <iostream>
#include <algorithm>

void check_the_match(int *a, int &it, int k){
    int start = it;
    while (a[start] == a[it]) {
        it += k;
    }
}

void fourSumto(int *nums, int &n , int& b) {

    std::sort(nums, nums + n);


    for (int it1 = 0 ; it1 < n; check_the_match(nums, it1, 1))
        for (int it = it1 + 1 ; it < n - 2; check_the_match(nums, it, 1)) {
            int left = it + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[it1] + nums[it] + nums[left] + nums[right];
                if (sum == b) {
                    std::cout << nums[it1] << " " << nums[it] << " " <<  nums[left] << " " << nums[right] << " ";
                    check_the_match(nums, left, 1);
                    check_the_match(nums, right, -1);
                } else{
                    if (sum < b) {
                        check_the_match(nums, left, 1);
                    } else {
                        check_the_match(nums, right, -1);
                    }
                }
            }
        }

}

int main(){


    int a, b;
    std::cin >> a;
    int* array = new int[a];

    for (int i = 0; i < a; ++i){
        std::cin >> array[i];
    }
    std::cin >> b;

    fourSumto(array, a, b);

    std::cout << std::endl;

    delete [] array;

    return 0;
}