/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 4th, 2024, 9:46 AM
 * Purpose:  Leibniz Formula PI=4*(1-1/3+1/5-1/7+1/9....
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Math Library for Trig Functions
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const float PI=4*atan(1);//As close as it gets to PI for comparison

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float apprxPI;//Our sequence sum
    int nTerms;   //Number of terms to take in the approximation
    float sign;    //Sign reversing each time
    
    //Initialize Variables
    apprxPI=1;//First term value in the approximation
    sign=1.0f;   //Start with a +1
    nTerms=100000;
    
    //Map/Process the Inputs -> Outputs
    for(int term=2,denom=3;term<=nTerms;denom+=2,term++){
        sign*=-1;//Invert the sign each time by multiplying by -1
        apprxPI+=sign/denom;
    }
    apprxPI*=4;
    
    //Display Inputs/Outputs
    cout<<"The approximation of PI using "<<nTerms<<" terms in a series"<<endl;
    cout<<"The approximate Pi value = "<<apprxPI<<endl;
    cout<<"The exact value of PI    = "<<PI<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}