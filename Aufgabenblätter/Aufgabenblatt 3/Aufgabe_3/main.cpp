#include <iostream>
#include "header.h"
#include "implement.cpp"
using namespace std;

string str1 = "check string";
string str2 = "publck string";
string result;


int main(){


result = StringUtil::lcs(str1, str2);

cout << "String 1: " << str1 << endl;
cout << "String 2: " << str2 << endl;
cout << "Longest Substring: '" << result << "'" << endl;

}
