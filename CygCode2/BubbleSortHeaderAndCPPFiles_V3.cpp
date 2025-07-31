/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 15th, 2025, 10:15 AM
 * Purpose:  Fill and Play with Arrays
 */

//System Libraries

//User Libraries
#include "CArray_V2.h"

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    
    //Declare and Initialize variables here
    Array array(100);
    
    //Initialize variables here

    //Before the Sort Display
    cout<<endl<<"Before Bubble Sort"<<endl;
    array.prntAry(10);
    
    //Map inputs to outputs here, i.e. the process
    array.bublSrt();
    
    //Display the results
    cout<<endl<<"After Bubble Sort"<<endl;
    array.prntAry(10);

    //Exit Stage Right
    return 0;
}
