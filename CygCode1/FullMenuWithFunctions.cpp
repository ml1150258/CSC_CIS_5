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
void problm0();
void problm1();
void problm2();
void problm3();
void problm4();
void problm5();
void problm6();
void problm7();
void problm8();
void problm9();

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
			case '0':problm0(); break;
			case '1':problm1(); break;
			case '2':problm2(); break;
			case '3':problm3(); break;
			case '4':problm4(); break;
			case '5':problm5(); break;
			case '6':problm6(); break;
			case '7':problm7(); break;
			case '8':problm8(); break;
			case '9':problm9(); break;
		}
	}while(chose>='0'&&chose<='9');
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void problm0(){
	cout<<"You are in Problem 0"<<endl;
}
void problm1(){
	cout<<"You are in Problem 1"<<endl;
}
void problm2(){
	cout<<"You are in Problem 2"<<endl;
}
void problm3(){
	cout<<"You are in Problem 3"<<endl;
}
void problm4(){
	cout<<"You are in Problem 4"<<endl;
}
void problm5(){
	cout<<"You are in Problem 5"<<endl;
}
void problm6(){
	cout<<"You are in Problem 6"<<endl;
}
void problm7(){
	cout<<"You are in Problem 7"<<endl;
}
void problm8(){
	cout<<"You are in Problem 8"<<endl;
}
void problm9(){
	cout<<"You are in Problem 9"<<endl;
}