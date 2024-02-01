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
void prntAry(int [],int[],int,int);
void fillAry(int [],int [],int);
void mrkSrt1(int [],int [],int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx[SIZE];
    
    //Initialize Variables
    fillAry(array,indx,SIZE);
    prntAry(array,SIZE,10);
    prntAry(indx,SIZE,10);
    
    //The Process -> Map Inputs to Outputs
    mrkSrt1(array,indx,SIZE);
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    prntAry(indx,SIZE,10);
    prntAry(array,indx,SIZE,10);

    //Exit the Program
    return 0;
}

void mrkSrt1(int a[],int idx[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[idx[i]]>a[idx[j]]){
                int temp=idx[i];
                idx[i]=idx[j];
                idx[j]=temp;
            }
        }
    }
}

void prntAry(int a[],int idx[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[idx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int idx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]
        idx[i]=i;
    }
}