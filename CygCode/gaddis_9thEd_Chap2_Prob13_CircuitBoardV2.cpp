/*
Name:  Dr. Mark Lehr
Date:  01/09/25
Purpose: Gaddis 9thEd Chap2 Prob13 Circuit Board
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const char PERCENT=100;//Conversion to Percent 
const float HLFPNY=0.005;//1/2 cent

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float cbCost,//Circuit board cost in $'s 
	      pctPfit,//Percent Profit
		  slsPrc;//Sales Price in $'s
	
	//Initialize Values
	cbCost=1.495e1f;//$14.95 in exponential notation $1.495x10^1 float
	pctPfit=3.5e1f/PERCENT;//35/100 -> 0.35
	
	//Map the Inputs to Outputs - Process
	slsPrc=cbCost*(1+pctPfit)+HLFPNY;
	int islsPrc=slsPrc*100;//Shifting to an integer 2 Decimal Places
	slsPrc=islsPrc/100.0f;//Shifting back 2 decimal places
	
	
	//Display and output the results
	cout<<"The cost of the circuit board to produce = $"<<cbCost<<endl;
	cout<<"The profit or markup = "<<pctPfit*PERCENT<<"%"<<endl;
	cout<<"The price of the circuit board in the store = $"<<slsPrc<<endl;
	
	//Exit the program
	return 0;
}