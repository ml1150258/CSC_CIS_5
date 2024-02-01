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
#include <vector>    //Vector Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void filAray(vector<int> &,int);  //Fill an array with 2digit numbers
void prntAry(vector<int> &,int,int);//Print an array with #cols
void mrkSrt(vector<int> &,int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=50000;
    vector<int> array(SIZE);
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Display Inputs/Outputs
    //cout<<"The original unsorted array"<<endl;
    //prntAry(array,SIZE,5);
    
    //Map/Process the Inputs -> Outputs
    int beg=time(0);
    mrkSrt(array,SIZE);
    int end=time(0);
    
    cout<<"The total time for "<<SIZE<<" = "<<end-beg<<" seconds"<<endl;
    
    //Display Inputs/Outputs
    //cout<<endl<<endl<<"The sorted array"<<endl;
    //prntAry(array,SIZE,5);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void mrkSrt(vector<int> &a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}

void prntAry(vector<int> &a,int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }   
}

void filAray(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand();
    }
}