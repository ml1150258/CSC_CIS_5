/*
Name:  Dr. Mark Lehr
Date:  02/06/25
Purpose: Database Sort
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
void fillAry(int [],int [],int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void mrkSort(int [],int [],int);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	const int SIZE=100;
	int array[SIZE],indx[SIZE];
	
	//Initialize Values
	fillAry(array,indx,SIZE);
	cout<<"The Original Array"<<endl;
	prntAry(array,SIZE,10);
	cout<<"The Original Index Array"<<endl;
	prntAry(indx,SIZE,10);
	cout<<"The Original Array Printed with Index"<<endl;
	prntAry(array,indx,SIZE,10);
	
	//Map the Inputs to Outputs - Process
	mrkSort(array,indx,SIZE);
	
	//Display and output the results
	cout<<"The Array After Sorting"<<endl;
	prntAry(array,SIZE,10);
	cout<<"The Index Array After Sorting"<<endl;
	prntAry(indx,SIZE,10);
	cout<<"The Array Printed with the Sorted Index"<<endl;
	prntAry(array,indx,SIZE,10);
	
	//Exit the program
	return 0;
}

void mrkSort(int a[],int indx[],int n){
	for(int j=0;j<n-1;j++){
		for(int i=j+1;i<n;i++){
			if(a[indx[j]]>a[indx[i]]){
				int temp=indx[j];
				indx[j]=indx[i];
				indx[i]=temp;
			}
		}
	}
}

void fillAry(int a[],int indx[],int n){
	for(int i=0;i<n;i++){
		a[i]=rand()%90+10;//[10-99] 2 digit random numbers
		indx[i]=i;
	}
}

void prntAry(int a[],int indx[],int n,int perLine){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[indx[i]]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}

void prntAry(int a[],int n,int perLine){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}