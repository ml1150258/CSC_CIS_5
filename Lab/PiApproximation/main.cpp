/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 13th, 2023, 10:41 AM
 * Purpose:  Pi Series
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const float PI=4*atan(1.0);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    
    //Declare Variables
    float piAprx,nterms,ncalct,xterm,sign;
    
    //Initialize Variables
    piAprx=1;
    ncalct=100000;
    sign=1;
    
    //The Process -> Map Inputs to Outputs
    for(int term=1,div=3;term<=ncalct;div+=2,term++){
        sign*=-1;
        xterm=sign/div;
        piAprx+=xterm;
    }
    nterms=ncalct+1;
    piAprx*=4;
    
    //Display Inputs/Outputs
    cout<<"Number of Terms in the approximation = "<<nterms<<endl;
    cout<<"The approximate PI ="<<piAprx<<endl;
    cout<<"The exact       PI ="<<PI<<endl;

    //Exit the Program
    return 0;
}