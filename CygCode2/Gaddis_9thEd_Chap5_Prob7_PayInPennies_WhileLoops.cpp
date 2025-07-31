/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2:00 PM
 * Purpose:  Pay In Pennies
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Bring in math Library for check
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const int CNVDLRS=100;//How many Pennies in a Dollar

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    unsigned int payPDay,//Pay per day in Pennies
                 totPay, //Total Pay at the end
                 hwMnyDy;//How many days we work
    
    //Initialize variables here
    hwMnyDy=31;//Number of days working

    //Loop on all the days
    int thsMny=1;
    while(thsMny<=hwMnyDy){
        totPay=0; //0 to start
        payPDay=1;//1 Penny
        //Map inputs to outputs here, i.e. the process
        int day=1;
        while(day<=thsMny){
            totPay+=payPDay;//Add each pay day to the total
            payPDay*=2;//Double each pay day
            day++;
        }
        
        //Display the results
        cout<<"Pennies Earned = "<<totPay<<" cents"<<endl;
        cout<<"Pennies Earned = "<<(pow(2,thsMny)-1)<<" cents"<<endl;

        //Output the way Code-e was it formatted
        int nDlrs=totPay/CNVDLRS;//Number of Dollars
        int nPnnys=totPay%CNVDLRS;//Number of Pennies

        cout<<"Total Pay = $"<<nDlrs<<'.'
            <<(nPnnys<10?"0":"")<<nPnnys<<endl<<endl;
        
        thsMny++;
    }

    return 0;
}