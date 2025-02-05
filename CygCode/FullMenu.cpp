/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 12th, 2023, 9:55 AM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
	do{
		cout<<endl<<"This program presents a menu of options"<<endl;
		cout<<"0 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"1 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"2 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"3 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"4 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"5 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"6 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"7 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"8 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"9 To run Problem Savtich/Gaddis XXXX"<<endl<<endl;
		cin>>chose;
		
		//Map/Process the Inputs -> Outputs
		switch(chose){
			case '0':cout<<"You are in Problem 0"<<endl; break;
			case '1':cout<<"You are in Problem 1"<<endl; break;
			case '2':cout<<"You are in Problem 2"<<endl; break;
			case '3':cout<<"You are in Problem 3"<<endl; break;
			case '4':cout<<"You are in Problem 4"<<endl; break;
			case '5':cout<<"You are in Problem 5"<<endl; break;
			case '6':cout<<"You are in Problem 6"<<endl; break;
			case '7':cout<<"You are in Problem 7"<<endl; break;
			case '8':cout<<"You are in Problem 8"<<endl; break;
			case '9':cout<<"You are in Problem 9"<<endl; break;
		}
	}while(chose>='0'&&chose<='9');
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}