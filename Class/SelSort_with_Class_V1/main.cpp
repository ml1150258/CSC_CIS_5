/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 2, 2022, 10:20 AM
 * Purpose:  Replace array/size with Class
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries
#include "array.h"

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void fillAry(Array &);
void prntAry(const Array &,int);
void swap1(int &,int &);
void swap2(int &,int &);
void smlPos(Array &,int);
void selSort(Array &);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Array array;
    array.size=100;
    int perLine;
    
    //Initialize Variables
    perLine=10;
    fillAry(array);
    prntAry(array,perLine);
    
    //Map the inputs/known to the outputs
    selSort(array);
    
    //Display the outputs
    prntAry(array,perLine);
    
    //Deallocate Memory
    delete []array.data;

    //Exit the program
    return 0;
}

void selSort(Array &a){
    for(int i=0;i<a.size-1;i++){
        int indx=i;
        for(int j=i+1;j<a.size;j++){
            if(a.data[indx]>a.data[j]){
                indx=j;
            }
        }
        swap1(a.data[i],a.data[indx]);
    }
}

void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(const Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(Array &a){
    a.data=new int[a.size];
    for(int i=0;i<a.size;i++){
        a.data[i]=rand()%90+10;//[10,99]
    }
}