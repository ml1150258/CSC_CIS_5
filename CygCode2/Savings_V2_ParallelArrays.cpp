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
    const int SIZE = 14; //Size of the array, not used here but kept for reference
    float savings[SIZE]; //Savings array, not used in this version
    float interest[SIZE]; //Interest array, not used in this version
    int yrs[SIZE]; //Year Array

    //Initialize Variables
    pv=savings[0] = 100.0f; //Example Present Value
    intRate = 6.0e-2f; //Example Interest Rate
    nCmPrds = SIZE-1; //Example Number of Compounding Periods
    interest[0] = 0.0f; //Initialize interest array
    yrs[0] = 0; //Initialize year array

    //Process - Map the inputs to outputs
    for(int year = 1; year <= nCmPrds; year++){
        yrs[year] = year; //Store the year
        interest[year-1] = savings[year-1] * intRate; //Calculate interest
        savings[year]= savings[year-1]+interest[year-1]; //Update present value
    }   


    //Display the results
    cout<<fixed<<setprecision(2)<<showpoint; //Set output format for currency
    cout<<"Year   Savings  Interest"<<endl;
    cout<<"--------------------------"<<endl;
    for(int year = 0; year < nCmPrds; year++){
        cout<<setw(4)<<yrs[year]<<setw(10)<<savings[year]; //Display the year and present value
        cout<<setw(10)<<interest[year]<<endl; //Display interest earned
    }   

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}