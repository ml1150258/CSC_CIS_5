/*
 *Author:  Dr. Mark E. Lehr
 *Date:    July 13th,2023
 *Purpose: Monthly Payment/Loan Calculator 
 *         Version 6 - Show Function Implementations
 */

//System Libraries
#include <iostream>  //I/Ostream Library
#include <cmath>     //Math Library

//User Library

//Global Constants -> Math/Phys/Sci/Conversions/Dimensions
const unsigned char CNVPERC=100;//Conversion to and from Percent
const unsigned char CNVMYR=12;//Conversions from months to years

//Function Prototypes
float powOurs(float,int);            //Our power function with a for-loop
float powOur6(float,int);            //Recursive Call
float mnPymnt(float,float,float,int);//4 parameter payment calculator Overloaded
float mnPymnt(float,float,int);      //3 parameter payment calculator
float mnPymt3(float,int,float=0.005);//Defaulted Parameter Interest Rate
void  mnPymt4(float&,float,int,float=0.005);//Pass by Reference
int   mnPymt5(float&,float,int,float=0.005);//Static Variable
float mnPymt6(float,float,int);      //Recursive Call with powOur6


//Execution Begins
using namespace std;
int main(int argc, char** argv) {
    //Declare Variables
    float loanAmt,//Loan amt in $'s
          numCmpd,//Periods in months
          intRate,//Interest in rate in decimal/month
          monPmnt;//Monthly Payment
    
    //Initialized Variables
    cout<<"This program shows all the ways to calculate the Monthly Payment"<<endl;
    cout<<"This program calculates the monthly payment for a loan"<<endl;
    cout<<"Input the loan amt, number of compounding periods, i.e. months"<<endl;
    cout<<"and the interest rate in decimal"<<endl;
    cin>>loanAmt>>numCmpd>>intRate;
    
    //Map the inputs->outputs or process
    float c=pow(1+intRate,numCmpd);//Utility variable calculate once use everywhere
    
    //Display the inputs
    cout<<"Loan Amount = $"<<loanAmt<<endl;
    cout<<"Percent     =  "<<intRate*CNVPERC<<"%/month"<<endl;
    cout<<"Percent     =  "<<intRate*CNVPERC*CNVMYR<<"%/year"<<endl;
    cout<<"Number of Periods = "<<numCmpd<<" months"<<endl;
    
    //Displayed the results
    cout<<endl<<"Calculating (1+i)^n outside function"<<endl;
    cout<<"Payment using Math Library Function -> $"
            <<mnPymnt(loanAmt,intRate,c,numCmpd)<<endl;
    
    //Displayed the results
    cout<<endl<<"Calculating (1+i)^n inside function"<<endl;
    cout<<"Payment using Math Library Function -> $"
            <<mnPymnt(loanAmt,intRate,numCmpd)<<endl;
    
    //Map the inputs->outputs or process
    //Displayed the results
    cout<<endl<<"Payment using Our Power Function -> $"
            <<mnPymnt(loanAmt,intRate,powOurs(1+intRate,numCmpd),numCmpd)<<endl;
    
    //Map the inputs->outputs or process
    //Displayed the results
    cout<<endl<<"Payment using Defaulted interest Parameter -> $"
            <<mnPymt3(loanAmt,numCmpd)<<endl;
    cout<<endl<<"Payment using Defaulted Parameter and interest -> $"
            <<mnPymt3(loanAmt,numCmpd,intRate)<<endl;
    
    //Map the inputs->outputs or process
    //Displayed the results
    float payment;
    mnPymt4(payment,loanAmt,numCmpd);
    cout<<endl<<"Payment using Pass by reference Defaulted interest -> $"
            <<payment<<endl;
    mnPymt4(payment,loanAmt,numCmpd,intRate);
    cout<<endl<<"Payment using Pass by reference and interest -> $"
            <<payment<<endl;
    
        //Map the inputs->outputs or process
    //Displayed the results
    for(int i=1;i<=4;i++){
        mnPymt5(payment,loanAmt,numCmpd);
    }
    int ntimes=mnPymt5(payment,loanAmt,numCmpd);
    cout<<endl<<"Payment static Variable Defaulted Interest -> $"
            <<payment<<endl;
    cout<<"Number of times this function got called = "<<ntimes<<endl;
    
    //Map the inputs->outputs or process
    //Displayed the results
    cout<<endl<<"Payment using Our Recursive Power Function -> $"
            <<mnPymt6(loanAmt,intRate,numCmpd)<<endl;

    
    //Exit the program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Monthly Payment
//Inputs -> 
//  l -> Loan Amount $'s
//  i -> Interest rate in decimal/month
//  n -> Number of compounding periods in months
//Outputs ->
//  p -> Monthly Payment in $'s
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float mnPymt6(float l,float i,int n){
    float c=powOur6(1+i,n);
    return i<=0? l/n: i*l*c/(c-1);
}

float powOur6(float x,int n){
    //Base Condition
    if(n<=1)return x;
    //Recursive implementation
    return powOur6(x,n-1)*x;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Monthly Payment
//Inputs -> 
//  l -> Loan Amount $'s
//  i -> Interest rate in decimal/month
//  n -> Number of compounding periods in months
//Outputs ->
//  p -> Monthly Payment in $'s
//  count -> Number of times the function got called
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
int mnPymt5(float &p,float l,int n,float i){
    static int count;
    float c=powOurs(1+i,n);
    p = i<=0? l/n: i*l*c/(c-1);
    return ++count;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Monthly Payment
//Inputs -> 
//  l -> Loan Amount $'s
//  i -> Interest rate in decimal/month
//  n -> Number of compounding periods in months
//Outputs ->
//  p -> Monthly Payment in $'s
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void mnPymt4(float &p,float l,int n,float i){
    float c=powOurs(1+i,n);
    p = i<=0? l/n: i*l*c/(c-1);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Monthly Payment
//Inputs -> 
//  l -> Loan Amount $'s
//  i -> Interest rate in decimal/month
//  n -> Number of compounding periods in months
//Outputs ->
//  p -> Monthly Payment in $'s
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float mnPymt3(float l,int n,float i){
    float c=powOurs(1+i,n);
    return i<=0? l/n: i*l*c/(c-1);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Monthly Payment
//Inputs -> 
//  l -> Loan Amount $'s
//  i -> Interest rate in decimal/month
//  n -> Number of compounding periods in months
//Outputs ->
//  p -> Monthly Payment in $'s
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float mnPymnt(float l,float i,int n){
    float c=pow(1+i,n);
    return i<=0? l/n: i*l*c/(c-1);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Monthly Payment
//Inputs -> 
//  l -> Loan Amount $'s
//  i -> Interest rate in decimal/month
//  c -> (1+i)^n, a utility variable
//  n -> Number of compounding periods in months
//Outputs ->
//  p -> Monthly Payment in $'s
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float mnPymnt(float l,float i,float c,int n){
    return i<=0? l/n: i*l*c/(c-1);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                Power Function using For-Loops
//Inputs -> 
//  x -> mantissa
//  n -> characteristic
//Outputs ->
//  x^n -> Monthly Payment in $'s
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float powOurs(float x,int n){
    float xton=1;
    for(int i=1;i<=n;i++){
        xton*=x;
    }
    return xton;
}