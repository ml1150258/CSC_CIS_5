/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 16th, 2024, 6:45 PM
 * Purpose:  Example Arrays with Functions
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Library for the Rand function
#include <ctime>     //Time Library to set Random Number seed
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
int  minMax(int [],int,int &);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=500;
    int array[SIZE];
    int mmin,mmax;
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Map/Process the Inputs -> Outputs
    mmin=minMax(array,SIZE,mmax);
    
    //Display Inputs/Outputs
    cout<<"The min of the array = "<<mmin<<endl;
    cout<<"The max of the array = "<<mmax<<endl;
    prntAry(array,SIZE,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

int  minMax(int a[],int n,int &mmax){
    //Declare variables
    int mmin;
    
    //Initialize values
    mmin=mmax=a[0];
    
    //Process to find Min and Max
    for(int i=1;i<n;i++){
        if(mmax<a[i])mmax=a[i];
        if(mmin>a[i])mmin=a[i];
    }
    
    //Return the min
    return mmin;
}

void prntAry(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

void filAray(int a[],int n){
    int base=100;
    int range=200;
    for(int i=0;i<n;i++){
        a[i]=rand()%(range+1)+base;//[100-300]
    }
}