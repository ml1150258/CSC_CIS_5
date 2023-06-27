/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on June 27, 2023, 10:16 AM
 * Purpose:  Paycheck
 */

//System Libraries
#include <iostream>  //Input/Output
#include <iomanip>   //Format Library
#include <cstdlib>   //Random Function/Setting Random Seed
#include <ctime>     //Time to set the seed
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    //unsigned int tim=time(0);
    //srand(tim);
    srand(static_cast<unsigned int>(time(0)));//One Line Implementation
    
    //Declare Variables
    float hrsWrkd,//Hours worked in hours
          payRate,//Pay Rate in $'s/hr
          payChk;//Paycheck in $'s
    unsigned char ovrTime;//Where overtime begins in hours
    
    //Initialize Variables
    hrsWrkd=rand()%21+30;//[30-50]
    payRate=1e1f;//$10/hour
    ovrTime=4e1f;//40 hours
    
    //The Process -> Map Inputs to Outputs
    payChk  = hrsWrkd * payRate;              //Straight Time
    payChk += hrsWrkd <= ovrTime?             //Boolean Test
              0:                              //If test is true
              payRate* (hrsWrkd - ovrTime);   //Else if test is false
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint; //Format the outputs
    cout<<"Pay Check Calculator"<<endl;
    cout<<"Hours worked        = "<<setw(7)<<hrsWrkd<<endl;
    cout<<"Over Time starts at = "<<setw(7)<<1.0f*static_cast<int>(ovrTime)<<endl;
    cout<<"Pay Rate            =$"<<setw(7)<<payRate<<"/hr"<<endl;
    cout<<"Pay Check amount    =$"<<setw(7)<<payChk<<endl;

    return 0;
}