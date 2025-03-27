/*
Name:  Dr. Mark Lehr
Date:  02/27/25
Purpose: Test Char Length
*/

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    const int SIZE=10;//Size of Char Array
    char test[SIZE];//Char Array
	
	//Initialize Values
    cin>>test;
	
	//Map the Inputs to Outputs - Process
	
	//Display and output the results
    cout<<test<<endl;
    cout<<"Length of this String = "<<strlen(test)<<endl;
    cout<<"Size of this String   = "<<sizeof(test)<<endl;
	
	//Exit the program
	return 0;
}