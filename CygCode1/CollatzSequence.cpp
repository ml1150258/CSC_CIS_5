/*
Name:  Dr. Mark Lehr
Date:  01/29/25
Purpose: Collatz Sequence
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
	int n;
	
	//Initialize Values
	n=22;
	
	//Map the Inputs to Outputs - Process
	do{
		cout<<n<<",";
		//        True -> 3n+1     False
	    //  Odd   n +   2n   + 1   n/2
		n = n%2 ? n + (n<<1) + 1 : n>>1;
	}while(n>1);
	cout<<n<<endl;
	
	//Display and output the results
	
	//Exit the program
	return 0;
}