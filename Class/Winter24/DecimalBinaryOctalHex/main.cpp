/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on Aug 23rd, 2023, 11:30 AM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>//I/O Library
#include <cstdlib> //Random Functions
#include <ctime>   //Time Function
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char dec,bin,oct,hex;
    
    //Initialize Variables
    dec=175;
    bin=0b10101111;
    oct=0257;
    hex=0xAF;
    
    //The Process -> Map Inputs to Outputs
    
    //Display Inputs/Outputs
    cout<<"Decimal = "<<static_cast<int>(dec)<<endl;
    cout<<"Binary  = "<<static_cast<int>(bin)<<endl;
    cout<<"Octal   = "<<static_cast<int>(oct)<<endl;
    cout<<"Hex     = "<<static_cast<int>(hex)<<endl;
    

    //Exit the Program
    return 0;
}