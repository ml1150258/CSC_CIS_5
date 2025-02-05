/*
Name:  Dr. Mark Lehr
Date:  01/09/25
Purpose: savitch chap1 prob 4 FreeFall
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float GRAVITY=3.2174e1f;//32.174 ft/sec^2

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float time,//Time in seconds
	      dstnce;//Distance in feet
	
	//Initialize Values
	cout<<"This solves a Free Fall Problem"<<endl;
    cout<<"Input time in Seconds"<<endl;
	cin>>time;
	
	//Map the Inputs to Outputs - Process
	dstnce=1.0f/2*GRAVITY*time*time;
	
	//Display and output the results
	cout<<"The object will fall "<<dstnce<<" feet"<<endl;
	
	//Exit the program
	return 0;
}