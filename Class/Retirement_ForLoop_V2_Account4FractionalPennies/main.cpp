/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 24th, 2022, 12:15 AM
 * Purpose:  Retirement Savings
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const char PERCENT=100;//Percent Conversion

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    float   balance,//Balance to start $'s
            intRate,//Interest in %
            salary, //Salary desired in $'s/year
            retDep, //%Retirement deposited each year
            sav2Ret;//Savings to Retire $'s
    double  savings;//Savings accumulated in $'s
    int     initD8, //Initial Date/Year
            numCmpd;//Number of years, compounding periods
    
    //Initial Variables
    balance=0e2f;//$100
    intRate=5.0/PERCENT;//6 Percent
    initD8=2022;//This year
    numCmpd=50;//12 Years
    savings=balance;
    salary=1e5f;//$100,000's
    retDep=10.0f/PERCENT;//Percentage allocated for Retirement
    sav2Ret=salary/intRate;//Savings required to retire
    
    //Map the Inputs to the Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"      $ "<<savings<<"        = Initial Balance in $'s"<<endl;
    cout<<"         "<<intRate*PERCENT<<"%      = Interest Rate %"<<endl;
    cout<<"      $ "<<salary<<"   = Salary to retire with"<<endl;
    cout<<"        "<<retDep*PERCENT<<"%      = Retirement deposited each year %"<<endl;
    cout<<"      $ "<<sav2Ret<<"  = Savings to Retire $'s"<<endl;
    cout<<endl;
    cout<<"               Balance           Interest         Yearly"<<endl;
    cout<<"Year  Date   Beg of Year      End of Year        Deposit"<<endl;
    int year;
    double interest;
    float yrlyDep;
    for(year=0;year<=numCmpd && savings<sav2Ret;year++){
        interest=savings*intRate;
        yrlyDep=salary*retDep;
        cout<<setw(4)<<year<<setw(6)<<initD8
                <<"   $"<<setw(10)<<savings
                <<"      $"<<setw(9)<<interest
                <<"      $"<<setw(9)<<yrlyDep<<endl;
        initD8++;
        savings+=interest;
        savings+=yrlyDep;
        unsigned long long iPennies=savings*100;//Correct Fractional Pennies
        savings=iPennies/100.0f; //Correct Fractional Pennies
    }
    interest=savings*intRate;
    yrlyDep=salary*retDep;
    cout<<setw(4)<<year<<setw(6)<<initD8
        <<"   $"<<setw(9)<<savings
        <<"      $"<<setw(9)<<interest
        <<"      $"<<setw(9)<<yrlyDep<<endl;
    
    //Display the Inputs and Outputs

    //Exit the code
    return 0;
}