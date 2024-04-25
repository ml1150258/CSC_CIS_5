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

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
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