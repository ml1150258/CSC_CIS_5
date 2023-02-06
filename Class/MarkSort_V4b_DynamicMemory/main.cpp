/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on Feb 1st, 2023, 10:10 AM
 * Purpose:  Custom Sort
 *           Pointer Notation
 *           Dynamic Memory
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Seed the Random number function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int *filAray(int);  //Fill an array with 2digit numbers
void prntAry(int *,int,int);//Print an array with #cols
void mrkSrt(int *,int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=50;
    int *array;
    
    //Initialize Variables
    array=filAray(size);
    
    //Display Inputs/Outputs
    cout<<"The original unsorted array"<<endl;
    prntAry(array,size,10);
    
    //Map/Process the Inputs -> Outputs
    mrkSrt(array,size);
    
    //Display Inputs/Outputs
    cout<<endl<<endl<<"The sorted array"<<endl;
    prntAry(array,size,10);
    
    //Clean up memory and files
    delete []array;
    
    //Exit the Program
    return 0;
}

void mrkSrt(int *a,int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(*(a+j)>*(a+i)){
                int temp=*(a+j);
                *(a+j)=*(a+i);
                *(a+i)=temp;
            }
        }
    }
}

void prntAry(int *a,int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }   
}

int *filAray(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        //a[i]=rand()%90+10;//[10,99]
        *(a+i)=rand()%90+10;//[10,99]
    }
    return a;
}