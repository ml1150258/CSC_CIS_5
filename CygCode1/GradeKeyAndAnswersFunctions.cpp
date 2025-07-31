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
const int COLS=50;

//Function Prototypes
int inptDat(string,fstream &,char [][COLS],int);
void prntDat(char [][COLS],int,int);
void wrtDat(string,fstream &,char [][COLS],int,int);
float score(char [][COLS],int);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	const int ROWS=3;
	int cols;
	char kyAnsGd[ROWS][COLS];
	string keyName="key.dat";
	string ansName="answers.dat";
	string grdName="grade.dat";
	fstream key,answer,grade;
	
	//Initialize Values
	inptDat(keyName,key,kyAnsGd,0);
	cols=inptDat(ansName,answer,kyAnsGd,1);
	
	//Map the Inputs to Outputs - Process
	cout<<"You earned an "<<score(kyAnsGd,cols)<<"%"<<endl;
	
	//Display and output the results
	prntDat(kyAnsGd,0,cols);
	prntDat(kyAnsGd,1,cols);
	prntDat(kyAnsGd,2,cols);
	wrtDat(grdName,grade,kyAnsGd,2,cols);
	
	//Exit the program
	return 0;
}

void wrtDat(string grdName,fstream &grade,char kyAnsGd[][COLS],int row,int cols){
	grade.open(grdName,ios::out);
	for(int i=0;i<cols;i++){
		grade<<kyAnsGd[row][i];
	}
	grade.close();
}

float score(char kyAnsGd[][COLS],int cols){
	int correct=0;
	for(int i=0;i<cols;i++){
		if(kyAnsGd[0][i]==kyAnsGd[1][i]){
			kyAnsGd[2][i]='C';
			correct++;
		}else{
			kyAnsGd[2][i]='W';
		}
	}
	return 100.0f*correct/cols;
}

void prntDat(char kyAnsGd[][COLS],int row,int cols){
	cout<<endl;
	for(int i=0;i<cols;i++){
		cout<<kyAnsGd[row][i];
	}
	cout<<endl;
}

int inptDat(string keyName,fstream &key,char kyAnsGd[][COLS],int row){
	key.open(keyName,ios::in);
	int cols=0;
	while(key>>kyAnsGd[row][cols++]);
	key.close();
	return --cols;
}