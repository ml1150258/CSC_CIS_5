/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 13th, 2021, 10:37 AM
 * Purpose:  Calculate an approximation to PI
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Exact value for the Exponential
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float PI=4*atan(1.0f);

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int nTerms,sign;
    float piApprox;
    
    //Initialize variables here
    piApprox=1.0f;
    cout<<"This problem approximates PI"<<endl;
    cout<<"Input the number of terms to approximate PI"<<endl;
    cin>>nTerms;
    
    //Map inputs to outputs here, i.e. the process
    for(int n=1,div=3,sign=-1;n<nTerms;n++,div+=2,sign*=-1){
        piApprox+=1.0f*sign/div;
    }
    piApprox*=4;
    
    //Display the results
    cout<<"The theoretical answer PI = "<<PI<<endl;
    cout<<"The approximate answer PI = "<<piApprox<<endl;

    return 0;
}