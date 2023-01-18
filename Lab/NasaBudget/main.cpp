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
          nasaBgt,//Military Budget
          nasaPct;//Military Percentage
    
    //Initial Variables
    fedBdgt=4.829e12f;//$4.829 Trillion
    nasaBgt=22.6e9f;//$22.6 Billion 
    
    //Map the Inputs to the Outputs
    nasaPct=nasaBgt/fedBdgt*PERCENT;
    
    //Display the Inputs and Outputs
    cout<<"NASA Budget = "<<nasaPct<<"%"<<endl;

    //Exit the code
    return 0;
}

