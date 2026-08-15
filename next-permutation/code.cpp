#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector <int>& nums) { // TC : O(n) & SC : O(1 )
    //Ist step : find the pivot

    int pivot = -1, n = nums.size();
    
    for (int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }

    // corner case : pivot not found
    if(pivot == -1){ 
        reverse(nums.begin(), nums.end()) ; //in place change (changes in the samae vector without using any extra space)
        return;
    }

    // 2nd step : next larger element
    for (int i = n - 1; i > pivot; i--){
        if(nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    //3rd step : reverse (pivot + 1 to n - 1)
    // reverse(nums.begin() + pivot + 1, nums.end());

    int i = pivot + 1, j = n - 1;
    while(i <= j) {
        swap(nums[i++], nums[j--]);
    }
}

int main() {
    
    /*Next Permutation*/
    //Leetcode problem 31

    vector <int> nums ={1,2,3,5,6,4};
    nextPermutation(nums);

    for(int val : nums) {
        cout << val << " " ;
    }
    cout << endl;

    return 0;
}
