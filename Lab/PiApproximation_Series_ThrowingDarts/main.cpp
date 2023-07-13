/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 13th, 2023, 10:41 AM
 * Purpose:  Pi Approximation random Dart Throw
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const float PI=4*atan(1.0);
const unsigned int MAXRAND=(1<<31)-1;

//Function Prototypes
float rand0r(float);//Random Number between 0 and r

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float piApprx,radius;
    int totDrts,inCircl;
  
    
    //Initialize Variables
    totDrts=100000;
    radius=1.0;
 
    //The Process -> Map Inputs to Outputs
    for(int dart=1;dart<=totDrts;dart++){
        float x=rand0r(radius);
        float y=rand0r(radius);
        if(x*x+y*y<=radius*radius)inCircl++;
    }
    piApprx=4.0f*inCircl/totDrts;
    
    //Display Inputs/Outputs
    cout<<"Number of Darts in the approximation = "<<totDrts<<endl;
    cout<<"The approximate PI ="<<piApprx<<endl;
    cout<<"The exact       PI ="<<PI<<endl;

    //Exit the Program
    return 0;
}

float rand0r(float r){
    return r*rand()/MAXRAND;
}