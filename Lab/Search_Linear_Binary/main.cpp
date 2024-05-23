/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 14th, 2024, 10:06 AM
 * Purpose:  Linear and Binary
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Setting random number seed and Random function
#include <ctime>     //Seed for the random number generator
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void markSrt(int [],int);
bool linSrch(int [],int,int,int &,int &);
bool binSrch(int [],int,int,int &,int &);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int rnd2Fnd,linIndx,linVFnd;
    
    //Initialize Variables
    fillAry(array,SIZE);
    rnd2Fnd=array[rand()%SIZE];
    
    //Map/Process the Inputs -> Outputs
    prntAry(array,SIZE,10);
    cout<<"Search performed before Sorting"<<endl;
    cout<<"Random Number to Find = "<<rnd2Fnd<<endl;
    bool found=linSrch(array,SIZE,rnd2Fnd,linIndx,linVFnd);
    if(found){
        cout<<"Value found with Linear Search = "<<linVFnd<<endl;
        cout<<"Index in array where it was found = "<<linIndx<<endl<<endl;
    }
    found=binSrch(array,SIZE,rnd2Fnd,linIndx,linVFnd);
    if(found){
        cout<<"Value found with Binary Search = "<<linVFnd<<endl;
        cout<<"Index in array where it was found = "<<linIndx<<endl<<endl;
    }else{
        cout<<"Value not found with Binary Search = "<<linVFnd<<endl;
        cout<<"Index in array where it was found = "<<linIndx<<endl<<endl;
    }
    
    
    markSrt(array,SIZE);
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    cout<<"Search performed after Sorting"<<endl;
    found=linSrch(array,SIZE,rnd2Fnd,linIndx,linVFnd);
    if(found){
        cout<<"Value found with Linear Search = "<<linVFnd<<endl;
        cout<<"Index in array where it was found = "<<linIndx<<endl<<endl;
    }
    found=binSrch(array,SIZE,rnd2Fnd,linIndx,linVFnd);
    if(found){
        cout<<"Value found with Binary Search = "<<linVFnd<<endl;
        cout<<"Index in array where it was found = "<<linIndx<<endl<<endl;
    }else{
        cout<<"Value not found with Binary Search = "<<linVFnd<<endl;
        cout<<"Index in array where it was found = "<<linIndx<<endl<<endl;
    }
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

bool binSrch(int a[],int n,int val,int &indx,int &valFnd){
    int low=0,high=n-1,mid;
    do{
        mid=(high+low)/2;
        if(a[mid]==val){
            indx=mid;
            valFnd=val;
            return true;
        }else if(a[mid]<val){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }while(low<=high);
    indx=-1;
    valFnd=-1;
    return false;
}

bool linSrch(int a[],int n,int val,int &indx,int &valFnd){
    for(int i=0;i<n;i++){
        if(val==a[i]){
            indx=i;
            valFnd=a[i];
            return true;
        }
    }
    indx=-1;
    valFnd=-1;
    return false;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
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
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]
    }
}