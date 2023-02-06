/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 24, 2021, 11:25 AM
 * Purpose:  Control number of decimal places output
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Math Library for the power function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    float decimal;//Example value
    
    //Initialize variables here
    decimal=1.1333333333333f;
    
    //Display the results
    cout<<"The decimal value = "<<decimal<<endl;
    
    //Format to 2 decimal places
    int utility=decimal*pow(10,2);//Move over 2 decimal places to the left
    decimal=utility/pow(10,2);//Shift back 2 decimal places
    
    //Display the results
    cout<<"The shifted integer = "<<utility<<endl;
    cout<<"The decimal value   = "<<decimal<<endl;

    return 0;
}