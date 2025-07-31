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
	float prin,    //Principle in $'s
	      intRate; //Interest Rate/yr
	int nYears;    //Number of years
	
	//Initialize Values
	prin=1.0e2f;//$100
	intRate=5;  //5 Percent
	nYears=50;  //50 years
	
	//Display Headings with the table
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Principle = $"<<prin<<endl;
	cout<<"Interest Rate = "<<intRate<<"%"<<endl;
	cout<<"Year #	Year	Savings BOY	Interest EOY"<<endl;

	
	//Map the Inputs to Outputs - Process
	intRate/=PERCENT;
	for(int yrNum=0,year=2025;yrNum<=nYears;yrNum++,year++){
		float interst=prin*intRate;
		cout<<setw(2)<<yrNum
			<<setw(10)<<year
			<<setw(12)<<prin
			<<setw(15)<<interst<<endl;
		prin+=interst;
	}
	
	//Display and output the results
	
	//Exit the program
	return 0;
}