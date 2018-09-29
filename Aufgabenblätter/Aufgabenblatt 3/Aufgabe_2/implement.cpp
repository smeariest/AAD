#include "header.h"
#include <iostream>
using namespace std;



 bool StringUtil::isPalindrome(string input){
	// return true if input string length is 1 or 0
	if(input.length() == 0 || input.length() == 1){
		return true;
	}

	// compare first and last letter of input string & run function recursive with substring of input starting with second letter and ending with second last letter "monom" => "ono" 
	return (input[0] == input[input.length()-1] && isPalindrome(input.substr(1, input.length()-2)));
}

