/*
Name:  Dr. Mark Lehr
Date:  01/21/25
Purpose: Pay In Pennies
*/

//System Libraries
#include <iostream> //I/O Library
#include <cmath>    //Math Library 
#include <cstdlib>  //Random Library 
#include <ctime>    //Time Library 
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const int CNVPNDL=100;//100 Pennies per Dollar

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	unsigned int payPDay, //Pay per Day in Pennies
	              totPay, //Total Pay in Pennies and converted to Dollars	
		           nDays;  //Number of Days
	
	//Initialize Values
	nDays=rand()%31+1;//[1-31] days
	payPDay=1;        //1 Penny
	totPay=0;         //Start pay at 0 to sum
	
	//Map the Inputs to Outputs - Process
	for(int day=1;day<=nDays;day++){
		totPay+=payPDay;//Add each days pay per day to the total
		payPDay*=2;     //Each days pay is 2x the day before
	}
	int dollars=totPay/CNVPNDL;
	int pennies=totPay%CNVPNDL;
	
	//Display and output the results
	cout<<"For "<<nDays<<" days the pay is "<<totPay<<" Pennies"<<endl;
	cout<<"For "<<nDays<<" days the pay is "<<payPDay-1<<" Pennies"<<endl;
	cout<<"For "<<nDays<<" days the pay is "
		<<static_cast<int>(pow(2,nDays)-1)<<" Pennies"<<endl;
	cout<<"For "<<nDays<<" days the pay is $"
	    <<dollars<<"."<<(pennies<10?"0":"")<<pennies<<endl;
	
	//Exit the program
	return 0;
}