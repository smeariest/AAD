#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "header.h"
#include <iostream>
using namespace std;

int ArrayUtil::highestProduct(int *values, const int ARRAY_SIZE){
    // Initialize result
    int result = 0;

    // Iniitialize maximum and second maximum and third
    int posa = INT_MIN;
    int posb = INT_MIN; 
    int posc = INT_MIN;
    
    // Iniitialize minimum and second minimum
    int nega = INT_MIN;
    int negb = INT_MIN;

    // Check if array is smaller than the size of 3, min array length has to be three!
    if (ARRAY_SIZE < 3){
        cout << "Array is smaller than three!" << endl;
        return 0;
    }

    // Check if array is qeual to the size of 3, if so, the values for biggest product have already been found!
    if (ARRAY_SIZE == 3){
        cout << "Values returning highest product are: " << values[0] << ", " << ", " << values[1] << ", " << values[2] << endl;
        result = values[0] * values[1] * values[2];
        return result;
    }
    

    // Go through array and check for highest values
    for (int i = 0; i < ARRAY_SIZE; i++){
        // Update maximum
        if (values[i] > posa){
            posc = posb;
            posb = posa;
            posa = values[i];
        }
        else if (values[i] > posb){
            posc = posb;
            posb = values[i];
        }
        else if (values[i] > posc){
            posc = values[i];
        }
        // Update minimum and second minimum if needed
        if (values[i] < 0 && abs(values[i]) > abs(nega)){ //check if value is negative and if value is bigger as last seen biggest negative value (compare without "-", abs())
            negb = nega;
            nega = values[i];
        }
        else if (values[i] < 0 && abs(values[i]) > abs(negb)){ //check if value is negative and if value is bigger as last seen second biggest negative value (compare without "-", abs())
            negb = values[i];
        }
            
    }

    // Calculate the values which will return the highest product
    int neg_prod = nega * negb * posa;
    int pos_prod = posa * posb * posc;

    if (neg_prod > pos_prod){
        cout << "Values returning highest product are: " << nega << ", " << ", " << negb << ", " << posa << endl;
        result = abs(neg_prod);
        return result; //return biggest product
    }
    else{
        cout << "Values returning highest product are: " << posa << ", " << ", " << posb << ", " << posc << endl;
        result = abs(pos_prod);
        return result; //return biggest product
    }
}