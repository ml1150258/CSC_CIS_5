/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 21, 2021, 11:19 AM
 * Purpose:  Lab Assignment
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>    //Format Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    const int SIZE=10;
    int x[SIZE],x2[SIZE],x3[SIZE];
    
    //Initialize variables here
    
    //Map inputs to outputs here, i.e. the process
    for(int i=0;i<SIZE;i++){
        x[i]=i+1;
        x2[i]=x[i]*x[i];
        x3[i]=x2[i]*x[i];
    }

    //Display the results
    cout<<"      Number     Square    Cube"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<setw(10)<<x[i]
            <<setw(10)<<x2[i]
            <<setw(10)<<x3[i]<<endl;
    }

    return 0;
}