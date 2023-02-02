/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on Feb 1st, 2023, 10:10 AM
 * Purpose:  Custom Sort
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Seed the Random number function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void filAray(int [],int);  //Fill an array with 2digit numbers
void prntAry(int [],int,int);//Print an array with #cols
void mrkSrt1(int [],int);
void cpyAry(int [],int [],int);
void swap1(int &,int &);//Added Memory Swap
void smlPos(int [],int,int);//Find smallest and swap with position
void mrkSrt3(int [],int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=160000;
    int array[SIZE],brray[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    cpyAry(brray,array,SIZE);
    
    //Display Inputs/Outputs
    //cout<<"The original unsorted array"<<endl;
    //prntAry(array,SIZE,10);
    //cout<<endl;
    //prntAry(brray,SIZE,10);
    
    //Map/Process the Inputs -> Outputs
    int beg=time(0);
    mrkSrt1(array,SIZE);
    int end=time(0);
    cout<<endl<<"Time for Mark Sort 1 Function with SIZE = "<<
            SIZE<<" runs in "<<end-beg<<" seconds"<<endl;
    
    beg=time(0);
    mrkSrt3(brray,SIZE);
    end=time(0);
    cout<<endl<<"Time for Mark Sort 3 Function with SIZE = "<<
            SIZE<<" runs in "<<end-beg<<" seconds"<<endl;
    
    //Display Inputs/Outputs
    //cout<<endl<<endl<<"The sorted array"<<endl;
    //prntAry(array,SIZE,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void cpyAry(int b[],int a[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void mrkSrt1(int a[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }   
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand();//Totally Random no repeats
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


void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}