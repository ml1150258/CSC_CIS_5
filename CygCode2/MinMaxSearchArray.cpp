/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 8th, 2025, 9:50 AM
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
int  max(int [],int);
int  min(int [],int);
void smlLst1(int [],int,int);
int smlLst2(int [],int,int);
bool find(int [],int,int);
void swap1(int [],int,int,int);
void swap2(int [],int,int,int);
void markSrt(int [],int);
void bublSrt(int [],int);
void selSrt(int [],int);
bool linSrch(int [],int,int,int &,int &);
bool binSrch(int [],int,int,int &,int &);


//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    const int SIZE=100;
    int array[SIZE]={};//Initializes the Array to 0
    int nTries;
    
    //Initialize variables here
    //prntAry(array,SIZE,10);
    fillAry(array,SIZE);
    prntAry(array,SIZE,10);
    
    
    //Map inputs to outputs here, i.e. the process
    int findRnd=rand()%90+10;//[10,99]
    cout<<endl;
    cout<<"The Maximum in the Array = "<<max(array,SIZE)<<endl;
    cout<<"The Minimum in the Array = "<<min(array,SIZE)<<endl;
    if(find(array,SIZE,findRnd)){
        cout<<"Linear Search -> "<<findRnd<<" has been found in the Array"<<endl;
        int idx;
        linSrch(array,SIZE,findRnd,idx,nTries);
        cout<<"Linear Search -> "<<findRnd<<" was found at index = "<<idx<<" in "<<nTries<<" loops"<<endl;
    }else{
        cout<<"Linear Search -> "<<findRnd<<" has not been found in the Array"<<endl;
    }
    int idx;
    bool found=binSrch(array,SIZE,findRnd,idx,nTries);
    if(found){
        cout<<"Binary Search -> "<<findRnd<<" was found at index = "<<idx<<" in "<<nTries<<" loops"<<endl;
    }else{
        cout<<"Binary Search -> "<<findRnd<<" has not been found in the Array"<<endl;
    }

    //markSrt(array,SIZE);
    //bublSrt(array,SIZE);
    selSrt(array,SIZE);
    prntAry(array,SIZE,10);
    
    //Display the results
    cout<<endl;
    cout<<"The Maximum in the Array = "<<max(array,SIZE)<<endl;
    cout<<"The Minimum in the Array = "<<min(array,SIZE)<<endl;
    if(find(array,SIZE,findRnd)){
        cout<<"Linear Search -> "<<findRnd<<" has been found in the Array"<<endl;
        int idx;
        linSrch(array,SIZE,findRnd,idx,nTries);
        cout<<"Linear Search -> "<<findRnd<<" was found at index = "<<idx<<" in "<<nTries<<" loops"<<endl;
    }else{
        cout<<"Linear Search -> "<<findRnd<<" has not been found in the Array"<<endl;
    }
    found=binSrch(array,SIZE,findRnd,idx,nTries);
    if(found){
        cout<<"Binary Search -> "<<findRnd<<" was found at index = "<<idx<<" in "<<nTries<<" loops"<<endl;
    }else{
        cout<<"Binary Search -> "<<findRnd<<" has not been found in the Array"<<endl;
    }


    //Exit Stage Right
    return 0;
}

bool binSrch(int a[],int n,int val,int &indx,int &nTries){
    //Setting the range, i.e. beg and end
    int beg=0,end=n,mid;
    nTries=0;
    indx=-1;
    //Loop until done
    do{
        mid=(end+beg)/2.0;
        nTries++;
        if(a[mid]==val){
            indx=mid;
            return true;
        }else if(a[mid]>val){
            end=mid-1;
        }else{
            beg=mid+1;
        }
    }while(beg<end);
    return false;
}

bool linSrch(int a[],int n,int val,int &indx,int &nTries){
    nTries=0;
    for(int i=0;i<n;i++){
        nTries++;
        if(a[i]==val){
            indx=i;
            return true;
        }
    }
    return false;
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

void selSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        int indx=smlLst2(a,n,i);
        swap1(a,n,indx,i);
    }
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlLst1(a,n,i);
    }
}

int  max(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}

int  smlLst2(int a[],int n,int pos){
    int idx=pos;
    for(int i=pos+1;i<n;i++){
        if(a[idx]>a[i]) idx=i;
    }
    return idx;
}

void  smlLst1(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i]) swap1(a,n,pos,i);
    }
}

int  min(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}

bool find(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val){
            return true;
        }
    }
    return false;
}

void swap1(int a[],int n,int indxJ,int indxK){
    int temp=a[indxJ];
    a[indxJ]=a[indxK];
    a[indxK]=temp;
}

void swap2(int a[],int n,int indxJ,int indxK){
    a[indxJ]=a[indxJ]^a[indxK];
    a[indxK]=a[indxJ]^a[indxK];
    a[indxJ]=a[indxJ]^a[indxK];
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99] 2Digit Number base on 2^15-1 Random Range
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