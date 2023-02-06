/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  Centigrade to Fahrenheit Conversion Error
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
    float cntGrad,fhrnhgt;
    
    //Initialize Variables
    fhrnhgt=212;
    
    //Map the inputs/known to the outputs
    cntGrad=5/9*(fhrnhgt-32); //Bad 5/9=0000000
    //Any of the following are acceptable and will work
    //cntGrad=5.0f/9*(fhrnhgt-32);
    //cntGrad=5/9.0f*(fhrnhgt-32);
    //cntGrad=5*(fhrnhgt-32.0f)/9;
    //cntGrad=(fhrnhgt-32.0f)*5/9;
    //cntGrad=static_cast<float>(5)/9*(fhrnhgt-32);
    
    //Display the outputs
    cout<<"Shows error when not thinking about integer divisions"<<endl;
    cout<<"Fahrenheit Conversion to Celsius"<<endl;
    cout<<"Fahrenheit = "<<fhrnhgt<<" degrees"<<endl;
    cout<<"Celsius    = "<<cntGrad<<" degrees"<<endl;

    //Exit the program
    return 0;
}