#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int  SIZE    = 4;
    long input[] = {12, 4, 7, 3};
    long *output = ArrayUtil::multiplyArrayValues(input, SIZE);

    for (int i = 0; i < SIZE; ++i) {
        cout << i << ": " << output[i] << "\n";
    }

    return 0;
}
