#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    /*Sort Array with 0s, 1s & 2s*/
    /*leetcode problem 75 : Sort colors */
    // Brute force approach : TC = O(nlogn) , SC = O(1)


    vector <int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    
    sort(nums.begin() , nums.end());

    for (int val : nums) {
        cout << val << " " ;
    }

    cout << endl;

    return 0;
}