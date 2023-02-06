/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 13th, 2021, 10:37 AM
 * Purpose:  Calculate an approximation to PI
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Exact value for the Exponential
#include <cstdlib>    //Random Number Generator
#include <ctime>      //Time Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float PI=4*atan(1.0f);
const float MAXRAND=pow(2,31)-1;

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int nDarts,inCircle;
    float piApprox;
    
    //Initialize variables here
    inCircle=0;
    cout<<"This problem approximates PI"<<endl;
    cout<<"Input the number of Darts in the Game to approximate PI"<<endl;
    cin>>nDarts;
    
    //Map inputs to outputs here, i.e. the process
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MAXRAND;//[0,1] X Coordinate of Dart
        float y=rand()/MAXRAND;//[0,1] Y Coordinate of Dart
        if(x*x+y*y<1)inCircle++;
    }
    piApprox=4.0f*inCircle/nDarts;
    
    //Display the results
    cout<<"The theoretical answer PI = "<<PI<<endl;
    cout<<"The approximate answer PI = "<<piApprox<<endl;

    return 0;
}