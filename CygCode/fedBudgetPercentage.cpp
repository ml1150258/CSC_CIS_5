/*
Name:  Dr. Mark Lehr
Date:  01/08/25
Purpose: Federal Budget Percentages for DOD, and NASA
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float TRILION=1e12;//Number associated with a trillion -> 10^12
const float BILLION=1e9; //Number associated with a billion  -> 10^9
const float PERCENT=1e2; //Percent conversion = 100

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	float fedBdgt,//Federal Budget in $'s 
	      dodBdgt,//Military Budget in $'s 
		  nasaBgt,//Nasa Budget in $'s 
		  dodPcnt,//DOD percent of total Budget
		  nasaPct;//NASA percent of total Budget
		 
	//Initialize Values
	fedBdgt=6.75*TRILION;
	dodBdgt=841*BILLION;
	nasaBgt=24.875*BILLION;
	
	//Map the Inputs to Outputs - Process
	dodPcnt=dodBdgt/fedBdgt*PERCENT;
	nasaPct=nasaBgt/fedBdgt*PERCENT;
	
	//Display and output the results
	cout<<"Total Federal Budget = $"
	    <<fedBdgt/TRILION<<" Trillion"<<endl;
	cout<<"DOD Budget           = $"
	    <<dodBdgt/BILLION<<" Billion"<<endl;
	cout<<"NASA Budget          = $"
	    <<nasaBgt/BILLION<<" Billion"<<endl;
	cout<<endl;
	cout<<"DOD Percent of the Total Budget   = "
	    <<dodPcnt<<"%"<<endl;
	cout<<"NASA Percent of the Total Budget  = "
	    <<nasaPct<<"%"<<endl;
	
	//Exit the program
	return 0;
}