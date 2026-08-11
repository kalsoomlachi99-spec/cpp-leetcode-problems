#include <iostream>
using namespace std;

int main() {
    // printing all possible subarrays of an array
    /*mathematically no of subarrays can be calulated by [n*(n+1) / 2] 
    // => n = 5, 5 * ( 5 + 1 ) / 2 => 5 (6) / 2 => 30 / 2 => 15*/

    int arr[] = {1, 2, 3, 4, 5};
    int n = size(arr);

    for (int st = 0; st < n; st++){

        for (int end = st; end < n; end++){

            for (int i = st; i <= end; i++){
                
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}