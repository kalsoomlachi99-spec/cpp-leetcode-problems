#include <iostream>
#include <vector>

using namespace std;

void merge(vector <int>& A, int m, vector <int>& B, int n){
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while(i >= 0 && j >= 0){
        if(A[i] > B[j]){
            A[idx--] = A[i--];
        }else{
            A[idx--] = B[j--];
        }
    }
    while(j >= 0) {
        A[idx--] = B[j--];
    }
}

int main() {
    
    /*Merge Two Sorted Array*/
    // Leetcode problem no 88

    vector <int> A = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector <int> B = {2, 5, 6};
    int n = 3;

    merge(A, m, B, n);

    for(int val : A) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
