/*
Name:  Dr. Mark Lehr
Date:  01/15/25
Purpose: Score vs. Grade
*/

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time Library
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
	unsigned char score,//Score for Assignment [50-100]
	              grade;//Grade A,B,C,D,F
	
	//Initialize Values
	score=rand()%51+50;//[50-100]
	
	//Map the Inputs to Outputs - Process
	if(score>=90)     grade='A';
	else if(score>=80)grade='B';
	else if(score>=70)grade='C';
	else if(score>=60)grade='D';
	else              grade='F';
	
	//Display and output the results
	cout<<"A score of "<<static_cast<int>(score)
	    <<" gives a grade = "<<grade<<endl;
	
	//Exit the program
	return 0;
}