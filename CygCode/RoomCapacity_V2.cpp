/*
Name:  Dr. Mark Lehr
Date:  03/11/25
Purpose: Room Capcity
*/

//System Libraries
#include <iostream>  //I/O Library
#include <cstring>   //C String library including strcpy
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    const char SIZE=50;
    char msg1[SIZE],msg2[SIZE];
    unsigned short nmPlp,rmCap,diff;
	
	//Initialize Values
    rmCap=400;//Room Capcity
    cout<<"How many attendees to your Conference"<<endl;
    cin>>nmPlp;
	
	//Map the Inputs to Outputs - Process
    nmPlp<=rmCap?
         strcpy(msg1,"The size of the room is adequate "):
         strcpy(msg1,"The size of the room is inadequate ");

    nmPlp<=rmCap?
         strcpy(msg2,"The room capacity has been underutilized by "):
         strcpy(msg2,"The room capacity has been exceeded by ");
    
    diff = nmPlp<=rmCap?
         rmCap-nmPlp:
         nmPlp-rmCap;
	
	//Display and output the results
    cout<<msg1<<endl;
    cout<<msg2<<diff<<endl;
	
	//Exit the program
	return 0;
}