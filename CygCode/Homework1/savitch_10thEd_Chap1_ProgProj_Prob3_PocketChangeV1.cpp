/*
Name:  Dr. Mark Lehr
Date:  01/08/25
Purpose: Savage 10th Ed Problem 3 Pocket Change
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const unsigned char DOLLAR=100;//Value of a dollar in pennies
const unsigned char HLFDLLR=50;//Value of half dollar in pennies
const unsigned char QUARTER=25;//Value of a quarter in pennies
const unsigned char DIME=10;   //Value of a dime in pennies
const unsigned char NICKEL=5;  //Value of a nickel in pennies
const unsigned char PENNY=1;   //Value of a penny

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	unsigned char nDllrs, //Number of Dollars
	              nHfDlrs,//Number of Half Dollars
				  nQrtrs, //Number of Quarters
				  nDimes, //Number of Dimes
				  nNckls, //Number of Nickels
				  nPnys;  //Number of Pennies
	unsigned short totChng;//Total change in Pennies
	
	//Initialize Values
	cout<<"Separate by spaces the quantity of change in your pocket"<<endl;
	cout<<"Number of Dollars, Half Dollars, Quarters,"
	                   <<" Dimes, Nickels, and Pennies"<<endl;
	cin>>nDllrs>>nHfDlrs>>nQrtrs>>nDimes>>nNckls>>nPnys;
	
	//Map the Inputs to Outputs - Process
	totChng = (nDllrs-48)*DOLLAR +  (nHfDlrs-'0')*HLFDLLR +
	          (nQrtrs-48)*QUARTER + (nDimes-'0')*DIME + 
			  (nNckls-48)*NICKEL +  (nPnys-'0')*PENNY;
	
	//Display and output the results
	cout<<endl<<"The Total Value of Change in your Pocket is"<<endl;
	cout<<"The number of Dollars      = "<<nDllrs<<endl;
	cout<<"The number of Half Dollars = "<<nHfDlrs<<endl;
	cout<<"The number of Quarters     = "<<nQrtrs<<endl;
	cout<<"The number of Dimes        = "<<nDimes<<endl;
	cout<<"The number of Nickels      = "<<nNckls<<endl;
	cout<<"The number of Pennies      = "<<nPnys<<endl;
	cout<<"Gives the total Value in Pennies = "
	    <<totChng<<" cents"<<endl;
	
	//Exit the program
	return 0;
}