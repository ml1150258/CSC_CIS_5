/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 26th, 2022, 9:35 AM
 * Purpose:  Dynamic Memory
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
int *fillAry(int);
void prntAry(int *,int,int);
void mrkSort(int *,int);
int  linSrch(int *,int, int);
int  binSrch(int *,int, int);

//Execution begins here!
int main(int argc, char *argv[]) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int *array;
    int perLine;
    int value;
    
    //Initialize Variables
    value=rand()%90+10;
    perLine=10;
    array=fillAry(size);
    cout<<"Array before Sorting"<<endl;
    prntAry(array,size,perLine);
    
    //Map the inputs/known to the outputs
    int index=linSrch(array,size,value);
    cout<<"Searching using the Linear Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }
    
    //Display the outputs
    mrkSort(array,size);
    cout<<endl<<"Array after Sorting"<<endl;
    prntAry(array,size,perLine);
    
    //Map the inputs/known to the outputs
    index=binSrch(array,size,value);
    cout<<"Searching using the Binary Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }

    //Exit the program
    delete []array;
    return 0;
}

int  binSrch(int *a,int n, int val2Fnd){
    int beg=0;   //Beginning Range of the a array
    int end=n-1; //End point of the a array
    do{
        int midPnt=(end+beg)/2;//Calculate the mid point
        if(a[midPnt]==val2Fnd)return midPnt;
        else if(*(a+midPnt)>val2Fnd){
            end=midPnt-1;
        }else{
            beg=midPnt+1;
        }
    }while(end>beg);
    return -1;
}

int  linSrch(int *a,int n, int val2Fnd){
    for(int i=0;i<n;i++){
        if(*(a+i)==val2Fnd)return i;
    }
    return -1;
}

void mrkSort(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i)>j[a]){
                int temp=*(a+i);
                *(a+i)=j[a];
                j[a]=temp;
            }
        }
    }
}

void prntAry(int *a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int * fillAry(int n){
    n=n<2?2:n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;//[10,99]
    }
    return a;
}