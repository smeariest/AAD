#include <iostream>
using namespace std;

void foo(int *array, int size)
{
    int sum     = 0;
    int product = 1;

    //for-Schleife mit der Laufzeit O(n)
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    //for-Schleife mit der Laufzeit O(n)
    for (int i = 0; i < size; i++) {
        product *= array[i];
        cout << sum << "," << product << endl;
    }
}



int main()
{
    cout << "Runtime of foo, 2 times 0(n) = 0(2n), linear";

    return 0;
}
