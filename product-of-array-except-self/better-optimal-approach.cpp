#include <iostream>
#include <vector>
using namespace std;

int main (){
    /*Product of Array Except Self
    -> better optimal approach 
    -> time complexity o(n)
    -> space complexity o(1)*/

    // leetcode problem 238

    vector <int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector <int> ans(n , 1);    

    // prefix array => will store in ans

    for (int i = 1; i < n; i++){
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // suffix array

    int suffix = 1;

    for (int i = n - 2; i >= 0; i --){
        suffix *= nums[i+1]; // ith suffix value
        ans[i] *= suffix;
    }

    // result

    cout << "Product of Array Except Self is: " << endl;
    for (int val : ans){
        cout << val << " ";
    }

    return 0;
}
