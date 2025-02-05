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
const double PENNY=0.01;//1 CENT

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	double loan,           //Loan Amount in $'s 
	   intRate,           //Interest Rate %/month
	   totPaid,           //Total Paid in $'s 
	   mnPymnt,           //Monthly Payment in $'s 
	   intPaid;           //Interest Paid in $'s
	unsigned short nPymnts;//Number of Monthly Payments
	
	//Initialize Values
	loan=3e5;         //$300,000.00
	intRate=6.5e-2/12;//6.5%/Year/12 give per month
	nPymnts=360;    //360 Months
	
	//Map the Inputs to Outputs - Process
	double temp = pow(1+intRate,nPymnts);        //Gaddis
	mnPymnt    = temp * intRate * loan/(temp-1); //Gaddis
	
	int imnPymt= (mnPymnt + PENNY)*100;//Shift 2 places to the left
	mnPymnt = imnPymt/100.0;           //Round up to nearest penny
	
	double finPymt=loan;
	cout<<fixed<<setprecision(2)<<showpoint;
	for(int month=1;month<=nPymnts;month++){
		//Interest is in Pennies Rouding Up
		//And the Monthly payment is already in Pennies
		double interest=static_cast<int>((finPymt*intRate+PENNY)*100)/100.0;
		finPymt+=interest-mnPymnt;
	}
	finPymt+=mnPymnt;//Last Months Calculation < Monthly Payment
	
	totPaid    = (nPymnts - 1) * mnPymnt + finPymt;
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
	cout<<setw(25)<<left<<"Final Payment:"<<"$"
	    <<right<<setw(9)<<finPymt<<endl;
	cout<<setw(25)<<left<<"Amount Paid Back:"<<"$"
	    <<right<<setw(9)<<totPaid<<endl;
	cout<<setw(25)<<left<<"Interest Paid:"<<"$"
	    <<right<<setw(9)<<intPaid<<endl;
	
	//Exit the program
	return 0;
}