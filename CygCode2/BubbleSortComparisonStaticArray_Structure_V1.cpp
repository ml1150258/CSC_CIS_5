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
const int SIZE=80000;
struct Array{
    int utlSize;
    int data[SIZE];
};

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void fillAry(Array &);
void prntAry(const Array &,int);
void swap1(Array &,int,int);
void bublSrt(Array &);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    Array array;
    int nTries;
    
    //Initialize variables here
    array.utlSize=80000;
    fillAry(array);
    cout<<"Before Bubble Sort using Static Arrays"<<endl;
    //prntAry(array,10);
    
    //Map inputs to outputs here, i.e. the process
    int beg=time(0);
    bublSrt(array);
    int end=time(0);
    
    //Display the results
    cout<<"After Bubble Sort using Static Arrays"<<endl;
    //prntAry(array,10);
    cout<<"Time to sort = "<<end-beg<<" secs for array size = "<<SIZE<<endl<<endl;

    //Exit Stage Right
    return 0;
}

void bublSrt(Array &a){
    bool swap;
    int n=a.utlSize;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a.data[i]>a.data[i+1]){
                swap1(a,i,i+1);
                swap=true;
            }
        }
        n--;
    }while(swap);
}

void swap1(Array &a,int indxJ,int indxK){
    int temp=a.data[indxJ];
    a.data[indxJ]=a.data[indxK];
    a.data[indxK]=temp;
}

void fillAry(Array &a){
    for(int i=0;i<a.utlSize;i++){
        int nrand=rand();
        nrand<<=15;
        nrand+=rand();
        a.data[i]=nrand;//[0,2^30-1];
        //a.data[i]=rand()%90+10;//[10,99]
    }
}

void prntAry(const Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.utlSize;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}