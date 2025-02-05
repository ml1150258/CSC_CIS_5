/*
Name:  Dr. Mark Lehr
Date:  01/1/25
Purpose: Create Truth Table
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
	bool x,y;

	//Display Heading
	cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
	
	//First row
	x=y=true;
	cout<<(x?'T':'F')<<" "
	    <<(y?'T':'F')<<"  "
		<<(!x?'T':'F')<<"  "
	    <<(!y?'T':'F')<<"   "
		<<(x&&y?'T':'F')<<"    "
		<<(x||y?'T':'F')<<endl;
	    
	//Second row
	y=false;
	cout<<(x?'T':'F')<<" "
	    <<(y?'T':'F')<<"  "
		<<(!x?'T':'F')<<"  "
	    <<(!y?'T':'F')<<"   "
		<<(x&&y?'T':'F')<<"    "
		<<(x||y?'T':'F')<<endl;
		
	//Third row
	y=true;
	x=false;
	cout<<(x?'T':'F')<<" "
	    <<(y?'T':'F')<<"  "
		<<(!x?'T':'F')<<"  "
	    <<(!y?'T':'F')<<"   "
		<<(x&&y?'T':'F')<<"    "
		<<(x||y?'T':'F')<<endl;
	
	//Fourth row
	y=false;
	cout<<(x?'T':'F')<<" "
	    <<(y?'T':'F')<<"  "
		<<(!x?'T':'F')<<"  "
	    <<(!y?'T':'F')<<"   "
		<<(x&&y?'T':'F')<<"    "
		<<(x||y?'T':'F');
	
	//Exit the program
	return 0;
}