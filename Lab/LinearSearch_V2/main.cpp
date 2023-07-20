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
void swap1(int &,int &);
void swap2(int &,int &);
void smlLst(int [],int,int);
void mrkSort(int [],int);
int  linSrch(int [],int,int);
int  linSrch(int,int [],int,int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    int val=rand()%90+10;//[10-99]
    fillAry(array,SIZE);
    prntAry(array,SIZE,10);
    int found1=linSrch(0,array,SIZE,val);
    cout<<"Value "<<val<<" found at position "<<found1<<endl;
    found1=linSrch(found1+1,array,SIZE,val);
    cout<<"Value "<<val<<" found at position "<<found1<<endl;
    
    //The Process -> Map Inputs to Outputs
    mrkSort(array,SIZE);
    int found2=linSrch(0,array,SIZE,val);
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    cout<<"Value "<<val<<" found at position "<<found2<<endl;
    found2=linSrch(found2+1,array,SIZE,val);
    cout<<"Value "<<val<<" found at position "<<found2<<endl;

    //Exit the Program
    return 0;
}

int linSrch(int strt,int a[],int n,int val){
    for(int i=strt;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlLst(a,n,i);
    }
}

void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}

//Logic Swap
void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

//Memory Swap
void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
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