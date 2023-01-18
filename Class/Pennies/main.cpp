/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 18th, 2023, 11:07 AM
 * Purpose:  Double a day
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
unsigned char CNVDLRS=100;//Conversion from Pennies to Dollars

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    unsigned int payDay,//Pay per day in pennies
                 totPay;//Total Pay in pennies
    unsigned char nDays;//Number of days
    
    //Initialize Variables
    payDay=1;//Initial Pay = Penny
    totPay=payDay;//Total at the beginning
    nDays=30;
    
    //Map/Process the Inputs -> Outputs
    for(int day=2;day<=nDays;day++){
        payDay*=2;
        totPay+=payDay;
    }
    
    //Display Inputs/Outputs
    cout<<"Our Paycheck at the end of "
            <<static_cast<int>(nDays)<<" days = ";
    cout<<"$"<<totPay/CNVDLRS<<"."
            <<((totPay%CNVDLRS<10)?"0":"")
            <<totPay%CNVDLRS<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Compare to $"<<(pow(2,nDays)-1)/CNVDLRS<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}