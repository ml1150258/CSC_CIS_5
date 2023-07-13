/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 21st, 2021, 11:51 AM
 * Purpose: Fibonacci Sequence
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions
//const to follow

//Function Prototypes
unsigned int fibRec(unsigned int);//Fibonacci Recursion

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    unsigned int nLoop;
    
    //Initialize Variables
    nLoop=40;
    
    //Map inputs to outputs -> i.e. process the inputs
    cout<<"Fibonacci Sequence Timing"<<endl;
    
    //Display the outputs
    for(int i=2;i<=nLoop;i++){
        float ratio=1.0f*fibRec(i)/fibRec(i-1);
        cout<<"I = "<<i<<" Ratio = "<<ratio<<endl;
    }
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations

unsigned int fibRec(unsigned int n){
    //Base Case
    if(n<=0)return 0;
    if(n==1)return 1;
    //Recursive Representation
    return fibRec(n-1)+fibRec(n-2);
}