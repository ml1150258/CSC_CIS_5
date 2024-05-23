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
void fillAry(Array &);
void prntAry(const Array &,int);
void markSrt(Array &);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Array array;
    
    //Initialize Variables
    fillAry(array);
    
    //Map/Process the Inputs -> Outputs
    prntAry(array,10);
    markSrt(array);
    
    //Display Inputs/Outputs
    prntAry(array,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void markSrt(Array &a){
    for(int i=0;i<a.SIZE-1;i++){
        for(int j=i+1;j<a.SIZE;j++){
            if(a.data[j]<a.data[i]){
                int temp=a.data[j];
                a.data[j]=a.data[i];
                a.data[i]=temp;
           }
        }
    }
}

void prntAry(const Array &a,int perLine){
    for(int i=0;i<a.SIZE;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(Array &a){
    for(int i=0;i<a.SIZE;i++){
        a.data[i]=rand()%90+10;//[10-99]
    }
}