/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 6th, 2023, 10:16 AM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const unsigned char CNVDOLS=100;//100 pennies to a Dollar

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int payDay,//Pay per day in Pennies
                 totPay,//Total Pay in Pennies
                 numDays;//Number of Days to work
    
    //Initialize Variables
    totPay=payDay=1;
    
    //The Process -> Map Inputs to Outputs
    do{
        cout<<"This program calculates your Pay"<<endl;
        cout<<"Your initial pay is a penny"<<endl;
        cout<<"But each day the pay doubles"<<endl;
        cout<<"So input the Number of Days >=2 and <=31"<<endl;
        cin>>numDays;
    }while(!(numDays>=1 && numDays<=31));

    //Calculation for Payday and Total Pay
    for(int nDays=2;nDays<=numDays;nDays++){
        payDay*=2;//Double the pay each day
        totPay+=payDay;//Add that pay to the total
    }
    
    //Display Inputs/Outputs
    cout<<"Last Payday = "<<payDay<<" pennies"<<endl;
    cout<<"Total Pay   = "<<totPay<<" pennies"<<endl;
    cout<<"Total Pay in $'s = $"<<totPay/CNVDOLS
            <<"."<<(totPay%CNVDOLS<10?"0":"")
            <<totPay%CNVDOLS<<endl;

    //Exit the Program
    return 0;
}