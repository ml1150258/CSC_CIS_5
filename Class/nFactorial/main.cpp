/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 19th, 2023, 10:17 AM
 * Purpose:  Factorial
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
    //Declare Variables
    unsigned int n,nFact;
    
    //Initialize Variables
    cout<<"This program calculates n!"<<endl;
    cout<<"Input a positive integer n"<<endl;
    cin>>n;
    nFact=1;
    
    //Map/Process the Inputs -> Outputs
    for(int i=1;i<=n;i++){
        nFact*=i;
    }
    
    //Display Inputs/Outputs
    cout<<n<<"! = "<<nFact<<endl;
    
    //Exit the Program
    return 0;
}