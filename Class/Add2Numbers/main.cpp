/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 3, 2022, 11:40 AM
 * Purpose:  Add 2 Numbers
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    int op1,op2,result;
    
    //Initialize Variables
    op1=1021;
    op2=203;
    
    //Map the inputs/known to the outputs
    result=op1+op2;
    
    //Display the outputs
    cout<<"Operand 1 = "<<op1<<endl;
    cout<<"Operand 2 = "<<op2<<endl;
    cout<<"Result op1 + op2 = "<<result<<endl;
    
    //Exit the program
    return 0;
}