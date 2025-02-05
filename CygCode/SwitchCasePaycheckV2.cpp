/*
Name:  Dr. Mark Lehr
Date:  01/16/25
Purpose: Test Switch Case for Paycheck
*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	float payRate,//Pay Rate in $'s/hr
	      hrsWrkd,//Hours worked in hours
		  payChck;//Pay check in $'s
	unsigned char ovrTime;//Where overtime starts
	
	//Initialize Values
	hrsWrkd=rand()%21+30;//Hours Worked [30,50]
	payRate=2.0e1f;//$20/hr
	ovrTime=4.0e1f;//40 hours
    payChck=0;
	
	//Map the Inputs to Outputs - Process
	switch(hrsWrkd>ovrTime){
		case true:{
			payChck += (hrsWrkd-ovrTime)*payRate;//Overtime
		}
		case false:{
			payChck += hrsWrkd*payRate;//Add straight time
			break;
		}
		default:cout<<"You should never get here!"<<endl;
	}
	
	//Display and output the results
	cout<<"Hours worked = "<<hrsWrkd<<" hours = $"<<payChck<<" Pay"<<endl;
	
	//Exit the program
	return 0;
}