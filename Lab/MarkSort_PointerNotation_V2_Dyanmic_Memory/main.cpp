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

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int *fillAry(int);
void prntAry(int *,int,int);
void markSrt(int *,int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int *array;
    
    //Initialize Variables
    array=fillAry(size);
    
    //Map/Process the Inputs -> Outputs
    prntAry(array,size,10);
    markSrt(array,size);
    
    //Display Inputs/Outputs
    prntAry(array,size,10);
    
    //Clean up memory and files
    delete []array;
    
    //Exit the Program
    return 0;
}

void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<*(a+i)){
                int temp=a[j];
                a[j]=*(a+i);
                *(a+i)=temp;
           }
        }
    }
}

void prntAry(int *a,int n,int perLine){
    for(int i=0;i<n;i++){
        //cout<<a[i]<<" ";
        cout<<*(a+i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int *fillAry(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;//[10-99]
    }
    return a;
}