/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on February 15, 2022, 11:49 AM
 * Purpose:  Programs can give you bogus results
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    short a,b,c;
    
    //Initial Variables
    a=25683;
    b=15952;
    
    //Map the Inputs to the Outputs
    c=a+b;
    
    //Display the Inputs and Outputs
    cout<<c<<" = "<<a<<" + "<<b<<endl;

    //Exit the code
    return 0;
}

