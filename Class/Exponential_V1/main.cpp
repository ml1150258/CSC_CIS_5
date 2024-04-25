/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 28th, 2024, 10:03 AM
 * Purpose:  Exponential e^x
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Math Library for Power function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    unsigned int nTerms;//Integer used in factorial
    float        x,     //Value to use in e^x
                 appxEx;//Value to use in e^x
    
    //Initialize Variables
    appxEx=1;
    cout<<"This program calculates a Exponential e^x"<<endl;
    cout<<"Input a float x and integer number of terms to approx e^x"<<endl;
    cin>>x>>nTerms;
    
    //Map/Process the Inputs -> Outputs
    for(int terms=2;terms<=nTerms;terms++){//Sum all the terms in the series
        int fact=1;
        for(int i=1;i<terms;i++){//For each term calculate the n!
            fact*=i;
        }
        appxEx+=pow(x,terms-1)/fact;//x^i/i!
    }
    
    //Display Inputs/Outputs
    cout<<"Approximate e^"<<x<<" = "<<appxEx<<" with "<<nTerms<<" terms"<<endl;
    cout<<"Exact       e^"<<x<<" = "<<exp(x)<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}