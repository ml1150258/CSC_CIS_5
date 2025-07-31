/*
Name:  Dr. Mark Lehr
Date:  02/06/25
Purpose: Testing Linear and Binary Searches
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
bool linSrch(int [],int,int,int&);
bool binSrch(int [],int,int,int&);


int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	const int SIZE=100;
	int array[SIZE];
	int val2Fnd,indx;
	
	//Initialize Values
	val2Fnd=rand()%90+10;//[10-99] 2 digit random numbers
	fillAry(array,SIZE);
	prntAry(array,SIZE,10);
	
	//Map the Inputs to Outputs - Process
	cout<<"Linear Search"<<endl;
	if(linSrch(array,SIZE,val2Fnd,indx))cout<<val2Fnd<<" is at index = "<<indx<<" Before Sort"<<endl;
	else cout<<"Value "<<val2Fnd<<" not Found"<<endl<<endl;
	
	cout<<"Binary Search"<<endl;
	if(binSrch(array,SIZE,val2Fnd,indx))cout<<val2Fnd<<" is at index = "<<indx<<" Before Sort"<<endl;
	else cout<<"Value "<<val2Fnd<<" not Found"<<endl<<endl;
	
	mrkSort(array,SIZE);
	
	cout<<"Linear Search"<<endl;
	if(linSrch(array,SIZE,val2Fnd,indx))cout<<val2Fnd<<" is at index = "<<indx<<" After Sort"<<endl;
	else cout<<"Value "<<val2Fnd<<" not Found"<<endl<<endl;
	
	cout<<"Binary Search"<<endl;
	if(binSrch(array,SIZE,val2Fnd,indx))cout<<val2Fnd<<" is at index = "<<indx<<" After Sort"<<endl;
	else cout<<"Value "<<val2Fnd<<" not Found"<<endl<<endl;
	
	//Display and output the results
	prntAry(array,SIZE,10);
	
	//Exit the program
	return 0;
}

bool binSrch(int a[],int n,int valFind,int &indx){
	int mnRng=0,mxRng=n-1;
	do{
		int middle=(mxRng+mnRng)/2;
		if(a[middle]==valFind){    //Found the value in the array
			indx=middle;
			return true;
		}else if(a[middle]>valFind){//Modify the upper range
			mxRng=middle-1;
		}else{                     //Modify the lower range
			mnRng=middle+1;
		}
	//}while(mxRng>=mnRng);
	}while(!(mxRng<mnRng));
	return false;
}

bool linSrch(int a[],int n,int valFind,int &indx){
	for(int i=0;i<n;i++){
		if(a[i]==valFind){
			indx=i;
			return true;
		}
	}
	return false;
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