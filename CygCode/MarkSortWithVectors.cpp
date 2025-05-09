/*
Name:  Dr. Mark Lehr
Date:  02/04/25
Purpose: 3 Function Mark Sort
*/

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
#include <vector>    //STL Vectors
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
void fillAry(vector<int> &);
void prntAry(vector<int> &,int);
void mrkSort(vector<int> &);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	int size=100;
	vector<int> array(size);
	
	//Initialize Values
	fillAry(array);
	prntAry(array,10);
	
	//Map the Inputs to Outputs - Process
	mrkSort(array);
	
	//Display and output the results
	prntAry(array,10);
	
	//Exit the program
	return 0;
}

void mrkSort(vector<int> &a){
	for(int j=0;j<a.size()-1;j++){
		for(int i=j+1;i<a.size();i++){
			if(a[j]>a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}

void fillAry(vector<int> &a){
	for(int i=0;i<a.size();i++){
		a[i]=rand()%90+10;//[10-99] 2 digit random numbers
	}
}

void prntAry(vector<int> &a,int perLine){
	cout<<endl;
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}