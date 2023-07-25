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

//Global Constants - Math/Science/Conversions only

//Function Prototypes
void prntAry(int [],int,int);
void fillAry(int [],int);
void mrkSrt1(int [],int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int *array=new int[size];
    
    //Initialize Variables
    fillAry(array,size);
    prntAry(array,size,10);
    
    //The Process -> Map Inputs to Outputs
    mrkSrt1(array,size);
    
    //Display Inputs/Outputs
    prntAry(array,size,10);
    
    //Clear up memory
    delete []array;

    //Exit the Program
    return 0;
}

void mrkSrt1(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]
    }
}