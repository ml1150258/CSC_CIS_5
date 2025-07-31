/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 15th, 2025, 10:15 AM
 * Purpose:  Fill and Play with Vectors
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Function
#include <ctime>      //Set Random Seed with Time
#include <vector>    //Vector STL
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void fillAry(vector<int> &);
void prntAry(vector<int> &,int);
void swap1(vector<int> &,int,int);
void bublSrt(vector<int> &);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int size=80000;
    vector<int> array(size);
    int nTries;
    
    //Initialize variables here
    fillAry(array);
    cout<<"Before Bubble Sort using Vector Arrays"<<endl;
    //prntAry(array,10);
    
    //Map inputs to outputs here, i.e. the process
    int beg=time(0);
    bublSrt(array);
    int end=time(0);
    
    //Display the results
    cout<<"After Bubble Sort using Vector Arrays"<<endl;
    //prntAry(array,10);
    cout<<"Time to sort = "<<end-beg<<" secs for array size = "<<size<<endl<<endl;

    //Exit Stage Right
    return 0;
}

void bublSrt(vector<int> &a){
    bool swap;
    int n=a.size();
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap1(a,i,i+1);
                swap=true;
            }
        }
        n--;
    }while(swap);
}

void swap1(vector<int> &a,int indxJ,int indxK){
    int temp=a[indxJ];
    a[indxJ]=a[indxK];
    a[indxK]=temp;
}

void fillAry(vector<int> &a){
    int n;
    for(int i=0;i<a.size();i++){
        n=rand();
        n<<=15;
        n+=rand();
        a[i]=n;
    }
}

void prntAry(vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}