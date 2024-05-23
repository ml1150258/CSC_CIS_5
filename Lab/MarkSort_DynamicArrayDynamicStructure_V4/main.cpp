/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 23rd, 2023, 06:15 PM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Setting random number seed and Random function
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
Array *fillAry(int);
void prntAry(const Array *,int);
void markSrt(Array *);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size;
    Array *array;
    
    //Initialize Variables
    size=100;
    array=fillAry(size);
    
    //Map/Process the Inputs -> Outputs
    prntAry(array,10);
    markSrt(array);
    
    //Display Inputs/Outputs
    prntAry(array,10);
    
    //Clean up memory and files
    delete [] array->data;
    delete array;
    
    //Exit the Program
    return 0;
}

void markSrt(Array *a){
    for(int i=0;i<a->size-1;i++){
        for(int j=i+1;j<a->size;j++){
            if(a->data[j]<a->data[i]){
                int temp=a->data[j];
                a->data[j]=a->data[i];
                a->data[i]=temp;
           }
        }
    }
}

void prntAry(const Array *a,int perLine){
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int size){
    Array *a=new Array;
    a->size=size;
    a->data=new int[a->size];
    for(int i=0;i<a->size;i++){
        a->data[i]=rand()%90+10;//[10-99]
    }
    return a;
}