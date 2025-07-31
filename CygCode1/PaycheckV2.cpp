/*
Name:  Dr. Mark Lehr
Date:  01/13/25
Purpose: Paycheck Calculation
*/

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random number library
#include <ctime>   //Set the random number seed with current time
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	float payChck,   //Pay Check in $'s
		  payRate,   //PayRate in $'s/hr
		  hrsWrkd;   //Hours worked in hours
	int ovrTime;     //Where over time pay starts.
	
	//Initialize Values
	payRate=2.0e1f;//$20hr
	ovrTime=40;    //40 hours starts double time
	hrsWrkd=rand()%21+30;//Range of Hours Worked [30-50]
	
	//Map the Inputs to Outputs - Process
	        //Boolean Statement ?  True Statement : False Statement;
	payChck = hrsWrkd<=ovrTime  ?//Straight time or over time?
	          hrsWrkd*payRate   ://Straight time for all hours
			  hrsWrkd*payRate   + (hrsWrkd-ovrTime)*payRate;//With Over Time!
	
	//Display and output the results
	cout<<"Pay Check Calculation"<<endl;
	cout<<"The hours worked = "<<hrsWrkd<<endl;
	cout<<"The pay rate = $"<<payRate<<"/hr"<<endl;
	cout<<"The hours at which overtime starts = "<<ovrTime<<endl;
	cout<<"The pay check = $"<<payChck<<endl;
	
	//Exit the program
	return 0;
}