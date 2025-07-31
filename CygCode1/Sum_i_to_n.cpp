/*
Name:  Dr. Mark Lehr
Date:  01/21/25
Purpose: Sum i to n
*/

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Library 
#include <ctime>    //Time Library 
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
	int sumFor,  //Sum with a for loop
	    sumFrm,  //Sum with formula
		     n;  //Number to sum to
	
	//Initialize Values
	sumFor=0;//Initialize
	n=rand()%100+1;//[1-100]
	
	//Map the Inputs to Outputs - Process
	for(int i=1;i<=n;i++){
		sumFor+=i;
	}
	sumFrm=n*(n+1)/2;
	
	//Display and output the results
	cout<<"For "<<n<<" the sum is "<<sumFor<<endl;
	cout<<"For "<<n<<" the sum is "<<sumFrm<<endl;
	
	//Exit the program
	return 0;
}