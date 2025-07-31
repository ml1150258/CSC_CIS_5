/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 25th, 2025, 1:50 PM
 * Purpose:  Savitch 10thEd Chap 1 Prob 5 Big C
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
    //Set random number seed once here
    
    //Declare variables here
    char l;//A letter character
    
    //Initialize variables here
    cout<<"This program creates a Big C from the any character"
        <<" you input"<<endl;
    cout<<"Choose a character A-Z or a-z or 0-9 and inputted now!"
        <<endl;
    cin>>l;
    
    //Map inputs to outputs here, i.e. the process
    cout<<endl<<endl<<endl<<endl;
    cout<<"  "<<l<<l<<l<<endl;
    cout<<" "<<l<<"   "<<l<<endl;
    cout<<l<<endl;
    cout<<l<<endl;
    cout<<l<<endl;
    cout<<l<<endl;
    cout<<" "<<l<<"   "<<l<<endl;
    cout<<"  "<<l<<l<<l<<endl;
    
    //Display the results

    return 0;
}