/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 5, 2023, 10:30 AM
 * Purpose:  Create a Banner Letter
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
    char lt;  //Letter to create the Banner Character
    
    //Initialize Variables
    cout<<"Type in a letter to compose the Banner C"<<endl;
    cout<<"Use character a-z, or A-Z"<<endl;
    cin>>lt;
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"Our Big C using letter "<<lt<<endl;
    cout<<endl;
    cout<<"  "<<lt<<lt<<lt<<endl;
    cout<<" "<<lt<<"   "<<lt<<endl;
    cout<<lt<<endl;
    //cout<<lt<<endl;
    //cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<" "<<lt<<"   "<<lt<<endl;
    cout<<"  "<<lt<<lt<<lt<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}