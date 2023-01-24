/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 19th, 2023, 11:03 AM
 * Purpose:  Pi Series
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Arctan
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const float PI=4*atan(1);

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    double apprxPI,diff;
    
    //Initialize Variables
    apprxPI=1;
    
    //Map/Process the Inputs -> Outputs
    for(int i=5;i<200000;i+=4){
        diff=(1.0/i-1.0/(i-2));//2 terms at a time
        apprxPI+=diff;
    }
    apprxPI*=4;
    
    //Display Inputs/Outputs
    cout<<"Approximate PI = "<<apprxPI<<endl;
    cout<<"Exact       PI = "<<PI<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}