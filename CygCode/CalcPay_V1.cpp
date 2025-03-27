/*
Name:  Dr. Mark Lehr
Date:  03/04/25
Purpose: Calculate pay using a ternary operator
*/

//System Libraries
#include <iostream>//I/O
#include <ctime>   //Time
#include <cstdlib> //Random Function
#include <iomanip> //Format Library
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
    float hrsWrkd,//Hours worked in Hours
          payRate,//Payrate $/hr
          payChk; //Paycheck in $'s
    char  ovrTime;//Point in hours where overtime starts
	
	//Initialize Values
    payRate=2.0e1f;//$20/hr
    ovrTime=40;//Overtime starts at 40 hours
    hrsWrkd=rand()%21+30;//[30-50] hours

	
	//Map the Inputs to Outputs - Process
    payChk=hrsWrkd*payRate;//Straight Time Calculation
    payChk += (hrsWrkd>ovrTime) ? payRate*(hrsWrkd-ovrTime): 0 ;
	
	//Display and output the results
    cout<<"Paycheck = $"<<payChk<<" for "<<hrsWrkd<<" hours with a Pay Rate = $"<<payRate<<endl;
	
	//Exit the program
	return 0;
}