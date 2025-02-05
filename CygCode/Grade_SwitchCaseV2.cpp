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
	switch(score){
		case 100:case 99:case 98:case 97:case 96:
		case  95:case 94:case 93:case 92:case 91:
		case  90:grade='A';break;
	    case  89:case 88:case 87:case 86:case 85:
		case  84:case 83:case 82:case 81:case 80:grade='B';break;
	    case  79:case 78:case 77:case 76:case 75:
		case  74:case 73:case 72:case 71:case 70:grade='C';break;
	    case  69:case 68:case 67:case 66:case 65:
		case  64:case 63:case 62:case 61:case 60:grade='D';break;
		default:grade='F';
	}
	
	//Display and output the results
	cout<<"A score of "<<static_cast<int>(score)
	    <<" gives a grade = "<<grade<<endl;
	
	//Exit the program
	return 0;
}