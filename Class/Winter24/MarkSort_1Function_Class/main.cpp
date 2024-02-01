/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 9th, 2023 09:35 AM
 * Purpose:  Sort
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>    //Random Library
#include <ctime>      //Time to set random seed
using namespace std;  //Library Scope

//User Libraries
#include "Array.h"

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    Array a;
    int nElmnts,perLine;
    
    //Initialize Variables
    nElmnts=-10;
    perLine=-5;
    a.setProp(nElmnts,perLine);
    a.filAray();
    
    //Display the Original Array
    cout<<"Original Array"<<endl;
    a.prtAray();
    
    //Map inputs to outputs -> i.e. process the inputs
    a.mrkSrt1();
    
    //Display the outputs
    cout<<"Sorted Array"<<endl;
    a.prtAray();

    //Exit Stage Right!
    return 0;
}