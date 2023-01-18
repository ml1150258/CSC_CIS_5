/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 20th, 2021, 10:50 AM
 * Purpose:  Create Savings without Arrays 
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>    //Format Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const char  PERCENT=100;   //Conversion to or from Percent
const char  SHIFT=100;     //Shifting by 2 places
const float HALFPNY=0.005f;//Half a penny

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    float initSav,//Initial Savings in $'s
          intRate,//Interest Rate in Percent
          savings,//Savings by year in $'s
          interst;//Interest in $'s by year
    char  nYears;//Number of years to save
    
    //Initialize variables here
    initSav=savings=100;
    intRate=6.0f/PERCENT;
    nYears=50;
    
    //Map inputs to outputs here, i.e. the process
    cout<<"# of Years     Year     Savings     Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int year=0,dYear=2021;year<=nYears;year++,dYear++){
        interst=savings*intRate;
        cout<<setw(6)<<year<<setw(13)<<dYear<<setw(12)
                <<savings<<setw(12)<<interst<<endl;
        savings+=interst;//Bank Calculation
        int isave=savings*SHIFT;//2 DECIMAL TO THE LEFT IN PENNIES
        savings=1.0f*isave/SHIFT;
    }

    //Exit Stage Left
    return 0;
}