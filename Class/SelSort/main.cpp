/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 17, 2022, 9:35 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void swap1(int &,int &);
void swap2(int &,int &);
void smlPos(int [],int,int);
void selSort(int [],int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int perLine;
    
    //Initialize Variables
    perLine=10;
    fillAry(array,SIZE);
    prntAry(array,SIZE,perLine);
    
    //Map the inputs/known to the outputs
    selSort(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,perLine);

    //Exit the program
    return 0;
}

void selSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int indx=i;
        for(int j=i+1;j<n;j++){
            if(a[indx]>a[j]){
                indx=j;
            }
        }
        swap1(a[i],a[indx]);
    }
}

void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}