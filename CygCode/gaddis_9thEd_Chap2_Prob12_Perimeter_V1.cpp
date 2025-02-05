/*
Name:  Dr. Mark Lehr
Date:  01/07/25
Purpose: Perimeter
*/

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float ACRSFT2=4.3650e+4f;//Acres to ft^2
const float FTMILES=1.0f/5.28e+3f;//Feet to Miles

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float nAcres, //Number of Acres
	      primitr;//Perimeter
	
	//Initialize Values
	cout<<"Input the number of Acres that a Fence should be built"
	    <<"to Contain in Miles"<<endl;
	cin>>nAcres;
	
	//Map the Inputs to Outputs - Process
	primitr=4*pow(nAcres*ACRSFT2*FTMILES*FTMILES,0.5);
	
	//Display and output the results
	cout<<nAcres<<" can be surrounded by a fence which is "
	    <<primitr<<" miles in length"<<endl;
	
	//Exit the program
	return 0;
}