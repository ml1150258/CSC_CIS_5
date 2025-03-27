/*
Name:  Dr. Mark Lehr
Date:  03/11/25
Purpose: Room Capcity
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
    string msg1,msg2;
    unsigned short nmPlp,rmCap,diff;
	
	//Initialize Values
    rmCap=400;//Room Capcity
    cout<<"How many attendees to your Conference"<<endl;
    cin>>nmPlp;
	
	//Map the Inputs to Outputs - Process
    msg1 = nmPlp<=rmCap?
         "The size of the room is adequate ":
         "The size of the room is inadequate ";

    msg2 = nmPlp<=rmCap?
         "The room capacity has been underutilized by ":
         "The room capacity has been exceeded by ";
    
    diff = nmPlp<=rmCap?
         rmCap-nmPlp:
         nmPlp-rmCap;
	
	//Display and output the results
    cout<<msg1<<endl;
    cout<<msg2<<diff<<endl;
	
	//Exit the program
	return 0;
}