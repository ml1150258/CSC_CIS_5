/*
Name:  Dr. Mark Lehr
Date:  03/06/25
Purpose: Trig input angle in degrees output sin/cos/tan using Radians
*/

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float PI=4*atan(1);//PI for Conversion
const float CNVDEGR=PI/180;//PI = 180 degrees

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    float deg,//Angle in Degrees
          rad;//Angle in Radians
	
	//Initialize Values
    cout<<"Input Degrees"<<endl;
    cin>>deg;

    //Calculate the radians
    rad=deg*CNVDEGR;

    //Output the results
    cout<<deg<<" degrees = "<<rad<<" radians"<<endl;
    cout<<"sin("<<deg<<") = "<<sin(rad)<<endl;
	
	//Exit the program
	return 0;
}