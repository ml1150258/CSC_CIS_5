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
    decimal=1.1353333333f;
    
    //Display the results
    cout<<"The decimal value      = "<<decimal<<endl;
    
    //Format to 2 decimal places
    float fdecimal=decimal+0.005;//Rounding the 2nd decimal place up
    int   idecimal=fdecimal*100; //Shift 2 decimal places to the left
    decimal=idecimal/100.0f;     //Shift back 2 decimal places
    
    //Display the results
    cout<<"Steps in rounding and setting to the second decimal place"<<endl;
    cout<<"The rounded float      = "<<fdecimal<<endl;
    cout<<"The shifted integer    = "<<idecimal<<endl;
    cout<<"The formated decimal   = "<<decimal<<endl;

    return 0;
}