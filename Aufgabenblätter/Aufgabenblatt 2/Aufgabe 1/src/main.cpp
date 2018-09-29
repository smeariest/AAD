#include "header.h"
#include <iostream>
#include "implement.cpp"
using namespace std;

// define constant int value for all minutes (09:00 - 17:30) will be used for array size
const int minutes = 510;

int main()
{

    // Testing purposes
    // int stockprices[minutes] = {3, 5, 10, 8, 10, 3, 7, 20, 1, 1};
    int stockprices[minutes];
    int randomNr = 0;
    srand(time(NULL)); // Generate seed using system time - for using rand()

    // Generate "Random" value for Array values
    for (int i = 1; i < minutes; i++)
    {
        // Generate random value 
        randomNr = rand() % 5;
        // check if random value is even
            if (rand() % 2 == 0){
            // Multiply random value with -1    
            randomNr *= -1;
        }
        // write random value to value of active array index
        stockprices[i] = stockprices[i - 1] + randomNr;
        
    }

    int maxProfit = Trader::CalculateMaxProfit(stockprices, minutes);

    cout << "Max Profit: CHF " << maxProfit << ".00!";
}