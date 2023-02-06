/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19th, 2022, 10:10 AM
 * Purpose:  Savings Table
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char PERCENT=100;//Percent conversion

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    const int SIZE=100;
    float balance[SIZE],//Principle in $'s
          intRate,//Interest Rate in %
          intrst[SIZE];//Interest earned each year
    int   numCmpd,//Number of compounding periods years
          yrAray[SIZE],//Year Array
          d8Aray[SIZE];//Date Array
            
    //Initialize Variables
    balance[0]=1e2f;//$100
    intRate=6.0f/PERCENT;//6%
    numCmpd=12;//Number of years
    intrst[0]=0;  //Interest earned
    
    //Map the inputs/known to the outputs
    for(int year=0,date=2022;year<=numCmpd;year++,date++){
        yrAray[year]=year;
        d8Aray[year]=date;
        intrst[year]=balance[year]*intRate;
        balance[year+1]=balance[year]+intrst[year];
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Date  Savings Interest"<<endl;
    for(int year=0;year<=numCmpd;year++){
        cout<<setw(4)<<yrAray[year]<<setw(6)<<d8Aray[year]
                <<setw(9)<<balance[year]<<setw(9)<<intrst[year]<<endl;
    }

    //Exit the program
    return 0;
}