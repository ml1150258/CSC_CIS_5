/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 18, 2023, 11:25 AM
 * Purpose:  All Sorts
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
void bubSrt(int [],int);
void selSrt(int [],int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    prntAry(array,SIZE,10);
    
    //The Process -> Map Inputs to Outputs
    int pckSrt=rand()%3;
    if(pckSrt==0){
        cout<<"This sorts with Mark Sort"<<endl;
        mrkSrt1(array,SIZE);
    }else if(pckSrt==1){
        cout<<"This sorts with Bubble Sort"<<endl;
        bubSrt(array,SIZE);
    }else{
        cout<<"This sorts with Selection Sort"<<endl;
        selSrt(array,SIZE);
    }
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);

    //Exit the Program
    return 0;
}

void selSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){//Compares to of the list to all elements below
            if(a[minIdx]>a[j]){
                minIdx=j;
            }
        }
        int temp=a[i];
        a[i]=a[minIdx];
        a[minIdx]=temp;
    }
}

void bubSrt(int a[],int n){
    bool swap;
    do{
        swap=false;
        for(int j=1;j<n;j++){
            if(a[j-1]>a[j]){//Elements always right next to each other
                swap=true;
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
        --n;//Heavy elements drop directly to the bottom first
    }while(swap);
}

void mrkSrt1(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){//Compares to of the list to all elements below
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