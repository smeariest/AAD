#include "header.h"
#include <iostream>
#include <set>
using namespace std;

string StringUtil::lcs(string input1, string input2){

  //create a set of strings called "subStrings"
  set<string> subStrings;
  // create an iterator called "it"
	set<string>::iterator it;

  // initialize
	string result = "No subsring found!";
	int resultLength = 0;
  string value;
  int valueLength = 0;

  // for-loop through letters of string input1 ------------> nested loop: O(n^2)
	for (int i = 0; i < input1.length(); i++) {
//    cout << "**************************************************" << endl;
//    cout << "Äussere for-Schleife, i = " << i << endl;
    // buildng substrings starting with letter at index "i" in input1
		for (int j = 1; j + i < input1.length() + 1; j++) {
//      cout << "---------------------" << endl;
//      cout << "Innere for-Schleife i = " << i << " - j = " << j << endl;
      // insert substring to set
			subStrings.insert(input1.substr(i, j));
//      cout << "substring '" << input1.substr(i, j) << "' inserted!"<< endl;
		}
	}

  // for-loop through all substrings which are saved in the set "subStrings"
	for (it = subStrings.begin(); it != subStrings.end(); it++) {
		value = *it; // write current substring "it" is pointing to into "value"
    valueLength = value.length(); // write length of current substring "it" is pointing to into "valueLength"

    // If using ".find()" and value has not been found in the string, default return value is -1 (npos)
    if(input2.find(value) != string::npos){   // check if current substring is found in string "input2" 
        if(valueLength > resultLength){  // check if length of current substring is greater than length of result
          resultLength = valueLength; // write length of current substring to "resultLength"
          result = value; // write value of current substring to "result"
        }
    }

  }

		
	return result;
}