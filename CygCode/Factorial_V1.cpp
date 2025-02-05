/*
Name:  Dr. Mark Lehr
Date:  01/23/25
Purpose: Factorial
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	unsigned int n, nfact;
	
	//Initialize Values
	cout<<"Input n to Calculate n!"<<endl;
	cin>>n;
	nfact=1;
	
	//Map the Inputs to Outputs - Process
	for(int i=1;i<=n;i++){
		nfact*=i;
	}
	
	//Display and output the results
	cout<<n<<"!="<<nfact<<endl;
	
	//Exit the program
	return 0;
}