/*
Name:  Dr. Mark Lehr
Date:  01/21/25
Purpose: Inflation for a Home Purchase
*/

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Library 
#include <ctime>    //Time Library 
#include <cmath>    //Math Library for Power Function
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float purPrce,  //Purchase Price
	      infPrce,  //Inflation Price
		  inf8shn;  //Inflation Rate %/yr
	int   nYears;  //Number of Years
	
	//Initialize Values
	infPrce=purPrce=9.999e3f;//Purchase Price in $'s
	nYears=61;
	inf8shn=6e-2f;//0.06 = 6%
	
	//Map the Inputs to Outputs - Process
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Yr Number  Year  House Price  Inflation"<<endl;
	for(int year=1963,yrNum=0;yrNum<=nYears;year++,yrNum++){
		float inflation=infPrce*inf8shn;
		
		cout<<setw(5)<<yrNum<<setw(10)<<year<<setw(13)
		<<infPrce<<setw(10)<<inflation<<endl;
		
		if(yrNum!=nYears)infPrce*=(1.0f+inf8shn);
	}
	
	//Display and output the results
	cout<<"The purchase price of the Home in 1963 = $"<<purPrce<<endl;
	cout<<"The Selling price in 2024 using sum      $"<<infPrce<<endl;
	cout<<"The Selling price in 2024 using pow      $"
		<<purPrce*pow(1+inf8shn,61)<<endl;
	
	//Exit the program
	return 0;
}