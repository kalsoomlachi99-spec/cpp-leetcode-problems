#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    /*Sort Array with 0s, 1s & 2s*/
    /*leetcode problem 75 : Sort colors */
    //Optimal approach : TC = O(n) , SC = O(1)

    //Note: there is optimized approach called "Dutch National Flag Algorithm" which has discused in cpp-algorithms repo


    vector <int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = nums.size();
    
    int countOfZeros = 0;
    int countOfOnes = 0;
    int countOfTwos = 0;


    for (int i = 0; i < n; i ++) { // O(n)
        if (nums[i] == 0) countOfZeros ++;
        else if (nums[i] == 1) countOfOnes ++;
        else countOfTwos ++;
    }

    // O(n)
    int indx = 0;

    for (int i = 0; i < countOfZeros; i++) {
        nums[indx++] = 0;
    }
    for (int i = 0; i < countOfOnes; i++) {
        nums[indx++] = 1;
    }
    for (int i = 0; i < countOfTwos; i++) {
        nums[indx++] = 2;
    }

    for (int val : nums) {
        cout << val << " " ;
    }

    cout << endl;

    return 0;
}
