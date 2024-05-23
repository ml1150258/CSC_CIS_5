/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 23rd, 2023, 06:15 PM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Setting random number seed and Random function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int COLS=2;

//Function Prototypes
void fillAry(int [][COLS],int);
void prntAry(int [][COLS],int,int);
void markSrt(int [][COLS],int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE][COLS];
    
    //Initialize Variables
    fillAry(array,SIZE);
    
    //Map/Process the Inputs -> Outputs
    cout<<"The Original Array and Indexed Array"<<endl;
    prntAry(array,SIZE,10);
    markSrt(array,SIZE);
    
    //Display Inputs/Outputs
    //cout<<"The Array printed using the Indexed array after sorting"<<endl;
    prntAry(array,SIZE,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void markSrt(int a[][COLS],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[a[j][0]][1]<a[a[i][0]][1]){
                int temp=a[j][0];
                a[j][0]=a[i][0];
                a[i][0]=temp;
           }
        }
    }
}

void prntAry(int a[][COLS],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[a[i][0]][1]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}


void fillAry(int a[][COLS],int n){
    for(int i=0;i<n;i++){
        a[i][1]=rand()%90+10;//[10-99]
        a[i][0]=i;
    }
}