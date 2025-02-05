/*
Name:  Dr. Mark Lehr
Date:  02/03/25
Purpose: Savings Table
*/

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const int PERCENT=100;//Percent Conversion
const int COLS=2;//2 D Arrays cols

//Function Prototypes
void heading(float [][COLS],float);
void compute(float [][COLS],int [][COLS],float,int);
void display(float [][COLS],int [][COLS],int);

int main(int argv,char **argc){
	//Declare Variables
	float intRate; //Interest Rate/yr
	int nYears=50; //Number of years
	const int SIZE=nYears+1;
	//float savings[SIZE],interst[SIZE];//Parallel Arrays
	float savInt[SIZE][COLS];//Savings into Col 0 and Interest Col 1
	//int   numYr[SIZE],yrDate[SIZE];//Parallel Arrays
	int   numDate[SIZE][COLS];//Year number in Col 0 and Date in Col 1
	
	//Initialize Values
	savInt[0][0]=1.0e2f;//$100
	intRate=5;  //5 Percent
	
	//Display Headings with the table
	heading(savInt,intRate);
	
	//Map the Inputs to Outputs - Process
	compute(savInt,numDate,intRate,nYears);
	
	//Display and output the results
	display(savInt,numDate,nYears);
	
	//Exit the program
	return 0;
}

void display(float savInt[][COLS],int numDate[][COLS],int nYears){
	for(int yrNum=0;yrNum<=nYears;yrNum++){
		cout<<setw(2)<<numDate[yrNum][0]
			<<setw(10)<<numDate[yrNum][1]
			<<setw(12)<<savInt[yrNum][0]
			<<setw(15)<<savInt[yrNum][1]<<endl;
	}
}

void compute(float savInt[][COLS],int numDate[][COLS],float intRate,int nYears){
	intRate/=PERCENT;
	for(int yrNum=0,year=2025;yrNum<=nYears;yrNum++,year++){
		savInt[yrNum][1]=savInt[yrNum][0]*intRate;
		numDate[yrNum][0]=yrNum;
		numDate[yrNum][1]=year;
		if(yrNum!=nYears)savInt[yrNum+1][0]=savInt[yrNum][0]+savInt[yrNum][1];
	}
}

void heading(float savInt[][COLS],float intRate){
	//Display Headings with the table
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Principle = $"<<savInt[0][0]<<endl;
	cout<<"Interest Rate = "<<intRate<<"%"<<endl;
	cout<<"Year #	Year	Savings BOY	Interest EOY"<<endl;
}