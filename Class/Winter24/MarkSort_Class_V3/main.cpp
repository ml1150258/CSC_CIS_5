/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 18, 2023, 11:25 AM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Array array;
    
    //Initialize Variables
    array.setSize(200);
    array.setData();
    array.prntAry(10);
    
    //The Process -> Map Inputs to Outputs
    array.mrkSrt1();;
    
    //Display Inputs/Outputs
    array.prntAry(10);

    //Exit the Program
    return 0;
}