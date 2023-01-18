/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  e^x Sequence
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float etoX(float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nTerms=10;//Number of terms in the sequence
    float x=1;//x is the power of e^x
    
    //Output the results
    cout<<"e^"<<x<<" = "<<exp(x)<<" ~= "<<etoX(x,nTerms)<<endl;
 
    //Exit
    return 0;
}

float etoX(float x,int nTerms){
    //Declare and initialize
    float vTerm=1,etox=1;
    //Calculations
    for(int term=1;term<=nTerms;term++){
        vTerm*=x/term;//Accuracy of the approximation
        etox+=vTerm;
    }
    return etox;
}