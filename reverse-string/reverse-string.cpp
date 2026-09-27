#include <iostream>
#include <cstring>
using namespace std;

int main() {
    /*Reverse String
    Leetcode problem no 344*/

    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    int start = 0, end = strlen(str) - 1;

    while (start < end){
        swap (str[start++], str[end--]);
    }
    
    cout << str << endl;

    return 0;
}
