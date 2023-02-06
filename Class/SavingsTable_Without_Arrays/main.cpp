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
    float balance,//Principle in $'s
          intRate,//Interest Rate in %
          intrst;//Interest earned each year
    int   numCmpd;//Number of compounding periods years
            
    //Initialize Variables
    balance=1e2f;//$100
    intRate=6.0f/PERCENT;//6%
    numCmpd=12;//Number of years
    intrst=0;  //Interest earned
    
    //Map the inputs/known to the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Date  Savings Interest"<<endl;
    for(int year=0,date=2022;year<=numCmpd;year++,date++){
        intrst=balance*intRate;
        cout<<setw(4)<<year<<setw(6)<<date
                <<setw(9)<<balance<<setw(9)<<intrst<<endl;
        balance+=intrst;
    }
    
    //Display the outputs

    //Exit the program
    return 0;
}