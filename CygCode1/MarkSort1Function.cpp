/*
Name:  Dr. Mark Lehr
Date:  02/04/25
Purpose: 3 Function Mark Sort
*/

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void mrkSort(int [],int);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	const int SIZE=100;
	int array[SIZE];
	
	//Initialize Values
	fillAry(array,SIZE);
	prntAry(array,SIZE,10);
	
	//Map the Inputs to Outputs - Process
	mrkSort(array,SIZE);
	
	//Display and output the results
	prntAry(array,SIZE,10);
	
	//Exit the program
	return 0;
}

void mrkSort(int a[],int n){
	for(int j=0;j<n-1;j++){
		for(int i=j+1;i<n;i++){
			if(a[j]>a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}

void fillAry(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=rand()%90+10;//[10-99] 2 digit random numbers
	}
}

void prntAry(int a[],int n,int perLine){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}