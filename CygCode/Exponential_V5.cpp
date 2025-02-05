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
	float x,vterm,etox,tol;
	
	//Initialize Values
	cout<<"Input x to Calculate e^x"<<endl;
	cin>>x;
	vterm=etox=1;//First Term
	tol=1e-6f;
	
	
	//Map the Inputs to Outputs - Process
	int i=1;
	do{
		vterm*=x/i++;
		etox+=vterm;
	}while(vterm>tol);
	
	//Display and output the results
	cout<<"Approximate e^"<<x<<"="<<etox<<endl;
	cout<<"Exact       e^"<<x<<"="<<exp(x)<<endl;
	
	//Exit the program
	return 0;
}