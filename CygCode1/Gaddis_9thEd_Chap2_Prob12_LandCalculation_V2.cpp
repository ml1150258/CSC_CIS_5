/*
Name:  Dr. Mark Lehr
Date:  2/27/25
Purpose: Land Calculation
*/

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float ACRSFT2=43560;//Conversion from feet to Acres
const float FTMILES=5280;//5280 Feet/mile

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    float  ftSq,//Feet Squared in Area
          acres,//Area in Acres
          perimft,//Perimeter in Feet
          periMls;//Perimeter in Miles
	
	//Initialize Values
    acres=6.4e2f;//391876 feet sqaured
	
	//Map the Inputs to Outputs - Process
    ftSq=acres*ACRSFT2;
    perimft=4*pow(ftSq,0.5);
    periMls=perimft/FTMILES;
	
	//Display and output the results
    cout<<acres<<" acres = "<<ftSq<<" ft^2"<<endl;
    cout<<"The perimeter in feet  = "<<perimft<<endl;
    cout<<"The perimeter in miles = "<<periMls<<endl;
	
	//Exit the program
	return 0;
}