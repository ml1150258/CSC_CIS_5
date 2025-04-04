/*
Name:  Dr. Mark Lehr
Date:  01/29/25
Purpose: Finding Primes
*/

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
bool isPrime(int);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	int nRange;
	
	//Initialize Values
	nRange=1000;
	
	//Map the Inputs to Outputs - Process
	for(int n=2;n<=nRange;n++){
		bool prime=isPrime(n);
		cout<<n<<(prime?" is prime":" is not prime")<<endl;
	}
	
	//Display and output the results
	
	//Exit the program
	return 0;
}

bool isPrime(int n){
	if(n<=1)return false;
	bool prime=true;
	for(int r=2;r<=sqrt(n)&&prime;r++){
		prime=n%r?true:false;
	}
	return prime;
}