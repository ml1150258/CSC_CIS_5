/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 7th, 2024, 11:30 PM
 * Purpose:  Loan Payment Calculator
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <cmath>     //Power function
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const unsigned char PERCENT=100;//Conversion to Percent
const float         HALFPNY=0.005;//Half Penny

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float loanAmt,//Loan Amt in $'s known/givens
          intRate,//%/month known/givens
          monPymt,//Monthly Payment  unknown
          amtPBak,//Amount Paid Back in $'s unknown
          intPaid;//Amount paid in interest
    unsigned char nCmprds;//Number of monthly compounding periods known/givens
    
    //Initialize all variables
    loanAmt=1e4f;//$10,000
    intRate=1e-2f;//1% = 0.01
    nCmprds=36;//36 months or 3 years
    
    //Process or Map solutions
    float temp=pow(1+intRate,nCmprds);     //Power Implementation
          temp=exp(nCmprds*log(1+intRate));//Exp-Log Implementation
    monPymt=intRate*temp/(temp-1)*loanAmt;
    int imonPmt=(monPymt+HALFPNY)*100;//Monthly Payment in Pennies
    monPymt=imonPmt/100.0f;//Shift back to dollars
    amtPBak=monPymt*nCmprds;
    intPaid=amtPBak-loanAmt;

    //Display the output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount:           $"<<setw(9)<<loanAmt<<endl;
    cout<<"Interest Rate:          "<<setw(8)<<static_cast<int>(intRate*PERCENT)<<"%"<<endl;
    cout<<"Number of Months        "<<setw(9)<<static_cast<int>(nCmprds)<<endl;
    cout<<"Monthly Payment:       $"<<setw(9)<<monPymt<<endl;
    cout<<"Amount Paid Back :     $"<<setw(9)<<amtPBak<<endl;
    cout<<"Interest Paid:         $"<<setw(9)<<intPaid<<endl;

    //Exit the Program
    return 0;
}