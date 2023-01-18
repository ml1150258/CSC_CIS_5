/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11, 2021, 12:36 PM
 * Purpose: Temperature Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float f,c;
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>f;
    
    //Map inputs -> outputs
    c=5.0f/9*(f-32);
    
    //Display the outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<f<<" Degrees Fahrenheit = "<<c<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}