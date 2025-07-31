/*
     Author: Dr. Mark E. Lehr
     Date:   July 23rd, 2025
     Purpose:  Savings No Arrays
*/

//System Libraries
#include <iostream>  //Input/Output
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time Library
#include <iomanip>   //For std::setprecision
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    float pv; //Present Value $'s
    float intRate; //Interest Rate %/year
    int nCmPrds; //Number of Periods  year

    //Initialize Variables
    pv = 100.0f; //Example Present Value
    intRate = 6.0e-2f; //Example Interest Rate
    nCmPrds = 12; //Example Number of Compounding Periods

    //Process - Map the inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint; //Set output format for currency
    cout<<"Year   Savings  Interest"<<endl;
    cout<<"--------------------------"<<endl;
    for(int year = 0; year <= nCmPrds; year++){
        cout<<setw(4)<<year<<setw(10)<<pv; //Display the year and present value
        float interest = pv * intRate; //Calculate interest
        cout<<setw(10)<<interest<<endl; //Display interest earned
        pv += interest; //Update present value
    }   


    //Display the results

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}