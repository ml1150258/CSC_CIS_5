/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 14th, 2022, 10:55 AM
 * Purpose:  Chapter 6 all ways to write a function
 *           Present/Future Value function
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cmath>     //Power Function
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const char PERCENT=100;//Conversion to percent

//Function Prototypes
float fValue1(float,float,int);
float fValue2(float,float,int);
float fValue3(float,float,int);
float fValue4(float,float,int);
float fValue4(float,float,float);
float fValue5(float,float,int=12);
void  fValue6(float &,float,int);
int   fValue7(float &,float,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float presVal,//Present Value in $'s
          intRate;//Interest Rate in %
    int   numCmpd;//Number of compounding periods in years
    
    //Initialize Variables
    presVal=100;//$100
    intRate=6;  //Interest rate in %
    numCmpd=12; //By the rule of 72 -> 72/i~=n
    
    //Map the inputs/known to the outputs
    intRate/=PERCENT;
    
    //Display the outputs
    cout<<"Present Value   = $"<<presVal<<endl;
    cout<<"Interest Rate   =  "<<intRate*PERCENT<<"%"<<endl;
    cout<<"Number of Years =  "<<numCmpd<<" years"<<endl<<endl;
    cout<<"Future Value Power Function      = $"
        <<fValue1(presVal,intRate,numCmpd)<<endl;
    cout<<"Future Value Exp/Log Function    = $"
        <<fValue2(presVal,intRate,numCmpd)<<endl;
    cout<<"Future Value For-Loop Function   = $"
        <<fValue3(presVal,intRate,numCmpd)<<endl;
    cout<<"Future Value Recursive Function  = $"
        <<fValue4(presVal,intRate,numCmpd)<<endl;
    cout<<"Future Value Overloaded Function = $"
        <<fValue4(presVal,intRate,static_cast<float>(numCmpd))
        <<endl;
    cout<<"Future Value Default Function    = $"
        <<fValue5(presVal,intRate)<<endl;
    
    float pvfv=presVal;
    fValue6(pvfv,intRate,numCmpd);
    cout<<"Future Value Ref Val Function    = $"
        <<pvfv<<endl;
    
    for(int i=1;i<=4;i++){
        pvfv=presVal;
        fValue7(pvfv,intRate,numCmpd);
    }
    pvfv=presVal;
    int count=fValue7(pvfv,intRate,numCmpd);
    cout<<"Future Value Static Function     = $"
        <<pvfv<<endl;
    cout<<"Static function was called "<<count<<" times"<<endl;
   

    //Exit the program
    return 0;
}

int fValue7(float &pv,float i,int n){
    static int count=0;
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return ++count;
}

void fValue6(float &pv,float i,int n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
}

float fValue5(float pv,float i,int n){
    return pv*pow(1+i,n);
}

float fValue4(float pv,float i,float n){
    cout<<"Called the Overloaded Function"<<endl;
    return pv*pow(1+i,n);
}

float fValue4(float pv,float i,int n){
    if(n<=0)return pv;
    return fValue4(pv,i,n-1)*(1+i);
}

float fValue3(float pv,float i,int n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return pv;
}

float fValue2(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

float fValue1(float pv,float i,int n){
    return pv*pow(1+i,n);
}