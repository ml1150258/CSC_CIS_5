/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 3rd, 1:40 PM
 * Purpose:  Menu Example
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
    char choose;
    
    //Initialize variables here
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type Anything Else to Exit"<<endl;
    cin>>choose;
    
    //Map inputs to outputs here, i.e. the process
    switch(choose){
        case '1':cout<<"Problem 1"<<endl;break;
        case '2':cout<<"Problem 2"<<endl;break;
        case '3':cout<<"Problem 3"<<endl;break;
        case '4':cout<<"Problem 4"<<endl;break;
        default:cout<<"You choose to exit"<<endl;
    }
    
    //Display the results

    return 0;
}