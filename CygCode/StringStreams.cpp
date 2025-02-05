/*
Name:  Dr. Mark Lehr
Date:  01/30/25
Purpose: Using String Streams
*/

//System Libraries
#include <iostream> //I/O Library
#include <sstream>  //Conversion between data types using strings
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	stringstream ss;
	string str;
	int n;
	
	//Initialize Values
	cout<<"Input an integer that will be read in as a string"<<endl;
	cin>>str;
	
	
	//Map the Inputs to Outputs - Process
	ss<<str;//Send the string to the SS object
	ss>>n;  //The SS object will then do the conversion
	n<<=1;
	
	//Display and output the results
	cout<<"This is now an 2xinteger = "<<n<<endl;
	
	//Exit the program
	return 0;
}