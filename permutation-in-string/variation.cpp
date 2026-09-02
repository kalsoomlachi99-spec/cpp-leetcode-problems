#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isFreqSame(unordered_map<char, int> freq, unordered_map<char, int> windFreq){ // TC : O(1)
    for(int i = 0; i < 26; i++){
        if(freq != windFreq){
            return false;
        }
    }
     
    return true;
}

bool checkInclusion(string s1, string s2){ // TC : O(n^2)
    unordered_map<char, int> freq;
    
    //Step 1: store fequency of s1
    for (int i = 0; i < s1.length(); i++){
        freq[s1[i] - 'a']++; //s1[i]-'a' will calculate nexr index
    }
    
    int windSize = s1.length();

    //Step 2: Search s1 permutation in s2, window based
    for (int i = 0; i < s2.length(); i++){
        int windIdx = 0, idx = i;
        unordered_map<char, int> windFreq;

        while (windIdx < windSize && idx < s2.length()){
            windFreq[s2[idx] - 'a'] ++;
            windIdx++; idx++;
        }

        if(isFreqSame(freq, windFreq)){ //found
            return true;
        }
    }

    return false;
}

int main() {
    
    /*Permutation in String - Variation - using unordered map*/
    //leetcode problem no 567

    string s1 = "ab" , s2 = "eidbaooo";

    cout << checkInclusion(s1, s2) << endl;

    return 0;
}
