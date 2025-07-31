/*
     Author: Dr. Mark E. Lehr
     Date:   July 29th, 2025
     Purpose: Mark/Selection/Bubble Sorts with Class V2
*/

//System Libraries
#include <iostream>  //Input/Output
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time Library
using namespace std;

//User Libraries Static Array with Dynamic Data
#include "Array.h"


//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    //Declare Variables
    Array array; // Declare an array structure

    //Initialize Variables
    array.fillAry(100); // Fill the array with random numbers
    array.prntAry(); // Print the array elements

    //Process - Map the inputs to outputs
    array.markSrt(); // Sort the array using selection sort
    array.selSrt(); // Sort the array using selection sort
    array.bubSrt(); // Sort the array using selection sort

    //Display the results
    array.prntAry(); // Print the array elements

    //Clean up open files, allocated memory
    array.cleanUp(); // Free dynamically allocated memory for the array data

    //Exit stage right
    return 0;
}