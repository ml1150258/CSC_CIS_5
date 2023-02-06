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
float etox(float,int);
float etox(float);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int nTerms;
    float x;
    
    //Initialize variables here
    cout<<"This problem approximates the exponential"<<endl;
    cout<<"Input x and the number of terms to approximate e^x"<<endl;
    cin>>x>>nTerms;
 
    //Display the results
    cout<<"The theoretical answer e^"<<x<<"                         = "
            <<exp(x)<<endl;
    cout<<"The approximate answer e^"<<x<<" with "<<nTerms
            <<" terms           = "<<etox(x,nTerms)<<endl;
    cout<<"The approximate answer e^"<<x<<" using a tolerance       = "
            <<etox(x)<<endl;

    return 0;
}

float etox(float x){
    float ex=1.0f;
    float tol=1.0e-6;//Tolerance, when to stop adding terms
    for(float n=1.0f,term=1.0f;abs(term)>tol;term*=x/n,ex+=term,n++){}
    return ex;
}

float etox(float x,int nTerms){
    float ex=1.0f;
    for(float n=1.0f,term=1.0f;n<nTerms;term*=x/n,ex+=term,n++){}
    return ex;
}