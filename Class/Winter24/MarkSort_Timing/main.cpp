/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 9th, 2023 09:35 AM
 * Purpose:  Sort
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>    //Random Library
#include <ctime>      //Time to set random seed
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
void filAray(int [],int);
void prtAray(const int [],int,int);
void swap1(int &,int &);
void swap2(int &,int &);
void smlPos(int [],int,int);
void mrkSrt3(int [],int);
void mrkSrt1(int [],int);
void cpyArr(int [],const int [],int);

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    const int SIZE=250000;
    int array[SIZE],brray[SIZE];
    int nElmnts,perLine;
    
    //Initialize Variables
    nElmnts=160000;
    perLine=10;
    filAray(array,nElmnts);
    cpyArr(brray,array,nElmnts);
    
    //Display the Original Array
    //cout<<"Original Array"<<endl;
    //prtAray(array,nElmnts,perLine);
    //prtAray(brray,nElmnts,perLine);
    
    //Map inputs to outputs -> i.e. process the inputs
    int beg=time(0);
    mrkSrt3(array,nElmnts);
    int end=time(0);
    cout<<"The time to Sort "<<nElmnts<<" elements using 3 Functions  = "
            <<end-beg<<" Seconds"<<endl;
    
    beg=time(0);
    mrkSrt1(brray,nElmnts);
    end=time(0);
    cout<<"The time to Sort "<<nElmnts<<" elements using 1 Function   = "
            <<end-beg<<" Seconds"<<endl;
    
    //Display the outputs
    //cout<<"Sorted Array"<<endl;
    //prtAray(array,nElmnts,perLine);
    //prtAray(brray,nElmnts,perLine);
    
    //Clean up - File closing, memory de-allocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
void cpyArr(int b[],const int a[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void mrkSrt1(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int i=pos+1;i<n;i++){
            if(a[pos]>a[i]){
                int temp=a[pos];
                a[pos]=a[i];
                a[i]=temp;
            };
        }
    }
}

void mrkSrt3(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlPos(a,n,i);
    }
}

void smlPos(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}

void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prtAray(const int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand();
    }
}