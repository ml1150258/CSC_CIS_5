/*
Name:  Dr. Mark Lehr
Date:  01/06/25
Purpose: Program Investigates the Random Number Function
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
int randRng(int min,int max);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	unsigned int nLoop;
	unsigned short max,min;
	
	//Initialize Values
	nLoop=30;
	max=12;
	min=2;
	
	//Map the Inputs to Outputs - Process
	for(int i=1;i<=nLoop;i++){
		int random=randRng(min,max);
		cout<<"Random = "<<random<<endl;
	}
	
	//Display and output the results
	cout<<"Max found = "<<max<<endl;
	cout<<"Min found = "<<min<<endl;
	
	//Exit the program
	return 0;
}

int randRng(int min,int max){
	int range=max-min;
	int random=rand()%(range+1)+min;
	return random;
}