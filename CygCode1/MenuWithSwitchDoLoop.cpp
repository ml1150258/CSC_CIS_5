/*
Name:  Dr. Mark Lehr
Date:  01/22/25
Purpose: Menu
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
	char choice;
	
	//Initialize Values
	do{
	    //Display the Menu
		cout<<"Type 1 for Problem 1"<<endl;
		cout<<"Type 2 for Problem 2"<<endl;
		cout<<"Type 3 for Problem 3"<<endl;
		cin>>choice;
		 
		switch(choice){
			case '1':cout<<endl<<endl<<"In Problem 1"<<endl<<endl;break;
			case '2':cout<<endl<<endl<<"In Problem 2"<<endl<<endl;break;
			case '3':cout<<endl<<endl<<"In Problem 3"<<endl<<endl;break;
	        default: cout<<endl<<endl<<"You will exit Menu"<<endl<<endl;break;
		}
	}while(choice>='1'&&choice<='3');
	
	//Exit the program
	return 0;
}