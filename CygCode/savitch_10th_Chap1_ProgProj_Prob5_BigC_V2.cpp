/*
Name:  Dr. Mark Lehr
Date:  01/07/25
Purpose: Big C
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
	char lt;
	
	//Initialize Values
	cout<<"Input the letter desired to display a Big C"<<endl;
	cin>>lt;
	
	//Map the Inputs to Outputs - Process
	
	//Display and output the results
	cout<<"  "<<lt<<lt<<lt<<endl; //First Line
	cout<<" "<<lt<<"   "<<lt<<endl;//Second Line
	cout<<lt<<endl;               //Third to Seventh Line
	cout<<lt<<endl;               //Third to Seventh Line
	cout<<lt<<endl;               //Third to Seventh Line
	cout<<lt<<endl;               //Third to Seventh Line
	cout<<lt<<endl;               //Third to Seventh Line
	cout<<" "<<lt<<"   "<<lt<<endl;//Eight Line
	cout<<"  "<<lt<<lt<<lt<<endl; //Ninth Line
	
	//Exit the program
	return 0;
}