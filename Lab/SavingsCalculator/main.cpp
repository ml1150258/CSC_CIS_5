/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 8th, 2022, 11:49 AM
 * Purpose:  Savings Calculator
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cmath>     //Power Function
#include <iomanip>   //Formatted Decimal Places
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const unsigned char PERCENT=100;//Conversion to a Percent 

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    float pv,//Present Value $'s
     intRate,//Interest Rate in %
          fv;//Future Value in $'s
    unsigned char nCmpPds;//Number of Compounding Periods
    
    //Initial Variables
    pv=1e2f;     //$100
    intRate=6;  //6 percent
    nCmpPds=12; //12 years
    
    //Map the Inputs to the Outputs
    intRate/=PERCENT;
    fv=pv*pow((1+intRate),nCmpPds);
    
    //Display the Inputs and Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<fv<<" = "<<pv<<"*(1+"<<intRate<<")^"
            <<static_cast<int>(nCmpPds)<<endl;

    //Exit the code
    return 0;
}

