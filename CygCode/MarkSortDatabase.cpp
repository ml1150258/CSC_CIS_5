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
struct Array{
	int size;
	int *data;
	int *indx;
};

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
Array *fillAry(int);
void prntAry(int [],int,int);
void prntAry(Array *,int);
void mrkSort(Array *);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	int size=100;
	Array *array;
	
	//Initialize Values
	array=fillAry(size);
	cout<<"The Original Array"<<endl;
	prntAry(array->data,size,10);
	cout<<"The Original Index Array"<<endl;
	prntAry(array->indx,size,10);
	cout<<"The Original Array Printed with Index"<<endl;
	prntAry(array,10);
	
	//Map the Inputs to Outputs - Process
	mrkSort(array);
	
	//Display and output the results
	cout<<"The Array After Sorting"<<endl;
	prntAry(array->data,size,10);
	cout<<"The Index Array After Sorting"<<endl;
	prntAry(array->indx,size,10);
	cout<<"The Array Printed with the Sorted Index"<<endl;
	prntAry(array,10);

	//Clean Up
	delete []array->data;
	delete []array->indx;
	delete array;
	
	//Exit the program
	return 0;
}

void mrkSort(Array *a){
	for(int j=0;j<a->size-1;j++){
		for(int i=j+1;i<a->size;i++){
			if(a->data[a->indx[j]]>a->data[a->indx[i]]){
				int temp=a->indx[j];
				a->indx[j]=a->indx[i];
				a->indx[i]=temp;
			}
		}
	}
}

Array *fillAry(int n){
	Array *a=new Array;
	a->size=n;
	a->data=new int[a->size];
	a->indx=new int[a->size];
	for(int i=0;i<n;i++){
		a->data[i]=rand()%90+10;//[10-99] 2 digit random numbers
		a->indx[i]=i;
	}
	return a;
}

void prntAry(Array *a,int perLine){
	cout<<endl;
	for(int i=0;i<a->size;i++){
		cout<<a->data[a->indx[i]]<<" ";
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