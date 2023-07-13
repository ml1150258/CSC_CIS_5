/*
 *Author:  Dr. Mark E. Lehr
 *Date:    July 11th,2023
 *Purpose: Monthly Payment/Loan Calculator 
 *         Version 3 - Function Implementations, Function of a Function
 */

//System Libraries
#include <iostream>  //I/Ostream Library
#include <cmath>     //Math Library

//Global Constants -> Math/Phys/Sci/Conversions/Dimensions
const unsigned char CNVPERC=100;//Conversion to and from Percent
const unsigned char CNVMYR=12;//Conversions from months to years

//User Library

//Function Prototypes
float powOurs(float,int);
float mnPymnt(float,float,float,int);

//Execution Begins
using namespace std;
int main(int argc, char** argv) {
    //Declare Variables
    float l,//Loan amt in $'s
          n,//Periods in months
          i,//Interest in rate in decimal/month
          p;//Monthly Payment
    
    //Initialized Variables
    cout<<"This program calculates the monthly payment for a loan"<<endl;
    cout<<"Input the loan amt, number of compounding periods, i.e. months"<<endl;
    cout<<"and the interest rate in decimal"<<endl;
    cin>>l>>n>>i;
    
    //Map the inputs->outputs or process
    float c=pow(1+i,n);//Utility variable calculate once use everywhere
    
    //Display the inputs
    cout<<"Loan Amount = $"<<l<<endl;
    cout<<"Percent     =  "<<i*CNVPERC<<"%/month"<<endl;
    cout<<"Percent     =  "<<i*CNVPERC*CNVMYR<<"%/year"<<endl;
    cout<<"Number of Periods = "<<n<<" months"<<endl;
    
    //Displayed the results
    cout<<"Payment using Math Library Function -> $"
            <<mnPymnt(l,i,c,n)<<endl;
    
    //Map the inputs->outputs or process
    //Displayed the results
    cout<<"Payment using Our Power Function -> $"
            <<mnPymnt(l,i,powOurs(1+i,n),n)<<endl;
    
    //Exit the program
    return 0;
}

float mnPymnt(float l,float i,float c,int n){
    return i<=0? l/n: i*l*c/(c-1);
}

float powOurs(float oneplsi,int n){
    float result=1;
    for(int i=1;i<=n;i++){
        result*=oneplsi;
    }
    return result;
}