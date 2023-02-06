/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 21, 2022, 12:00 PM
 * Purpose:  Error Illustrated when Adding
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short op1,op2,result;
    
    //Initialize Variables
    op1=20000;
    op2=30000;
    
    //Map inputs to outputs -> The Process
    result=op1+op2;
    
    //Display Results
    cout<<result<<" = "<<op1<<" + "<<op2<<endl;

    //Exit stage right
    return 0;
}