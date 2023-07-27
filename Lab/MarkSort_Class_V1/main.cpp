/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 18, 2023, 11:25 AM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants - Math/Science/Conversions only

//Function Prototypes
void prntAry(Array &,int);
void fillAry(Array &,int);
void mrkSrt1(Array&);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Array array;
    
    //Initialize Variables
    fillAry(array,200);
    prntAry(array,10);
    
    //The Process -> Map Inputs to Outputs
    mrkSrt1(array);
    
    //Display Inputs/Outputs
    prntAry(array,10);

    //Exit the Program
    return 0;
}

void mrkSrt1(Array &a){
    for(int i=0;i<a.size-1;i++){
        for(int j=i+1;j<a.size;j++){
            if(a.data[i]>a.data[j]){
                int temp=a.data[i];
                a.data[i]=a.data[j];
                a.data[j]=temp;
            }
        }
    }
}

void prntAry(Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(Array &a,int n){
    a.size=n>100?100:n;
    for(int i=0;i<a.size;i++){
        a.data[i]=rand()%90+10;//[10-99]
    }
}