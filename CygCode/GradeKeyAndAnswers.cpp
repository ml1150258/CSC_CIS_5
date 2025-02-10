/*
Name:  Dr. Mark Lehr
Date:  02/06/25
Purpose: Read a key and answer file then output to score file
*/

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>   //File Stream Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	const int ROWS=3,COLS=20;
	char kyAnsGd[ROWS][COLS];
	
	char keyName[]="key.dat";
	string ansName="answers.dat";
	string grdName="grade.dat";
	fstream key,answer,grade;
	
	//Initialize Values
	key.open(keyName,ios::in);
	answer.open(ansName,ios::in);
	grade.open(grdName,ios::out);
	
	//Map the Inputs to Outputs - Process
	
	//Display and output the results
	int cols=0;
	while(key>>kyAnsGd[0][cols++]);
	cols=0;
	while(answer>>kyAnsGd[1][cols++]);
	
	for(int i=0;i<cols-1;i++){
		cout<<kyAnsGd[0][i];
	}
	cout<<endl;
	for(int i=0;i<cols-1;i++){
		cout<<kyAnsGd[1][i];
	}
	
	for(int i=0;i<cols-1;i++){
		if(kyAnsGd[0][i]==kyAnsGd[1][i]){
			kyAnsGd[2][i]='C';
		}else{
			kyAnsGd[2][i]='W';
		}
	}
	
	cout<<endl;
	for(int i=0;i<cols-1;i++){
		cout<<kyAnsGd[2][i];
		grade<<kyAnsGd[2][i];
	}
	
	
	//Close files
	key.close();
	answer.close();
	grade.close();
	
	//Exit the program
	return 0;
}