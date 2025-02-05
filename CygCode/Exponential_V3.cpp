/*
Name:  Dr. Mark Lehr
Date:  01/23/25
Purpose: Exponential
*/

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	unsigned int nterms;
	float x,vterm,etox;
	
	//Initialize Values
	cout<<"Input x to Calculate e^x"<<endl;
	cin>>x;
	cout<<"Approximate with how many terms"<<endl;
	cin>>nterms;
	vterm=etox=1;//First Term
	
	
	//Map the Inputs to Outputs - Process
	for(int i=1;i<nterms;vterm*=x/i,etox+=vterm,i++){}
	
	//Display and output the results
	cout<<"Approximate e^"<<x<<"="<<etox<<endl;
	cout<<"Exact       e^"<<x<<"="<<exp(x)<<endl;
	
	//Exit the program
	return 0;
}