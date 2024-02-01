/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 31, 2024, 1:04 PM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <cstdlib>   //Seed/Rand function
#include <ctime>     //Time to set seed
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void selSrt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize all variables
    fillAry(array,SIZE);
    
    //Process or Map solutions
    prntAry(array,SIZE,10);
    selSrt(array,SIZE);

    //Display the output
    prntAry(array,SIZE,10);
    

    //Exit the Program
    return 0;
}

void selSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        int smlIndx=i;
        for(int j=i+1;j<n;j++){
            if(a[smlIndx]>a[j]){
                smlIndx=j;
            }
        }
        int temp=a[i];
        a[i]=a[smlIndx];
        a[smlIndx]=temp;
    }
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }    
    cout<<endl;
}