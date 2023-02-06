/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 21, 2021, 11:19 AM
 * Purpose:  Develop a Template to be copied
 *           for all future programs in CSC/CIS 5
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
    short a,b,c;
    
    //Initialize variables here
    a=30000;
    b=20000;
    
    //Map inputs to outputs here, i.e. the process
    c=a+b;
    
    //Display the results
    cout<<a<<" + "<<b<<" = "<<c<<endl;

    return 0;
}