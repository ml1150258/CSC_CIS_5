/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 28th, 2024, 10:03 AM
 * Purpose:  Factorial n!
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
    unsigned int n,//Integer used in factorial
              fact;//Represents n!
    
    //Initialize Variables
    fact=1;
    cout<<"This program calculates a Factorila n!"<<endl;
    cout<<"Input a positive integer"<<endl;
    cin>>n;
    
    //Map/Process the Inputs -> Outputs
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    //Display Inputs/Outputs
    cout<<n<<"! = "<<fact<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}