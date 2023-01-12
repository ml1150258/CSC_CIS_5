/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 4, 2023, 11:03 AM
 * Purpose:  Positive and Negative Sums
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int value;
    int posSum,negSum;
    
    //Initialize Variables
    cout<<"This program sums 10 +- Integers"<<endl;
    cout<<"Input 10 +- Integers"<<endl;
    posSum=negSum=0;
    
    //Map/Process the Inputs -> Outputs
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    cin>>value;
    posSum+=value>0?value:0;
    negSum+=value<0?value:0;
    
    //Display Inputs/Outputs
    cout<<"The positive sum = "<<posSum<<endl;
    cout<<"The negative sum = "<<negSum<<endl;
    cout<<"The total        = "<<posSum+negSum<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}