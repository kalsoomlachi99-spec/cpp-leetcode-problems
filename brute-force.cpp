#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*Product of Array Except Self  
    (product of all elements of an array except of the index which value has to be calculated) 
    -> Brute Force Approach */

    vector <int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector <int> ans(n , 1);

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            if (i != j){
                ans[i] *= nums[j];
            }
        }
    }

    cout << "Product of Array Except Self is: " << endl;
    for (int val : ans){
        cout << val << " ";
    }

    return 0;
}
