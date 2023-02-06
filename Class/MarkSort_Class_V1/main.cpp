/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 26th, 2022, 9:35 AM
 * Purpose:  Dynamic Memory and Structures
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries
#include "Array.h"

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
Array *fillAry(int);
void prntAry(Array *,int);
void mrkSort(Array *);
int  linSrch(Array *, int);
int  binSrch(Array *, int);

//Execution begins here!
int main(int argc, char *argv[]) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    Array *array;
    int perLine;
    int value;
    
    //Initialize Variables
    value=rand()%90+10;
    perLine=10;
    array=fillAry(size);
    cout<<"Array before Sorting"<<endl;
    prntAry(array,perLine);
    
    //Map the inputs/known to the outputs
    int index=linSrch(array,value);
    cout<<"Searching using the Linear Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }
    
    //Display the outputs
    mrkSort(array);
    cout<<endl<<"Array after Sorting"<<endl;
    prntAry(array,perLine);
    
    //Map the inputs/known to the outputs
    index=binSrch(array,value);
    cout<<"Searching using the Binary Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }

    //Exit the program
    delete []array->data;
    delete array;
    return 0;
}

int  binSrch(Array *a, int val2Fnd){
    int beg=0;   //Beginning Range of the a array
    int end=a->size-1; //End point of the a array
    do{
        int midPnt=(end+beg)/2;//Calculate the mid point
        if(a->data[midPnt]==val2Fnd)return midPnt;
        else if(a->data[midPnt]>val2Fnd){
            end=midPnt-1;
        }else{
            beg=midPnt+1;
        }
    }while(end>beg);
    return -1;
}

int  linSrch(Array *a, int val2Fnd){
    for(int i=0;i<a->size;i++){
        if(a->data[i]==val2Fnd)return i;
    }
    return -1;
}

void mrkSort(Array *a){
    for(int i=0;i<a->size-1;i++){
        for(int j=i+1;j<a->size;j++){
            if(a->data[i]>a->data[j]){
                int temp=a->data[i];
                a->data[i]=a->data[j];
                a->data[j]=temp;
            }
        }
    }
}

void prntAry(Array *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int n){
    n=n<2?2:n;
    Array *a=new Array;
    a->size=n;
    a->data=new int[n];
    for(int i=0;i<n;i++){
        a->data[i]=rand()%90+10;//[10,99]
    }
    return a;
}