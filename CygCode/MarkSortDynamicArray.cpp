/*
Name:  Dr. Mark Lehr
Date:  02/10/25
Purpose: 1 Function Mark Sort using Dynamic Memory
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
int *fillAry(int);
void prntAry(int *,int,int);
void mrkSort(int *,int);
void swapMrk(int &,int &);
void swapMrk(int *,int *);

int main(int argv,char *argc[]){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	int size=100;
	int *array;
	
	//Initialize Values
	array=fillAry(size);
	prntAry(array,size,10);
	
	//Map the Inputs to Outputs - Process
	mrkSort(array,size);
	
	//Display and output the results
	prntAry(array,size,10);
	
	//Clean up memory
	delete []array;
	
	//Exit the program
	return 0;
}

void mrkSort(int *a,int n){
	for(int j=0;j<n-1;j++){
		for(int i=j+1;i<n;i++){
			//if(*(a+j)>a[i])swapMrk(a[j],a[i]);
			if(*(a+j)>a[i])swapMrk(a+j,a+i);
		}
	}
}

void swapMrk(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void swapMrk(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int *fillAry(int n){
	int *a=new int[n];
	for(int i=0;i<n;i++){
		*(a+i)=rand()%90+10;//[10-99] 2 digit random numbers
	}
	return a;
}

void prntAry(int *a,int n,int perLine){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}