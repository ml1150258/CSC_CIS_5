/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 21st, 9:51 AM
 * Purpose:  Everyway to write a function
 *           Gaddis Chapter 6
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>    //Format Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow
const unsigned char PERCENT=100;//Percentage Conversion

//Function Prototypes
float save1(float,float,int);//Power Function
float save2(float,float,int);//Exp-Log Function
float save3(float,float,int);//For-Loop
float save4(float,float,int);//Recursion
float save4(float,float,float);//Same Name Overridden float vs. int parameter
float save5(float,float,int=12);//Defaulted Parameter
void  save6(float &,float,int);//Input/Output Parameter -> Pass by Reference
int   save7(float &,float,int);//Static Variable


//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    float pv,//Present Value in $'s
     intRate,//Interest Rate %
          fv;//Future value in $'s
    int nCmp;//Number of compounding periods
    
    //Initialize Variables
    pv=100.0f;//$100
    intRate=6;//5 Percent
    nCmp=72/intRate;//Rule of 72 should be about how long to double savings
    
    //Map inputs to outputs -> i.e. process the inputs
    intRate/=PERCENT;//Convert to decimal
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"FV("<<pv<<","<<intRate<<","<<nCmp<<")"<<endl;
    cout<<"Savings using Math Library Pow     = $"
            <<save1(pv,intRate,nCmp)<<endl;
    cout<<"Savings using Math Library Exp/Log = $"
            <<save2(pv,intRate,nCmp)<<endl;
    cout<<"Savings using For-Loop             = $"
            <<save3(pv,intRate,nCmp)<<endl;
    cout<<"Savings using Recursion            = $"
            <<save4(pv,intRate,nCmp)<<endl;
    cout<<"Savings using Same Name            = $"
            <<save4(pv,intRate,static_cast<float>(nCmp))<<endl;
    cout<<"Savings using Defaulted Parameter  = $"
            <<save5(pv,intRate)<<endl;
    float pvfv=pv;
    save6(pvfv,intRate,nCmp);
    cout<<"Savings using Pass by Reference    = $"
            <<pvfv<<endl;
    for(int i=1;i<5;i++){
        pvfv=pv;
        save7(pvfv,intRate,nCmp);
    }
    pvfv=pv;
    int count=save7(pvfv,intRate,nCmp);
    cout<<"Savings using Static Variable      = $"
            <<pvfv<<endl;
    cout<<"The last function was called "<<count<<" times"<<endl;
    
    //Clean up - File closing, memory de-allocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
int save7(float &pvfv,float i,int n){
    static int count;//Count keeps track of the number of times the function is
                     //called!!!!!
    for(int j=0;j<n;j++){
        pvfv*=(1+i);
    }
    count++;
    return count;
}

void save6(float &pvfv,float i,int n){
    for(int j=0;j<n;j++){
        pvfv*=(1+i);
    }
}

float save5(float p,float i,int n){
    for(int j=0;j<n;j++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,float n){
    return p*pow(1+i,n);
}

float save4(float p,float i,int n){
    //Base Case
    if(n<=0)return p;
    //Recursion
    return save4(p,i,n-1)*(1+i);
}


float save3(float p,float i,int n){
    for(int j=0;j<n;j++){
        p*=(1+i);
    }
    return p;
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save1(float p,float i,int n){
    return p*pow(1+i,n);
}