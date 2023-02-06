/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 20, 2022, 11:10 AM
 * Purpose:  Savings
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
const unsigned char PERCENT=100;//Conversion to Decimal from Percent

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float initSav,    //Initial Savings in $'s
          invRate,    //Investment Rate in %
           intrst,    //Yearly interest earned $'s
          retSavs,    //Retirement Savings in $'s
           salary,    //Salary $'s/year
          percDep,    //Percent of Salary to save each year %
          req2Rtr,    //Required Savings to Retire with $'s
          yrlyDep;    //Yearly Deposit $'s
    unsigned char nCmpPds;//Number of compounding periods years
    unsigned short stYear;//Starting Year 
    
    //Initialize Variables
    initSav=0;//$0 change if you have retirement to this point
    invRate=5;//5%
    nCmpPds=50;//50 years
    stYear=2022;//Year to start savings
    salary=1e5f;//$100,000
    percDep=10; //10%
    
    //Map the inputs/known to the outputs
    //Display the outputs
    invRate/=PERCENT;
    percDep/=PERCENT;
    retSavs=initSav;
    req2Rtr=salary/invRate;
    yrlyDep=salary*percDep;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<initSav<<" = Initial Principle $'s"<<endl;
    cout<<invRate*PERCENT<<"% = Investment Rate %"<<endl;
    cout<<"$"<<salary<<" = Salary/Income at Retirement"<<endl;
    cout<<percDep*PERCENT<<" = % Salary to Deposit for Retirement"<<endl;
    cout<<"$"<<req2Rtr<<" = Savings required to Retire"<<endl;
    cout<<endl<<setw(10)<<"Years"<<setw(10)<<"Year"
                <<setw(15)<<"Retirement"<<setw(10)<<"Interest"
                <<setw(10)<<"Deposit"<<endl;
    for(int years=0;years<=nCmpPds;years++){
        intrst=retSavs*invRate;
        cout<<setw(10)<<years<<setw(10)<<years+stYear
                <<setw(15)<<retSavs<<setw(10)<<intrst
                <<setw(10)<<yrlyDep<<endl;
        retSavs+=intrst;
        retSavs+=yrlyDep;
    }

    //Exit the program
    return 0;
}