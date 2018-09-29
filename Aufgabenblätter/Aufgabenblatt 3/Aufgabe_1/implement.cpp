#include <iostream>
#include "header.h"
using namespace std;

void CoinCombination::printCoinCombination(double value, const double *coins, const int ARRAY_SIZE)
{
	
  int cointypeNr = 0;
  double price = value;

  // run only if price is bigger then smallest coin
	if (price > coins[0]){
    // for-loop through values of array (5 to 0.05)
    for (int i = ARRAY_SIZE -1; i >= 0; i--){
      // check if price is smaller than 0.1, if true coin has to be 0.05
      if(price < 0.1){   
        // set number of 0.05 coins to 1     
        cointypeNr = 1;
        // print 1 x 0.05 coin
        cout << i << ": " << cointypeNr << " x " << coins[i] << endl;
      }else{  // if price is 0.1 or bigger
      // Calculate possible number of current coin type (beginning with biggest - 5)
      cointypeNr = static_cast<int>(price / coins[i]);
 //     cout << "loop: " << i << " -- price before: " << price << endl;
      // calculate new price 
      price -= cointypeNr * coins[i];
 //     cout << "loop: " << i << " -- price after: " << price << endl;
      // print coin number of current used cointype
      cout << i << ": " << cointypeNr << " x " << coins[i] << endl;
      
      }
      
      /*else{
      
      coinSmall = price / coins[i];
      price -= coinSmall * coins[i];
      cout << i << ". " << coinSmall << " x " << coins[i] << endl;

      }
      */
    }
  } else {
    // print if price is smaller than 0.05
    cout << "Der eingegebene Wert ist kleiner als die kleinste verfügbare Münze." << endl;

  }

}


