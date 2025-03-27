/*
Name:  Dr. Mark Lehr
Date:  01/06/25
Purpose: This is a template from which a copy of all code
         will begin
*/

//System Libraries
#include <iostream>
#include <iomanip>
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
    cout<<"x	y	!x	!y	x&&y	x||y	x^y	  x^y^x	  x^y^y	 !(x&&y)	!x||!y	!(x||y) 	!x&&!y"<<endl;
	
	//Display First Row
    x=y=true;
    cout<<(x?'T':'F')
        <<setw(8)<<(y?'T':'F')
        <<setw(9)<<(!x?'T':'F')
        <<setw(8)<<(!y?'T':'F')
        <<setw(9)<<(x&&y?'T':'F')
        <<setw(8)<<(x||y?'T':'F');

    //Display Second Row
    cout<<endl;
    y=false;
    cout<<(x?'T':'F')
        <<setw(8)<<(y?'T':'F')
        <<setw(9)<<(!x?'T':'F')
        <<setw(8)<<(!y?'T':'F')
        <<setw(9)<<(x&&y?'T':'F')
        <<setw(8)<<(x||y?'T':'F');
	
	//Display and output the results
	
	//Exit the program
	return 0;
}