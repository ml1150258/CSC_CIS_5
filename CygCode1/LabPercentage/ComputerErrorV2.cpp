/*
Name:  Dr. Mark Lehr
Date:  01/06/25
Purpose: This is a template from which a copy of all code
         will begin
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
	short op1,op2,result;
	
	//Initialize Values
	cout<<"Type in 2 integers to add"<<endl;
	cin>>op1>>op2;
	
	//Map the Inputs to Outputs - Process
	result=op1+op2;
	
	//Display and output the results
	cout<<result<<" = "<<op1<<" + "<<op2<<endl;
	
	//Exit the program
	return 0;
}