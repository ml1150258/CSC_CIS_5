/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on February 17, 2022, 12:35 AM
 * Purpose:  Military Budget
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const char PERCENT=100;//Percent Conversion

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    float fedBdgt,//Federal Budget
          milBdgt,//Military Budget
          milPrct;//Military Percentage
    
    //Initial Variables
    fedBdgt=4.829e12f;//$4.829 Trillion
    milBdgt=753e9f;//$753 Billion 
    
    //Map the Inputs to the Outputs
    milPrct=milBdgt/fedBdgt*PERCENT;
    
    //Display the Inputs and Outputs
    cout<<"Military Budget = "<<milPrct<<"%"<<endl;

    //Exit the code
    return 0;
}

