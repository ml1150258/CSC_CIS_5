/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 2, 2022, 10:20 AM
 * Purpose:  Replace array/size with Class
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries
#include "array.h"

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Array array(100);
    int perLine;
    
    //Initialize Variables
    perLine=10;
    array.prntAry(perLine);
    
    //Map the inputs/known to the outputs
    array.selSort();
    
    //Display the outputs
    array.prntAry(perLine);
 
    //Exit the program
    return 0;
}
