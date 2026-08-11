#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Maximum Subarray Sum - Optimized Brute Force Approch

    cout << " ===== Maximum Subarray Sum ====== " << endl;

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = size(arr);

    int maxSum = INT_MIN;
    int startIndex = 0, endIndex = 0;

    for (int st = 0; st < n; st++){
        
        int currentSum = 0;

        for (int end = st; end < n; end++){

            currentSum += arr[end];

            if(currentSum > maxSum){
            
                startIndex = st;
                endIndex = end;
            }
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << " Subarray: " ;
    for (int i = startIndex; i <= endIndex; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;

    cout << " Maximum Subarray Sum: " <<  maxSum << endl;

    cout << " --------------------- " << endl;
 
   return 0;
}  
