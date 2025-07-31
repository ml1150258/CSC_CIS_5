/*
Name:  Dr. Mark Lehr
Date:  02/03/25
Purpose: Savings Table
*/

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const int PERCENT=100;//Percent Conversion

//Function Prototypes

int main(int argv,char **argc){
	//Declare Variables
	float intRate; //Interest Rate/yr
	int nYears=50; //Number of years
	const int SIZE=nYears+1;
	float savings[SIZE],interst[SIZE];//Parallel Arrays
	int   numYr[SIZE],yrDate[SIZE];//Parallel Arrays
	
	//Initialize Values
	savings[0]=1.0e2f;//$100
	intRate=5;  //5 Percent
	
	//Display Headings with the table
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Principle = $"<<savings[0]<<endl;
	cout<<"Interest Rate = "<<intRate<<"%"<<endl;
	cout<<"Year #	Year	Savings BOY	Interest EOY"<<endl;

	
	//Map the Inputs to Outputs - Process
	intRate/=PERCENT;
	for(int yrNum=0,year=2025;yrNum<=nYears;yrNum++,year++){
		interst[yrNum]=savings[yrNum]*intRate;
		numYr[yrNum]=yrNum;
		yrDate[yrNum]=year;
		if(yrNum!=nYears)savings[yrNum+1]=savings[yrNum]+interst[yrNum];
	}
	
	//Display and output the results
	for(int yrNum=0;yrNum<=nYears;yrNum++){
		cout<<setw(2)<<numYr[yrNum]
			<<setw(10)<<yrDate[yrNum]
			<<setw(12)<<savings[yrNum]
			<<setw(15)<<interst[yrNum]<<endl;
	}
	
	//Exit the program
	return 0;
}