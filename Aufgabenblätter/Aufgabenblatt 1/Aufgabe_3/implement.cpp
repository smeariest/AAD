#include "header.h"
#include <iostream>
using namespace std;

bool StringUtil::checkUniqueness(string s)
{
    int seenChars[26] = {0};

    // Normalize input
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for (char i : s) {
        if (seenChars[i - 65] == 0) { // Is index (A - 65 = 0) set?
            seenChars[i - 65] = 1;
        } else {
            return false;
        }
    }
    return true;
}

bool StringUtil::uniqueStr(string str) {

    int strLength = str.length();

    // If at any time we encounter 2
    // same characters, return false
    for(int i = 0; i < strLength; i++) {
        for(int j = i + 1; j < strLength; j++) {
            if(str[i] == str[j]) {
                return false;
            }
        }

    }

    // If no duplicate characters encountered,
    // return true
    return true;
    //cout << str.length() << endl;;
    //return 0;
}
