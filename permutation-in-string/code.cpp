#include <iostream>
#include <string>
using namespace std;

bool isFreqSame(int freq[], int windFreq[]){ // TC : O(1)
    for(int i = 0; i < 26; i++){
        if(freq[i] != windFreq[i]){
            return false;
        }
    }
     
    return true;
}

bool checkInclusion(string s1, string s2){ // TC : O(n^2)
    int freq[26] = {0};
    
    //Step 1: store fequency
    for (int i = 0; i < s1.length(); i++){
        freq[s1[i] - 'a']++; //s1[i]-'a' will calculate nexr index
    }

    int windSize = s1.length();

    //Step 2: Search s1 permutation in s2, window based
    for (int i = 0; i < s2.length(); i++){
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

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
    
    /*Permutation in String*/
    //leetcode problem no 567

    string s1 = "ab" , s2 = "eidbaooo";

    cout << checkInclusion(s1, s2) << endl;

    return 0;
}
