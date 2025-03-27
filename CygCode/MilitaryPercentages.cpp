/*
Name:  Dr. Mark Lehr
Date:  02/25/25
Purpose: Calculate the Percentage Budget for the Military and NASA
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float TRILION=1e12f;//Conversion to a Trillion
const float BILLION=1e9f; //Conversion to a Billion
const float PERCENT=1e2f; //Conversion to a %

//Function Prototypes

int main(int argv,char **argc){
	//Declare Variables
	float fedBdgt,//Federal Budget in $'s 
	      milBdgt,//Miltary Budget in $'s 
		  nasaBgt,//NASA Budget in $'s 
		  milPcnt,//Miltary Percentage
		  nasaPct;//Nasa Percentage
	
	//Initialize Values
	fedBdgt=7*TRILION;
	milBdgt=850*BILLION;
	nasaBgt=25.4*BILLION;
	
	//Map the Inputs to Outputs - Process
	milPcnt=milBdgt/fedBdgt*PERCENT;
	nasaPct=nasaBgt/fedBdgt*PERCENT;
	
	//Display and output the results
	cout<<"Federal Budget                = $"<<fedBdgt/TRILION<<" TRILION "<<endl;
	cout<<"Military Budget               = $"<<milBdgt/BILLION<<" BILLION "<<endl;
	cout<<"NASA Budget                   = $"<<nasaBgt/BILLION<<" BILLION "<<endl;
	cout<<"Military Percentage of Budget =  "<<milPcnt<<"%"<<endl;
	cout<<"NASA Percentage of Budget     =  "<<nasaPct<<"%"<<endl;
	
	
	//Exit the program
	return 0;
}