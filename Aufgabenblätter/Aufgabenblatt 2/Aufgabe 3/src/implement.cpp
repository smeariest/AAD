#include "header.h"
#include <iostream>
#include "algorithm"
#include "string"
using namespace std;

bool StringUtil::anagramCheck(string s1, string s2)
{

    if (s1.length() != s2.length()){  //Check if strings do not have same length
        return false; //directly return false if strings are not having same length
    }
    
    //Transform String to lower case letters (s1 and s2)
    //"::" selects "tolower" from global namespace
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    //Sort the strings aplhabetically
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    //Check if s1 equals s2
    if (s1 == s2){
        return true; // return true if strings are equal to each other
    
    } else {
        return false;
    }
}
