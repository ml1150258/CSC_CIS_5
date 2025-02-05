/*
Name:  Dr. Mark Lehr
Date:  01/29/25
Purpose: Collatz Sequence
*/

//System Libraries
#include <iostream>
#include <sstream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
string collatz(int);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	int n;
	
	//Initialize Values
	n=22;
	
	//Map the Inputs to Outputs - Process
	string x=collatz(n);
	
	//Display and output the results
	cout<<x<<endl;
	
	//Exit the program
	return 0;
}

string collatz(int n){
	string str;
	stringstream ss;string s;
	do{
		stringstream ss;string s;
		ss<<n;//Integer conversion to a string
		ss>>s;//Output the integer to a string
		str+=s;//Add that to the string object
		str+=",";
		//        True -> 3n+1     False
	    //  Odd   n +   2n   + 1   n/2
		n = n%2 ? n + (n<<1) + 1 : n>>1;
	}while(n>1);
	ss<<n;//Integer conversion to a string
	ss>>s;//Output the integer to a string
	str+=s;
	return str;
}