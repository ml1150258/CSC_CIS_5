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
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void filAray(int [],int);  //Fill an array with 2digit numbers
void prntAry(int [],int,int);//Print an array with #cols
void mrkSrt(int [],int);

//Global Variables
int Ob,Oi,Oj,POs;

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=1600;
    int array[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Display Inputs/Outputs
    //cout<<"The original unsorted array"<<endl;
    //prntAry(array,SIZE,5);
    
    //Map/Process the Inputs -> Outputs
    mrkSrt(array,SIZE);
 
    
    //Display Inputs/Outputs
    //cout<<endl<<endl<<"The sorted array"<<endl;
    //prntAry(array,SIZE,5);
    cout<<"Operational Analysis"<<endl;
    cout<<"Size of Sort n = "<<SIZE<<endl;
    cout<<"Operations before the loop = "<<Ob<<endl;
    cout<<"Operations in the i loop   = "<<Oi<<endl;
    cout<<"Operations in the j loop   = "<<Oj<<endl;
    cout<<"Operations in the swap     = "<<POs<<endl;
    cout<<"Total Operations           = "<<Ob+Oi+Oj+POs<<endl;
    
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void mrkSrt(int a[],int n){
    Ob++;
    for(int i=0;i<n-1;i++){
        Oi+=5;
        for(int j=i+1;j<n;j++){
            Oj+=5;
            if(a[i]>a[j]){
                POs+=8;
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
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand();
    }
}