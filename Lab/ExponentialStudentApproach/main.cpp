/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 13th, 2023, 10:41 AM
 * Purpose:  Exponential Series
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    
    //Declare Variables
    float x,expx,nterms,ncalct;
    
    //Initialize Variables
    expx=1;
    x=2;
    ncalct=12;
    
    //The Process -> Map Inputs to Outputs
    //Student Approach 
    for(int term=1;term<=ncalct;term++){
        int fctrl=1;
        for(int i=1;i<=term;i++){
            fctrl*=i;
        }
        expx+=pow(x,term)/fctrl;
    }
    nterms=ncalct+1;
    
    //Display Inputs/Outputs
    cout<<"Number of Terms in the approximation = "<<nterms<<endl;
    cout<<"The approximate exponential("<<x<<")="<<expx<<endl;
    cout<<"The exact       exponential("<<x<<")="<<exp(x)<<endl;

    //Exit the Program
    return 0;
}