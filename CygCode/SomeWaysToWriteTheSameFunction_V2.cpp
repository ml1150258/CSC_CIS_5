/*
Name:  Dr. Mark Lehr
Date:  01/28/25, 1/29/25
Purpose: Savings Function
Version: 2 -> Adding Static, Defaulted Parameters, Ref Parameters, Overload
*/

//System Libraries
#include <iostream> //I/O Library
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const char PERCENT=100;//Conversion to Percent

//Function Prototypes
float save1(float, float, int);   //Power function from the cmath library
float save2(float, float, int);   //Exponential and log functions from the cmath Library
float save3(float, float, int);   //For-Loop
float save4(float, float, int);   //Recursion, a function calling itself
float save1(float, float, float); //Overloaded Function Call
float save6(float, float, int=12);//Defaulted Parameter
void  save7(float &, float, int); //Reference Variable
int   save8(float &, float, int); //Static Variable

int main(int argv,char **argc){
	//Declare Variables
	float      pv, //Present in Dollars
		  intRate; //Interest rate in %/compounding periods
	int   nCmpPds; //Number of compounding periods
	
	//Initialize Values
	pv=1e2f;//$100
	intRate=6.0;//%/year
	//nCmpPds=12;//Years
	nCmpPds=72.0/intRate;//By the Rule of 72
	
	//Display and output the results
	intRate/=PERCENT;
	
	cout<<"save1("<<pv<<","<<intRate<<","<<nCmpPds<<")=$"
		<<save1(pv,intRate,nCmpPds)<<endl;
		
	cout<<"save2("<<pv<<","<<intRate<<","<<nCmpPds<<")=$"
		<<save2(pv,intRate,nCmpPds)<<endl;
		
	cout<<"save3("<<pv<<","<<intRate<<","<<nCmpPds<<")=$"
		<<save3(pv,intRate,nCmpPds)<<endl;
		
	cout<<"save4("<<pv<<","<<intRate<<","<<nCmpPds<<")=$"
		<<save4(pv,intRate,nCmpPds)<<endl;
		
	cout<<"save1("<<pv<<","<<intRate<<","<<nCmpPds<<")=$"
		<<save1(pv,intRate,static_cast<float>(nCmpPds))<<endl;
		
	cout<<"save6("<<pv<<","<<intRate<<")   =$"
		<<save6(pv,intRate)<<endl;
		
	float pvfv=pv;
	save7(pvfv,intRate,nCmpPds);
	cout<<"save7("<<pv<<","<<intRate<<","<<nCmpPds<<")=$"
		<<pvfv<<endl;
		
	pvfv=pv;
	int cntFunc=save8(pvfv,intRate,nCmpPds);
	cout<<"save8("<<pv<<","<<intRate<<","<<nCmpPds<<")=$"
		<<pvfv<<endl;
	for(int cnt=2;cnt<=5;cnt++){
		pvfv=pv;
		cntFunc=save8(pvfv,intRate,nCmpPds);
	}
	cout<<"The Static Function was called "<<cntFunc<<" times"<<endl;
	
	//Exit the program
	return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                Savings Function
//Inputs:  p -> Present Value $'s 
//         i -> Interest Rate %/periods
//         n -> Number of Compounding periods
//Outputs: fv -> Future Value or Savings 
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
int save8(float &pfv, float i, int n){
	static int cntFnCl=0;
	for(int period=1;period<=n;period++){
		pfv*=(1+i);
	}
	return ++cntFnCl;
}

void save7(float &pfv, float i, int n){
	for(int period=1;period<=n;period++){
		pfv*=(1+i);
	}
}

float save6(float p, float i, int n){
	float fv=p;
	for(int period=1;period<=n;period++){
		fv*=(1+i);
	}
	return fv;
}

float save4(float p, float i, int n){
	//Base Condition
	if(n<1)return p;
	//Recursion
	return save4(p,i,n-1)*(1+i);
}

float save3(float p, float i, int n){
	float fv=p;
	for(int period=1;period<=n;period++){
		fv*=(1+i);
	}
	return fv;
}

float save2(float p, float i, int n){
	return p*exp(n*log(1+i));
}

float save1(float p, float i, float n){
	return p*pow((1+i),n);
}

float save1(float p, float i, int n){
	return p*pow((1+i),n);
}