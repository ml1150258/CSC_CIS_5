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
    int nTerms,x;
    float etox;
    
    //Initialize variables here
    etox=1.0f;
    cout<<"This problem approximates the exponential"<<endl;
    cout<<"Input x and the number of terms to approximate e^x"<<endl;
    cin>>x>>nTerms;
    
    //Map inputs to outputs here, i.e. the process
    for(int n=1;n<nTerms;n++){
        int fact1=1;
        for(int i=1;i<=n;i++){
            fact1*=i;
        }
        etox+=pow(x,n)/fact1;
    }
    
    //Display the results
    cout<<"The theoretical answer e^"<<x<<" = "<<exp(x)<<endl;
    cout<<"The approximate answer e^"<<x<<" = "<<etox<<endl;

    return 0;
}