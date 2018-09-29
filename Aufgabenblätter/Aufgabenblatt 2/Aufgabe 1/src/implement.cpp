#include "header.h"
#include <iostream>
using namespace std;

int Trader::CalculateMaxProfit(const int *values, const int ARRAY_SIZE)
{

    int lowestStockprice = values[0];
    int highestStockprice = values[0];
    int lowestPricePos = 0;
    int highestPricePos = 0;
  
    int maxProfit = values[1] - values[0];

    // Go through array and get highest value of array
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        // Check if the active array value is higher or equal to the last seen highest Stockprice
        if (values[i] >= highestStockprice)
        {
            // if condition "true" write new highest Stockprice and set the corresponding index value
            highestStockprice = values[i];
            highestPricePos = i;
        }
    }

    // Go through array and get highest maxProfit
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        // Check if difference of current array value - lowest stockprice is bigger than last seen maxProfit
        if (values[i] - lowestStockprice > maxProfit)
        {
            // if condition "true" write new maxProfit
            maxProfit = values[i] - lowestStockprice;
        }

        // Check for lowest stockprice, if active array value is smaller than last seen lowestStockprice and active index is smaller than the index of the highest Stockprice then condition is "true"
        if (values[i] < lowestStockprice && i < highestPricePos)
        {
            //if condition "true" write new lowest stockprice and set the corresponding index value
            lowestStockprice = values[i];
            lowestPricePos = i;
        }
    }

    cout << "Buy at Minute " << lowestPricePos << "! Lowest Price for buying: CHF " << lowestStockprice << ".00!" << endl;
    cout << "Sell at Minute " << highestPricePos << "! Highest Price for selling: CHF " << highestStockprice << ".00!" << endl;

    return maxProfit;

/*
    for (int i = 0; i < ARRAY_SIZE - 1; i++){
        if (lowestStockprice > values[i]){
            if (i < ARRAY_SIZE){
            lowestStockprice = values[i];
            lowestPricePos = i;
            } else {
                lowestStockprice = lowestStockprice;
            }
        }
    }

    for (int i = lowestPricePos + 1; i < ARRAY_SIZE; i++){
        if (highestStockprice < values[i]){
            highestStockprice = values[i];
            highestPricePos = i;
        }


    }
    maxProfit = highestStockprice - lowestStockprice; 
    return maxProfit;
*/

}
