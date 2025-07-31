/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 15th, 2025, 10:15 AM
 * Purpose:  Fill and Play with Arrays
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Function
#include <ctime>      //Set Random Seed with Time
using namespace std;  //STD Name-space where Library is compiled

//User Libraries
#include "CArray_V1.h"

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void fillAry(Array &);
void prntAry(const Array &,int);
void swap1(Array &,int,int);
void bublSrt(Array &);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    Array array;
    
    //Initialize variables here
    array.utlSize=100;
    fillAry(array);

    //Before the Sort Display
    cout<<endl<<"Before Bubble Sort"<<endl;
    prntAry(array,10);
    
    //Map inputs to outputs here, i.e. the process
    bublSrt(array);
    
    //Display the results
    cout<<endl<<"After Bubble Sort"<<endl;
    prntAry(array,10);

    //Clean up memory
    delete []array.data;

    //Exit Stage Right
    return 0;
}

void bublSrt(Array &a){
    bool swap;
    int n=a.utlSize;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a.data[i]>a.data[i+1]){
                swap1(a,i,i+1);
                swap=true;
            }
        }
        n--;
    }while(swap);
}

void swap1(Array &a,int indxJ,int indxK){
    int temp=a.data[indxJ];
    a.data[indxJ]=a.data[indxK];
    a.data[indxK]=temp;
}

void fillAry(Array &a){
    a.data=new int[a.utlSize];
    for(int i=0;i<a.utlSize;i++){
        a.data[i]=rand()%90+10;//[10,99]
    }
}

void prntAry(const Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.utlSize;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}