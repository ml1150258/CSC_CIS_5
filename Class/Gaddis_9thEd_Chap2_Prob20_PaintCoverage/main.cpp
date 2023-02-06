/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23, 2022, 10:50 PM
 * Purpose:  Paint Problem - How many Gallons for double Coverage and both
 *           sides of the fence
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float pCvg,//Coverage of a gallon of paint ft^2
        fncHgt,//Fence Height in ft
        fncLen;//Fence Length in ft
    int nGalns;//Number of Gallons of paint required
        
    //Initialize Variables
    pCvg=3.4e2f;//340 square feet
    fncHgt=6.0e0f;//6 foot high fence
    fncLen=1.0e2f;//100 foot long fence
    
    //Map inputs to outputs -> The Process
    float srfAra=fncHgt*fncLen;//Surface area of 1 side of fence
    float srfCov=2*2*srfAra;//Need to paint both sides twice
    nGalns=srfCov/pCvg+1;//Integer number of Gallons of Paint
    
    //Display Results
    cout<<"Fence Height                        =   "<<fncHgt<<" feet"<<endl;
    cout<<"Fence Length                        = "<<fncLen<<" feet"<<endl;
    cout<<"Paint Coverage                      = "<<pCvg<<" feet^2"<<endl;
    cout<<"Number of Gallons of Paint Required =   "<<nGalns<<" gallons"<<endl;

    //Exit stage right
    return 0;
}

