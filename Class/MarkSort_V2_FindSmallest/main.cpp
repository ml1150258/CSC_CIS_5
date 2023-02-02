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
void swap1(int &,int &);//Added Memory Swap
void swap2(int &,int &);//Pass thru walls
void smlPos(int [],int,int);//Find smallest and swap with position

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Display Inputs/Outputs
    cout<<"The original unsorted array"<<endl;
    prntAry(array,SIZE,10);
    
    //Map/Process the Inputs -> Outputs
    smlPos(array,SIZE,0);
    smlPos(array,SIZE,1);
    smlPos(array,SIZE,2);
    smlPos(array,SIZE,3);
    
    //Display Inputs/Outputs
    cout<<endl<<endl<<"The swapped unsorted array"<<endl;
    prntAry(array,SIZE,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void smlPos(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}

void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }   
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}