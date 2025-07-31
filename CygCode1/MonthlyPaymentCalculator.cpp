/*
Name:  Dr. Mark Lehr
Date:  01/22/25
Purpose: Monthly Payment Calculator Using Loops
*/

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const unsigned char PERCENT=100;//Conversion to Percent

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float loan,           //Loan Amount in $'s 
	   intRate,           //Interest Rate %/month
	   totPaid,           //Total Paid in $'s 
	   mnPymnt,           //Monthly Payment in $'s 
	   intPaid;           //Interest Paid in $'s
	unsigned char nPymnts;//Number of Monthly Payments
	
	//Initialize Values
	loan=1e4f;      //$10,000
	intRate=1e-2f;  //1%/Month
	nPymnts=3.6e1f; //36 Months
	
	//Map the Inputs to Outputs - Process
	float temp = pow(1+intRate,nPymnts);
	mnPymnt    = temp * intRate * loan/(temp-1);
	totPaid    = nPymnts * mnPymnt;
	intPaid    = totPaid - loan;
	
	//Display and output the results
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<setw(25)<<left<<"Loan Amount:"<<"$"<<right<<setw(9)<<loan<<endl;
	cout<<setw(25)<<left<<"Monthly Interest Rate:"<<" "
	    <<right<<setw(9)<<intRate*PERCENT<<"%"<<endl;
	cout<<setw(25)<<left<<"Number of Payments:"<<" "
	    <<right<<setw(6)<<static_cast<int>(nPymnts)<<endl;
	cout<<setw(25)<<left<<"Monthly Payment:"<<"$"
	    <<right<<setw(9)<<mnPymnt<<endl;
	cout<<setw(25)<<left<<"Amount Paid Back:"<<"$"
	    <<right<<setw(9)<<totPaid<<endl;
	cout<<setw(25)<<left<<"Interest Paid:"<<"$"
	    <<right<<setw(9)<<intPaid<<endl;
	
	//Exit the program
	return 0;
}