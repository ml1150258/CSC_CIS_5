/*
Name:  Dr. Mark Lehr
Date:  02/11/25
Purpose: Database Sort
*/

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
using namespace std;

//User Libraries
struct Array{
	int size;          //Size of Array Fields utilized in this structure
	int *data;         //Data
	int *indx;         //Index of the data
};

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
void fillAry(Array &,int);       //Fills the Structure
void prtAry1(const Array &,int); //Prints the arrays Seperately
void prtAry2(const Array &,int); //Prints using index
void mrkSort(Array &);           //Sorting with Structure
void cleanUp(Array &);           //Deallocate the Dynamic Arrays

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	int size=100;
	Array array;//Array Structure 
	
	//Initialize Values
	fillAry(array,size);
	cout<<"The Original Array with Index"<<endl;
	prtAry1(array,10);
	cout<<"The Original Array Printed with Index"<<endl;
	prtAry2(array,10);
	
	//Map the Inputs to Outputs - Process
	mrkSort(array);
	
	//Display and output the results
	cout<<"The Array After Sorting with Index"<<endl;
	prtAry1(array,10);
	cout<<"The Array Printed with the Sorted Index"<<endl;
	prtAry2(array,10);
	
	//Reclaim Memory
	cleanUp(array);
	
	//Exit the program*/
	return 0;
}

void cleanUp(Array &a){
	delete []a.data;
	delete []a.indx;
}

void mrkSort(Array &a){
	for(int j=0;j<a.size-1;j++){
		for(int i=j+1;i<a.size;i++){
			if(a.data[a.indx[j]]>a.data[a.indx[i]]){
				int temp=a.indx[j];
				a.indx[j]=a.indx[i];
				a.indx[i]=temp;
			}
		}
	}
}

void fillAry(Array &a,int n){
	a.size=n;
	a.data=new int[n];
	a.indx=new int[n];
	for(int i=0;i<a.size;i++){
		a.data[i]=rand()%90+10;//[10-99] 2 digit random numbers
		a.indx[i]=i;
	}
}

void prtAry2(const Array &a,int perLine){
	cout<<endl;
	for(int i=0;i<a.size;i++){
		cout<<a.data[a.indx[i]]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}

void prtAry1(const Array &a,int perLine){
	cout<<endl;
	for(int i=0;i<a.size;i++){
		cout<<a.data[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<a.size;i++){
		cout<<a.indx[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
}