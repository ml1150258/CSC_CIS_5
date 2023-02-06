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
void mrkSort(int [],int);
int  linSrch(int [],int,int);
int  binSrch(int [],int,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int perLine, val2Fnd;
    
    //Initialize Variables
    perLine=10;
    val2Fnd=rand()%90+10;
    fillAry(array,SIZE);
    cout<<"Before Sort"<<endl;
    prntAry(array,SIZE,perLine);
    
    //Display the outputs
    cout<<endl<<endl<<"Using Linear Search"<<endl;
    cout<<val2Fnd<<" is at index = "<<linSrch(array,SIZE,val2Fnd)<<endl;
    cout<<endl<<endl<<"Using Binary Search"<<endl;
    cout<<val2Fnd<<" is at index = "<<binSrch(array,SIZE,val2Fnd)<<endl;
    
    //Map the inputs/known to the outputs
    mrkSort(array,SIZE);
    
    //Display the outputs
    cout<<endl<<endl<<"After Sort"<<endl;
    prntAry(array,SIZE,perLine);
    cout<<endl<<endl<<"Using Linear Search"<<endl;
    cout<<val2Fnd<<" is at index = "<<linSrch(array,SIZE,val2Fnd)<<endl;
    cout<<endl<<endl<<"Using Binary Search"<<endl;
    cout<<val2Fnd<<" is at index = "<<binSrch(array,SIZE,val2Fnd)<<endl;


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

int  linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%50+10;//[10,59]
    }
}