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
void mrkSrt1(int [],int);

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    const int SIZE=1000;
    int array[SIZE];
    int nElmnts,perLine;
    
    //Initialize Variables
    nElmnts=100;
    perLine=10;
    filAray(array,nElmnts);
    
    //Display the Original Array
    cout<<"Original Array"<<endl;
    prtAray(array,nElmnts,perLine);
    
    //Map inputs to outputs -> i.e. process the inputs
    mrkSrt1(array,nElmnts);
    
    //Display the outputs
    cout<<"Sorted Array"<<endl;
    prtAray(array,nElmnts,perLine);
    
    //Clean up - File closing, memory de-allocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
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

void prtAray(const int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}