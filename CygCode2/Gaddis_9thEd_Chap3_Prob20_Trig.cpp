/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 1st, 2025, 1:00 PM
 * Purpose:  Trig Library Utilization
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>    //Format Library
#include <cmath>      //Math Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float PI=4*atan(1);//PI to 7SD
const float CNVDGRD=PI/180;//PI radians per 180 degrees

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    float angDeg,//Angle in Degrees
          angRad;//Angle in Radians
    
    //Initialize variables here
    cout<<"Input an angle in Degrees"<<endl;
    cin>>angDeg;
    
    //Map inputs to outputs here, i.e. the process
    angRad=angDeg*CNVDGRD;
    
    //Display the results
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angDeg<<" Degrees) = "
        <<"sin("<<angRad<<" Radians) = "<<sin(angRad)<<endl;
    cout<<"cos("<<angDeg<<" Degrees) = "
        <<"cos("<<angRad<<" Radians) = "<<cos(angRad)<<endl;
    cout<<"tan("<<angDeg<<" Degrees) = "
        <<"tan("<<angRad<<" Radians) = "<<tan(angRad)<<endl;
        
    return 0;
}