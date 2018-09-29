#include <iostream>
#include "header.h"
using namespace std;

int main()
{

string value = "ABCCDEF";
string result = "No return value!";


/*

bool returnValue = StringUtil::checkUniqueness(value);

    if (returnValue == 1){

        result = "TRUE";

    }else if(returnValue == 0){

        result = "FALSE";

    }
*/

bool returnValue = StringUtil::uniqueStr(value);

    if (returnValue == 1){

        result = "TRUE";

    }else if(returnValue == 0){

        result = "FALSE";

    }

cout << "Das Resultat der Abfrage lautet: " << result << endl;

    return 0;
}
