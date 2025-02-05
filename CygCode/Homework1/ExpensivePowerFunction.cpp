/*
Name:  Dr. Mark Lehr
Date:  01/07/25
Purpose: How expensive is the power function
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
	float x,//Sum input to square
	      multx,//Multiply to get results
		  powx2,//Using the power function
		  explog2;//Using what the power actually means
	
	//Initialize Values
	cout<<"Input a value to square"<<endl;
	cin>>x;
	
	//Map the Inputs to Outputs - Process
	multx=x*x;
	powx2=pow(x,2);
	explog2=exp(2*log(x));
	
	//Display and output the results
	cout<<x<<" = x"<<endl;
	cout<<multx<<" = x*x"<<endl;
	cout<<powx2<<" = pow(x,2)"<<endl;
	cout<<explog2<<" = exp(2*log(x))"<<endl;
	
	//Exit the program
	return 0;
}