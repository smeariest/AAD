#include "header.h"
#include <iostream>
#include "implement.cpp"
using namespace std;

const int arrSize = 10;

int main()
{

    int arrValues[arrSize] = {1, 4, 3, 6, 7, 0, -9, 0, -10, 7};
    // int arrValues[arrSize] = {1, 4, 3, 6, 7, 0, -9, 0, -4, 10};

    int maxProduct = ArrayUtil::highestProduct(arrValues, arrSize);
    cout << "Value of highest product: " << maxProduct << endl;

    return 0;

    /*  
    // Testing purposes
    int arrValues[arrSize];
    int randomNr = 0;
    srand(time(NULL));

    for (int i = 1; i < arrSize; i++)
    {
        randomNr = rand() % 5;
            if (rand() % 2 == 0){
            randomNr *= -1;
        }
        arrValues[i] = arrValues[i - 1] + randomNr;
        
    }
*/
}
