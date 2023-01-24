/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 19th, 2023, 10:17 AM
 * Purpose:  e^x
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Math Library contains exp(x)
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int n,nFact,nTerms;
    float x,etox;
    
    //Initialize Variables
    cout<<"This program calculates e^x"<<endl;
    cout<<"Input a float value x"<<endl;
    cout<<"Input the number of terms to approximate e^x"<<endl;
    cin>>x>>nTerms;
    nFact=1;
    etox=1;
    
    //Map/Process the Inputs -> Outputs
    for(int term=2,i=1;i<=nTerms;term++,i++){
        unsigned int nFact=1;
        for(int j=1;j<=i;j++){
            nFact*=j;
        }
        etox+=pow(x,i)/nFact;
        nFact=0;
    }
    
    //Display Inputs/Outputs
    cout<<"Approximate e^"<<x<<" = "
            <<etox<<" using "<<nTerms<<" terms"<<endl;
    cout<<"Exact Math Lib e^"<<x<<" = "
            <<exp(x)<<endl;
    
    //Exit the Program
    return 0;
}