/*
Name:  Dr. Mark Lehr
Date:  02/11/25
Purpose: Database Sort
*/

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	int size=100;
	Array array;//Array Structure 
	
	//Initialize Values
    cout<<"We have a lot of class!"<<endl;
	array.fillAry(size);
	cout<<"The Original Array with Index"<<endl;
	array.prtAry1(10);
	cout<<"The Original Array Printed with Index"<<endl;
	array.prtAry2(10);
	
	//Map the Inputs to Outputs - Process
	array.mrkSort();
	
	//Display and output the results
	cout<<"The Array After Sorting with Index"<<endl;
	array.prtAry1(10);
	cout<<"The Array Printed with the Sorted Index"<<endl;
	array.prtAry2(10);
	
	//Exit the program*/
	return 0;
}