#include "Array.h"
//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
using namespace std;
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