/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 19th, 2023, 10:17 AM
 * Purpose:  e^x
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Math Library contains exp(x)
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    float x,etox,diff,tol;
    
    //Initialize Variables
    cout<<"This program calculates e^x"<<endl;
    cout<<"Input a float value x"<<endl;
    cin>>x;
    etox=1;
    diff=1;
    tol=1e-6f;
    
    //Map/Process the Inputs -> Outputs
    for(int i=1;diff>tol;diff*=x/i,etox+=diff,i++){}
    
    //Display Inputs/Outputs
    cout<<"Approximate    e^"<<x<<" = "
            <<etox<<endl;
    cout<<"Exact Math Lib e^"<<x<<" = "
            <<exp(x)<<endl;
    
    //Exit the Program
    return 0;
}