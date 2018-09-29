#include <iostream>
#include "header.h"
#include "implement.cpp"
using namespace std;

bool result = 0;
string inputvalue = "monnom"; // Is a palindrome
//string inputvalue = "tikitaka"; // Is not a palindrome

int main()
{

result = StringUtil::isPalindrome(inputvalue);

if (result == true){   
    cout << "string '" << inputvalue << "' is a palindrome!" << endl;;

}else if (result == false){
    cout << "string '" << inputvalue << "' is not a palindrome!" << endl;;

}

    return 0;
}
