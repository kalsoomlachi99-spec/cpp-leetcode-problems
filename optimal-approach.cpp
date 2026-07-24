#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*Product of Array Except Self 
    -> optimal approach 
    -> time complexity o(n)
    -> space complexity o(n)*/

    // leetcode problem 238

    vector <int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector <int> ans(n , 1);
    vector <int> prefix(n , 1);
    vector <int> suffix(n , 1);

    // prefix array

    prefix [0] = 1;

    for (int i = 1; i < n; i ++){
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // suffix array

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i --){
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // product array

    for (int i = 0; i < n; i ++){
        ans[i] = prefix[i] * suffix[i];
    }

    // result
    
    cout << "Product of Array Except Self is: " << endl;
    for (int val : ans){
        cout << val << " ";
    }
        
    return 0;
}
