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

//Function Prototypes
void heading(double [],double,double,double);
void compute(double [],double[],int [],int [],double,int,double);
void display(double [],double[],int [],int [],int,double);


int main(int argv,char **argc){
	//Declare Variables
	double intRate,   //Interest Rate/yr
			salary,  //Salary $'s/year
			percSav; //% of Salary to Save 
	double 	deposit; //Deposit $'s/year
	int nYears=50; //Number of years
	const int SIZE=nYears+1;
	double savings[SIZE],interst[SIZE];//Parallel Arrays
	int   numYr[SIZE],yrDate[SIZE];//Parallel Arrays
	
	//Initialize Values
	savings[0]=0;//$100
	intRate=5;  //5 Percent
	salary=2e5;//$200,000/year 
	percSav=1e-1;//10%
	deposit=salary*percSav;//Yearly Deposit
	
	//Display Headings with the table
	heading(savings,intRate,salary,deposit);
	
	//Map the Inputs to Outputs - Process
	intRate/=PERCENT;
	compute(savings,interst,numYr,yrDate,intRate,nYears,deposit);
	
	//Display and output the results
	display(savings,interst,numYr,yrDate,nYears,deposit);
	
	//Exit the program
	return 0;
}

void display(double savings[],double interst[],int numYr[],int yrDate[],int nYears,double deposit){
	for(int yrNum=0;yrNum<=nYears;yrNum++){
		cout<<setw(2)<<numYr[yrNum]
			<<setw(10)<<yrDate[yrNum]
			<<setw(12)<<savings[yrNum]
			<<setw(15)<<interst[yrNum]
			<<setw(15)<<deposit<<endl;
	}
}

void compute(double savings[],double interst[],int numYr[],int yrDate[],double intRate,int nYears,double deposit){
	for(int yrNum=0,year=2025;yrNum<=nYears;yrNum++,year++){
		interst[yrNum]=savings[yrNum]*intRate;
		numYr[yrNum]=yrNum;
		yrDate[yrNum]=year;
		if(yrNum!=nYears)savings[yrNum+1]=savings[yrNum]+interst[yrNum]+deposit;
	}
}

void heading(double savings[],double intRate,double salary,double deposit){
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Principle = $"<<savings[0]<<endl;
	cout<<"Interest Rate = "<<intRate<<"%"<<endl;
	cout<<"Salary = $"<<salary<<endl;
	cout<<"Yearly Deposit = $"<<deposit<<endl;
	cout<<"Year #	Year	Savings BOY	Interest EOY  Deposit"<<endl;
}