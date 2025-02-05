/*
Name:  Dr. Mark Lehr
Date:  01/23/25
Purpose: Pi Series
*/

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float PI=4*atan(1);

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float piApprx,sign;
	int nTerms;
	
	//Initialize Values
	piApprx=0;
	nTerms=100000;
	sign=-1;
	
	//Map the Inputs to Outputs - Process
	for(int i=1,j=1;i<=nTerms;i++,j+=2){
		sign*=-1;
		piApprx+=sign/j;
		cout<<"Term = "<<i<<"  Approx PI = "<<4*piApprx<<endl;
	}
	piApprx*=4;
	
	//Display and output the results
	cout<<"Final Approx Pi = "<<piApprx<<endl;
	cout<<"Exact Pi        = "<<PI<<endl;
	
	//Exit the program
	return 0;
}