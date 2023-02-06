/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on July 7th, 2022, 11:49 AM
 * Purpose:  Doubling Pay each day
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const unsigned char CNVDLRS=100;//Conversion to Dollars from Pennies

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    unsigned int payDay,//Pay that is doubled each day in Pennies
        totSum;//total sum of all payDays in Pennies
    unsigned char nDays;//Number of days to double pay
    
    //Initial Variables
    nDays=3;
    payDay=1;
    totSum=payDay;
    
    //Map the Inputs to the Outputs
    for(int day=2;day<=nDays;day++){
        payDay*=2;//Double the pay Day
        totSum+=payDay;//Add to the total paycheck
    }
    
    //Display the Inputs and Outputs
    cout<<"Number of days the pay per day is doubled = "
            <<static_cast<int>(nDays)<<endl;
    cout<<"Total Pay =  "<<totSum<<" cents"<<endl;
    int dollars=totSum/CNVDLRS;//Calculate Dollars from pennies by /100
    int pennies=totSum%CNVDLRS;//Calculate Penny remainder by %100
    cout<<"Total Pay = $"<<dollars<<"."
            <<(pennies<10?'0':'\0')<<pennies<<endl;

    //Exit the code
    return 0;
}