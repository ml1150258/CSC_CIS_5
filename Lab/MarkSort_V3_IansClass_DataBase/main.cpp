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
void fillAry(int [],int [],int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void markSrt(int [],int [],int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int index[SIZE];
    
    //Initialize Variables
    fillAry(array,index,SIZE);
    
    //Map/Process the Inputs -> Outputs
    cout<<"The Original Array and Indexed Array"<<endl;
    prntAry(array,SIZE,10);
    prntAry(index,SIZE,10);
    
    markSrt(array,index,SIZE);
    
    //Display Inputs/Outputs
    cout<<"The Array and Indexed Array after Sorting"<<endl;
    prntAry(array,SIZE,10);
    prntAry(index,SIZE,10);
    cout<<"The Array printed using the Indexed array after sorting"<<endl;
    prntAry(array,index,SIZE,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void markSrt(int a[],int indx[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[indx[j]]<a[indx[i]]){
                int temp=indx[j];
                indx[j]=indx[i];
                indx[i]=temp;
           }
        }
    }
}

void prntAry(int a[],int idx[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[idx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int indx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]
        indx[i]=i;
    }
}