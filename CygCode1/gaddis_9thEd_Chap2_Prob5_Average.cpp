/*
Name:  Dr. Mark Lehr
Date:  01/09/25
Purpose: Gaddis 9thEd Chap2 Prob 5 Average
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
	unsigned short val1,val2,val3,val4,val5;//5 positve integer values
	float average;//The average of 5 values
	
	//Initialize Values
	val1=28;
	val2=32;
	val3=37;
	val4=24;
	val5=33;
	
	//Map the Inputs to Outputs - Process
	average=(val1+val2+val3+val4+val5)/5.0f;
	
	//Display and output the results
	cout<<"The average of "<<val1<<","<<val2<<","<<val3<<","
	    <<val4<<","<<val5<<" = "<<average<<endl;
	
	//Exit the program
	return 0;
}