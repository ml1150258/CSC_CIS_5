/*
Name:  Dr. Mark Lehr
Date:  01/07/25
Purpose: Gaddis 9th Edition Problem 20 Paint Coverage
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float length,  //Length in feet
		  height,  //Height in feet
	      nCans,   //Number of cans of Paint in Gallons
	      pntCvrg; //Paint Coverage in ft^2/Gallon
	
	//Initialize Values
	pntCvrg=3.4e+2f;//340ft^2
	length =1e+2f;; //100ft
	height =6e0f;   //  6ft
	
	//Map the Inputs to Outputs - Process
	//Paint wise double coverage front and back
	nCans=2*2*length*height/pntCvrg+1;
	
	//Display and output the results
	cout<<"The Amount of Paint = "<<static_cast<int>(nCans)
	    <<" Gallons"<<endl;
	
	//Exit the program
	return 0;
}