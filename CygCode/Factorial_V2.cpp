/*
Name:  Dr. Mark Lehr
Date:  01/23/25
Purpose: Factorial
*/

//System Libraries
#include <iostream> //I/O 
#include <cmath>    //Math
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	unsigned int n, nfact;
	float nLogFact,nLogF10;
	
	//Initialize Values
	cout<<"Input n to Calculate n!"<<endl;
	cin>>n;
	nfact=1;
	nLogFact=0;
	
	//Map the Inputs to Outputs - Process
	for(int i=1;i<=n;i++){
		nfact*=i;
		nLogFact+=log(i);
	}
	nLogF10=nLogFact/log(10);
	int inLogF10=nLogF10;
	float fnLog10=nLogF10-inLogF10;
	
	//Display and output the results
	cout<<n<<"!="<<nfact<<endl;
	cout<<"log("<<n<<"!)="<<nLogFact<<endl;
	cout<<n<<"!="<<"e^"<<nLogFact<<endl;
	cout<<n<<"!="<<exp(nLogFact)<<endl;
	cout<<n<<"!="<<"10^"<<nLogF10<<endl;
	cout<<n<<"!="<<pow(10,fnLog10)<<"x10^"<<inLogF10<<endl;
	
	
	//Exit the program
	return 0;
}