/*
Name:  Dr. Mark Lehr
Date:  01/09/25
Purpose: Gaddis 9thEd Chap2 Prob 8 Total Purchase
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const char PERCENT=100;//Percent conversion
const float HLFPNY=0.005f;//Half Penny

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float val1,val2,val3,val4,val5,//5 sale items in $'s
	      slsTax,//Sales Tax
	      purPrc;//Purchase Price in $'s
	
	//Initialize Values
	val1=1.595e1f;//$15.95
	val2=2.495e1f;//$24.95
	val3=6.95e0f; //$6.95
	val4=1.295e1f;//$12.95
	val5=3.95e0f; //3.95
	slsTax=7.0f/PERCENT;//7%
	
	//Map the Inputs to Outputs - Process
	purPrc=(val1+val2+val3+val4+val5)*(1+slsTax)+HLFPNY;//Rounding
	int a=purPrc*100;//Shift by 2 Decimal Places and truncate
	purPrc=a/100.0f;//Shift back 2 to round up
	
	//Display and output the results
	cout<<"Product 1   = $"<<val1<<endl;
	cout<<"Product 2   = $"<<val2<<endl;
	cout<<"Product 3   = $ "<<val3<<endl;
	cout<<"Product 4   = $"<<val4<<endl;
	cout<<"Product 5   = $ "<<val5<<endl;
	cout<<"Sales Price = $"<<purPrc<<endl;
	
	//Exit the program
	return 0;
}