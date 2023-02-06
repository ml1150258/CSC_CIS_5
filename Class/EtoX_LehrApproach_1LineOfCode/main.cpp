/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 13th, 2021, 10:37 AM
 * Purpose:  Calculate an approximation to the Exponential Function
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Exact value for the Exponential
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int nTerms;
    float x,etox,term;
    
    //Initialize variables here
    etox=term=1.0f;
    cout<<"This problem approximates the exponential"<<endl;
    cout<<"Input x and the number of terms to approximate e^x"<<endl;
    cin>>x>>nTerms;
    
    //Map inputs to outputs here, i.e. the process
    for(int n=1;n<nTerms;term*=x/n,etox+=term,n++){}
    
    //Display the results
    cout<<"The theoretical answer e^"<<x<<" = "<<exp(x)<<endl;
    cout<<"The approximate answer e^"<<x<<" = "<<etox<<endl;

    return 0;
}