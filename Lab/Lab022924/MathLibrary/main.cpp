/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2024, 1:04 PM
 * Purpose:  Template used to start all projects
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const float PI=4*atan(1);//PI Radians
const float CNVDEGR=PI/180;//Conversion from Degrees to Radians
const float CNVRDEG=180/PI;//Conversion from Radians to Degrees

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));//How to set the random number seed
    
    //Declare all variables
    float xRad1,xDeg1,xRad2,xDeg2;
    
    //Initialize all variables
    xRad1=PI/4;
    xDeg1=45;
    
    //Process or Map solutions
    xRad2=xDeg1*CNVDEGR;
    xDeg2=xRad1*CNVRDEG;

    //Display the output
    cout<<xDeg1<<" = "<<xRad1<<" Converted Radian = "<<xDeg2<<endl;
    cout<<xRad1<<" = "<<xDeg1<<" Converted Degrees = "<<xRad2<<endl;
    cout<<"tan("<<xDeg2<<") = "<<tan(xRad2)<<endl;
    cout<<"sin("<<xDeg2<<") = "<<sin(xRad2)<<endl;
    cout<<"cos("<<xDeg2<<") = "<<cos(xRad2)<<endl;
    cout<<"sqr(2)/2 = "<<sqrt(2)/2<<endl;

    //Exit the Program
    return 0;
}