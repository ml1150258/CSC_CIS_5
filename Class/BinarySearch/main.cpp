/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2022, 11:20 AM
 * Purpose:  Order N^2 Sorting Algorithm
 *           or NP if desired
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Library
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
void smlLst(int [],int,int);
void markSrt(int [],int);
int  binSrch(int [],int,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    
    //Map the inputs/known to the outputs
    markSrt(array,SIZE);
    int val=rand()%90+10;
    int indx=binSrch(array,SIZE,val);
    //markSrt(array,SIZE);
    
    //Display the outputs
    cout<<"Value to find = "<<val<<endl;
    if(indx!=-1)cout<<val<<" was found at index = "<<indx<<endl;
    else cout<<val<<" was not found in the array"<<endl;
    prntAry(array,SIZE,10);

    //Exit the program
    return 0;
}

//Binary Search assumes pre-sorting the Array
int  binSrch(int a[],int n,int val){
    int high=n-1,low=0;
    do{
        int middle=(high+low)/2;
        if(val==a[middle]){
            return middle;
        }else if(val<a[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<=high);
    return -1;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlLst(a,n,i);
    }
}

void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}

void swap2(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap1(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
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
        a[i]=rand()%90+10;
    }
}