/*
Name:  Dr. Mark Lehr
Date:  2/27/25
Purpose: Land Calculation
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float FT2ACRS=1.0/43560;//Conversion from feet to Acres

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    float  ftSq,//Feet Squared in Area
          acres;//Area in Acres
	
	//Initialize Values
    ftSq=3.91876e5f;//391876 feet sqaured
	
	//Map the Inputs to Outputs - Process
    acres=ftSq*FT2ACRS;
	
	//Display and output the results
    cout<<acres<<" acres = "<<ftSq<<" ft^2"<<endl;
	
	//Exit the program
	return 0;
}