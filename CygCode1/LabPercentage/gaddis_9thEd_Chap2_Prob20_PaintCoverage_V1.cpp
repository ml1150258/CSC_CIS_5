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
	unsigned char length,//Length in feet
				  height,//Height in feet
				  nCans; //Number of cans of Paint in Gallons
	unsigned short pntCvrg;//Paint Coverage in ft^2/Gallon
	
	//Initialize Values
	pntCvrg=340;
	length=100;
	height=6;
	
	//Map the Inputs to Outputs - Process
	nCans=2*2*length*height/pntCvrg+1;
	
	//Display and output the results
	cout<<"The Amount of Paint = "<<static_cast<int>(nCans)
	    <<" Gallons"<<endl;
	
	//Exit the program
	return 0;
}