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
//Normally Resides in the .h file  Array.h
const int SIZE=1000;//Size of Array Fields in this structure
class Array{
    private://Data
        int size;          //Size of Array Fields utilized in this structure
        int data[SIZE];    //Data
        int indx[SIZE];    //Index of the data
    public://Function Prototypes
        void fillAry(int);       //Fills the Structure
        void prtAry1(int) const; //Prints the arrays Seperately
        void prtAry2(int) const; //Prints using index
        void mrkSort();           //Sorting with Structure
};

//Normally Resides in the .cpp file  Array.cpp
void Array::mrkSort(){
	for(int j=0;j<size-1;j++){
		for(int i=j+1;i<size;i++){
			if(data[indx[j]]>data[indx[i]]){
				int temp=indx[j];
				indx[j]=indx[i];
				indx[i]=temp;
			}
		}
	}
}

void Array::fillAry(int n){
	size=n;
	for(int i=0;i<size;i++){
		data[i]=rand()%90+10;//[10-99] 2 digit random numbers
		indx[i]=i;
	}
}

void Array::prtAry2(int perLine)const{
	cout<<endl;
	for(int i=0;i<size;i++){
		cout<<data[indx[i]]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}

void Array::prtAry1(int perLine)const{
	cout<<endl;
	for(int i=0;i<size;i++){
		cout<<data[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<size;i++){
		cout<<indx[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
}

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	int size=100;
	Array array;//Array Structure 
	
	//Initialize Values
	array.fillAry(size);
	cout<<"The Original Array with Index"<<endl;
	array.prtAry1(10);
	cout<<"The Original Array Printed with Index"<<endl;
	array.prtAry2(10);
	
	//Map the Inputs to Outputs - Process
	array.mrkSort();
	
	//Display and output the results
	cout<<"The Array After Sorting with Index"<<endl;
	array.prtAry1(10);
	cout<<"The Array Printed with the Sorted Index"<<endl;
	array.prtAry2(10);
	
	//Exit the program*/
	return 0;
}