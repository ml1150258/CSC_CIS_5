/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23rd, 2022, 12:00 PM
 * Purpose:  Energy Drink Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const unsigned char PERCENT=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short cstSrvy,//Number of Customers Surveyed
                     nEDkr,//Number of Customers that are energy Drinkers
                     nCDkr;//Number of Customers that are citrus Drinkers
    unsigned char  prcEDkr,//Percent Energy Drinkers
                   prcCDkr;//Percent Citrus Drinkers
    
    
    //Initialize Variables
    cstSrvy=16500;//16500 Customers
    prcEDkr=15;//15 Percent
    prcCDkr=58;//58 Percent 
    
    //Map inputs to outputs -> The Process
    nEDkr=cstSrvy*prcEDkr/PERCENT;
    nCDkr=nEDkr*prcCDkr/PERCENT;
    
    //Display Results
    cout<<"Number of Customers that use Energy Drinks    = "<<nEDkr<<endl;
    cout<<"Number of Customers that prefer Citrus Drinks = "<<nCDkr<<endl;

    //Exit stage right
    return 0;
}