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
void bubSrt1(int [],int);
void bubSrt2(int [],int);
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
    bubSrt1(array,nElmnts);
    int end=time(0);
    cout<<"The time to Sort "<<nElmnts<<" elements using Mark's Mod      = "
            <<end-beg<<" Seconds"<<endl;
    
    beg=time(0);
    bubSrt2(brray,nElmnts);
    end=time(0);
    cout<<"The time to Sort "<<nElmnts<<" elements using Book Function   = "
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

void bubSrt2(int a[],int n){
    bool swap;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}

void bubSrt1(int a[],int n){
    bool swap;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=true;
            }
        }
        n--;
    }while(swap);
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