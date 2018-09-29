#include <iostream>
#include "header.h"
#include "implement.cpp"
using namespace std;


int main()
{
    double coins[7] = {0.05,0.10,0.20,0.50,1,2,5};
	double value = 12.85;
	CoinCombination::printCoinCombination(value,coins,7);

/*
    double priceval = 0.05;
    double price = 0;
    price = static_cast<int>(0.05 / 0.05);
    cout << price << endl;

    cout << priceval << endl;
    priceval -= 1 * 0.05;
    cout << priceval << endl;
*/


    return 0;
}
