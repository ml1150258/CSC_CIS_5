/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2021, 11:02 AM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //log10
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int n;
    float fact1; 
    
    //Initialize variables here
    fact1=0;
    n=70;
    //while(n<=0||n>12){
    //    cout<<"The current input is <=0 or >12"<<endl
    //            <<" Please input a number between 1 and 12"<<endl;
    //    cin>>n;
    //}
    
    //Map inputs to outputs here, i.e. the process
    for(int i=1;i<=n;i++){
        fact1+=log10(i);
    }
    int intfact=fact1;
    float frac=fact1-intfact;
    
    //Display the results
    cout<<n<<"! = "<<pow(10,frac)<<"x10^"<<intfact<<endl;

    return 0;
}