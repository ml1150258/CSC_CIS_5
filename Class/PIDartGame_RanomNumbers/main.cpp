/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 19th, 2023, 11:03 AM
 * Purpose:  Pi Series
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Arctan
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const float PI=4*atan(1);
//const float MXRND=pow(2,31)-1;
const float MXRND=(1<<31)-1;//Bitshifting same as above

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI;
    int nDarts,inCircle;
    
    //Initialize Variables
    cout<<"This calculates pi with random dart throws"<<endl;
    cout<<"Input the number of darts to throw"<<endl;
    cin>>nDarts;
    
    //Map/Process the Inputs -> Outputs
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MXRND;//Coordinate [0,1]
        float y=rand()/MXRND;//Coordinate [0,1]
        if(x*x+y*y<=1)inCircle++;
    }
    apprxPI=4.0f*inCircle/nDarts;
    
    //Display Inputs/Outputs
    cout<<"Approximate PI = "<<apprxPI<<endl;
    cout<<"Exact       PI = "<<PI<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}