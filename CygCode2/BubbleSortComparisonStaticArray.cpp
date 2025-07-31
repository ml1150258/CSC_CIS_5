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

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void swap1(int [],int,int,int);
void bublSrt(int [],int);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    const int SIZE=80000;
    int array[SIZE]={};//Initializes the Array to 0
    int nTries;
    
    //Initialize variables here
    fillAry(array,SIZE);
    cout<<"Before Bubble Sort using Static Arrays"<<endl;
    //prntAry(array,SIZE,10);
    
    //Map inputs to outputs here, i.e. the process
    int beg=time(0);
    bublSrt(array,SIZE);
    int end=time(0);
    
    //Display the results
    cout<<"After Bubble Sort using Static Arrays"<<endl;
    //prntAry(array,SIZE,10);
    cout<<"Time to sort = "<<end-beg<<" secs for array size = "<<SIZE<<endl<<endl;

    //Exit Stage Right
    return 0;
}

void bublSrt(int a[],int n){
    bool swap;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap1(a,n,i,i+1);
                swap=true;
            }
        }
        n--;
    }while(swap);
}

void swap1(int a[],int n,int indxJ,int indxK){
    int temp=a[indxJ];
    a[indxJ]=a[indxK];
    a[indxK]=temp;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        int nrand=rand();
        nrand<<=15;
        nrand+=rand();
        a[i]=nrand;//[0,2^30-1];
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