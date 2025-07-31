/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 1st, 2025, 12:47 PM
 * Purpose:  Read in Values and display
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int in1;
    float fin1;
    
    //Initialize variables here
    
    //Map inputs to outputs here, i.e. the process
    cin>>in1;
    fin1=in1;
    cout<<fixed<<showpoint;
    cout<<setw(9)<<in1
        <<setw(10)<<setprecision(1)<<fin1
        <<setw(10)<<setprecision(2)<<fin1<<endl;
    
    cin>>in1;
    fin1=in1;
    cout<<fixed<<showpoint;
    cout<<setw(9)<<in1
        <<setw(10)<<setprecision(1)<<fin1
        <<setw(10)<<setprecision(2)<<fin1<<endl;

    cin>>in1;
    fin1=in1;
    cout<<fixed<<showpoint;
    cout<<setw(9)<<in1
        <<setw(10)<<setprecision(1)<<fin1
        <<setw(10)<<setprecision(2)<<fin1<<endl;
    
    cin>>in1;
    fin1=in1;
    cout<<fixed<<showpoint;
    cout<<setw(9)<<in1
        <<setw(10)<<setprecision(1)<<fin1
        <<setw(10)<<setprecision(2)<<fin1<<endl;
    
    //Display the results

    return 0;
}