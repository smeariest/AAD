#include "header.h"
#include "implement.cpp"
#include <iostream>
#include "string"
using namespace std;

int main() {

string str1 = "ampel";
string str2 = "palme";

// Write return value of function to bool
bool return_value = StringUtil::anagramCheck(str1, str2);

    // check if returned value was 1
    if (return_value == 1){

        cout << "Dies ist ein Anagramm" << endl;

    }

    // check if returned value was 0
    if (return_value == 0){

    cout << "Dies ist kein Anagramm" << endl;
    
    }




}