/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 26, 2022, 11:15 AM
 * Purpose:  Gaddis Chapter 6 All things Functions
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library pow/exp/log
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
unsigned char PERCENT=100;//Conversion to Percentage

//Function Prototypes
float save1(float,float,int);//Using Power Function
float save1(float,float,float);//Using Overloaded Function Name
float save2(float,float,int);//Using Exp-Log Function
float save3(float,float,int);//Using For-Loop Function
float save4(float,float,int);//Using Recursive Function
void  save5(float &,float,int);//Pass by Reference
void  save6(float &,float,int=12);//Defaulted Parameter
int   save7(float &,float,int=12);//Static Variable

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,//Present Value in $'S
     intRate,//Interest Rate in %
          fv;//Future Value in $'s
    char nCmpds;//Number of compounding Periods Years
    
    //Initialize Variables
    pv=1e2f;  //$100
    intRate=6;//8 Percent
    nCmpds=12; //9 Years
    
    //Map the inputs/known to the outputs
    intRate/=PERCENT;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"Savings using Power Function:       save1("
        <<pv<<","<<intRate<<","<<static_cast<int>(nCmpds)
        <<") = $"<<save1(pv,intRate,nCmpds)<<endl;
    
    cout<<"Savings using Exp-Log Function:     save2("
        <<pv<<","<<intRate<<","<<static_cast<int>(nCmpds)
        <<") = $"<<save2(pv,intRate,nCmpds)<<endl;
    
    cout<<"Savings using For-Loop Function:    save3("
        <<pv<<","<<intRate<<","<<static_cast<int>(nCmpds)
        <<") = $"<<save3(pv,intRate,nCmpds)<<endl;
    
    cout<<"Savings using Recursive Function:   save4("
        <<pv<<","<<intRate<<","<<static_cast<int>(nCmpds)
        <<") = $"<<save4(pv,intRate,nCmpds)<<endl;
    
    float fvpv=pv;
    save5(fvpv,intRate,nCmpds);
    cout<<"Savings using Pass by Ref Function: save5("
        <<pv<<","<<intRate<<","<<static_cast<int>(nCmpds)
        <<") = $"<<fvpv<<endl;
    
    fvpv=pv;
    save6(fvpv,intRate);
    cout<<"Savings using Def Param Function:   save6("
        <<pv<<","<<intRate<<","<<static_cast<int>(nCmpds)
        <<") = $"<<fvpv<<endl;
    
    float fCmpds=nCmpds;
    cout<<"Savings using Overloaded Function:  save1("
        <<pv<<","<<intRate<<","<<static_cast<int>(fCmpds)
        <<") = $"<<save1(pv,intRate,fCmpds)<<endl;
    
    for(int i=1;i<=4;i++){
        fvpv=pv;
        save7(fvpv,intRate);
    }
    fvpv=pv;
    int nCalls=save7(fvpv,intRate);
    cout<<"Savings using Static Function:      save7("
        <<pv<<","<<intRate<<","<<static_cast<int>(nCmpds)
        <<") = $"<<fvpv<<endl;
    cout<<"The Static Function was called "
            <<nCalls<<" times"<<endl;
    
    //Exit the program
    return 0;
}

int save7(float &pvfv,float i,int n){
    static int count=0;
    for(int j=1;j<=n;j++){
        pvfv*=(1+i);
    }
    return ++count;
}

float save1(float pv,float i,float n){
    return pv*pow((1+i),n);
}

void save6(float &pvfv,float i,int n){
    for(int j=1;j<=n;j++){
        pvfv*=(1+i);
    }
}

void save5(float &pvfv,float i,int n){
    for(int j=1;j<=n;j++){
        pvfv*=(1+i);
    }
}

float save4(float pv,float i,int n){
    //Base Condition
    if(n<=0)return pv;
    //Recursive Call
    return save4(pv,i,n-1)*(1+i);
}

float save3(float pv,float i,int n){
    float fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
    return fv;
}

float save2(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

float save1(float pv,float i,int n){
    return pv*pow((1+i),n);
}