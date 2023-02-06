/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 29th, 2021, 11:19 AM
 * Purpose:  Positive and Negative Sums
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    short   number,
            sumPos,
            sumNeg;
    bool    test;
    
    //Initialize variables here
    sumPos=sumNeg=0;
    
    //Map inputs to outputs here, i.e. the process
    cout<<"This Program Calculates Negative and Positive sums"<<endl;
    cout<<"Input 6 numbers"<<endl;
    
    //Repeat
    cin>>number;
    test=number>0?     //Boolean Test
        sumPos+=number://True Test
        sumNeg+=number;//False Test
    
    cin>>number;
    test=number>0?     //Boolean Test
        sumPos+=number://True Test
        sumNeg+=number;//False Test
    
    cin>>number;
    test=number>0?     //Boolean Test
        sumPos+=number://True Test
        sumNeg+=number;//False Test
 
    cin>>number;
    test=number>0?     //Boolean Test
        sumPos+=number://True Test
        sumNeg+=number;//False Test
    
    cin>>number;
    test=number>0?     //Boolean Test
        sumPos+=number://True Test
        sumNeg+=number;//False Test
    
    cin>>number;
    test=number>0?     //Boolean Test
        sumPos+=number://True Test
        sumNeg+=number;//False Test
    
    //Display the results
    cout<<"The positive sum = "<<sumPos<<endl;
    cout<<"The negative sum = "<<sumNeg<<endl;

    return 0;
}