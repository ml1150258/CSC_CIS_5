/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on February 17, 2022, 11:55 AM
 * Purpose:  Paint Coverage Problem
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    unsigned short fncLen,//Fence length in feet
                   fncHgt,//Fence height in feet
                  ptCanCv,//Gallon of Paint to Cover ft^2
                  nmPtCns;//Number of cans of paint required
    
    //Initial Variables
    fncLen=100; //100 feet
    fncHgt=6;   //6 feet
    ptCanCv=340;//340 ft^2
    
    //Map the Inputs to the Outputs
    nmPtCns=4*fncLen*fncHgt/ptCanCv+1;
    
    //Display the Inputs and Outputs
    cout<<"This program calculates the number of Cans of Paint"<<endl;
    cout<<"required to paint a fence both sides twice."<<endl;
    cout<<"Fence Length   = "<<fncLen<<" feet"<<endl;
    cout<<"Fence Height   =   "<<fncHgt<<" feet"<<endl;
    cout<<"Paint coverage = "<<ptCanCv<<" feet^2/Gallon"<<endl;
    cout<<"Number of Cans of Paint required = "<<nmPtCns<<endl;

    //Exit the code
    return 0;
}