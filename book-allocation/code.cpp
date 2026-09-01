#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector <int>& nums, int n, int m, int maxAllowedPages) { //TC: O(n)
    int students = 1, pages = 0;

    for (int i=0; i<n; i++) { //allocate books to each student

        if (nums[i] > maxAllowedPages) return false; // corner & important case

        if (pages + nums[i] <= maxAllowedPages) {
            pages += nums[i];
        } else {
            students++;
            pages = nums[i];
        }
    }

    return students > m ? false : true;
}

int allocateBooks(vector <int>& nums , int n, int m){ // TC: O(log(range))*n 

    if(m > n) return -1; // edge case

    int sum = 0 , maxVal = INT_MIN;

    for (int i=0; i<n; i++){ //O(n) 
        sum += nums[i];
        maxVal = max(maxVal, nums[i]);
    }

    int ans = -1;
    int st = maxVal, end = sum; // range of possible ans

    while (st <= end) { // Applying binary search
        int mid = st + (end - st) / 2;

        if(isValid(nums, n, m, mid)){ //left
            end = mid - 1;
            ans = mid;
        } else { //right
            st = mid + 1;
        }
    }

    return ans;
}

int main() {
    
    /*Book allocation problem*/

    vector <int> nums = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(nums, n, m) << endl;

    return 0;
}
