/*
Name:  Dr. Mark Lehr
Date:  01/16/25
Purpose: Test Switch Case for True False
*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
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
	bool x;
	
	//Initialize Values
	x=rand()%2;//Generate True/False [0,1]
	
	//Map the Inputs to Outputs - Process
	switch(x){
		case true:cout<<(x?"True":"False")<<endl;break;
		case false:cout<<(x?"True":"False")<<endl;break;
		default:cout<<"You should never get here!"<<endl;
	}
	
	//Display and output the results
	
	//Exit the program
	return 0;
}