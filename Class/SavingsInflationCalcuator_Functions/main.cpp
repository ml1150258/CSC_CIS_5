/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 23rd, 2023, 10:30 AM
 * Purpose:  Savings and Inflation Calculator
 *           Functions
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Power, Log functions
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const unsigned char PERCENT=100;//Percent Conversion

//Function Prototypes
float save1(float,float,unsigned char);
float save2(float,float,unsigned char);
float save3(float,float,unsigned char);
float save4(float,float,unsigned char);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float bp,//Initial balance or price $'s
          sc,//Savings or cost over time $'s
           i;//Interest, Investment Rate or Inflation Rate %
    unsigned char n;//Number of compounding periods years     
    
    //Initialize Variables
    n=2.4e1f;//24 years
    bp=1.0e2f;//$100.00
    sc=bp;//Initialize our savings or cost
    i=6;//Inv/Inf rate in Percent
    
    //Display Header
    cout<<"Savings or Cost Calculator"<<endl<<endl;
    cout<<"$"<<bp<<" = Balance or Price"<<endl;
    cout<<i<<"% = Interest/Investment or Information Rate"
            <<endl<<endl;
    cout<<"Year   Amount    Rate"<<endl;
    cout<<setw(3)<<0<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<bp;
    
    //Map/Process the Inputs -> Outputs
    i/=PERCENT;
    for(int year=1;year<=n;year++){
        float interest=sc*i;
        cout<<"  $"<<setw(5)<<interest<<endl;
        sc+=interest;
        cout<<setw(3)<<year<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<sc;
    }
    cout<<"  $"<<setw(5)<<sc*i<<endl;
    
    cout<<"Savings Function using pow        = $"
            <<save1(bp,i,n)<<endl;
    cout<<"Savings Function using exp - log  = $"
            <<save2(bp,i,n)<<endl;
    cout<<"Savings Function using for - loop = $"
            <<save3(bp,i,n)<<endl;
    cout<<"Savings Function using recursion  = $"
            <<save4(bp,i,n)<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

float save4(float pv,float i,unsigned char n){
    //Base Condition
    if(n<=0)return pv;
    //Recursion
    return save4(pv,i,n-1)*(1+i);
}

float save3(float pv,float i,unsigned char n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return pv;
}

float save2(float pv,float i,unsigned char n){
    return pv*exp(n*log(1+i));
}

float save1(float pv,float i,unsigned char n){
    return pv*pow(1+i,n);
}