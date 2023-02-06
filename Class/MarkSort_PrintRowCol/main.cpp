/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 17, 2022, 9:35 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Formatting
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void fillAry(char [],int);
void prntAry(char [],int,int);
void mrkSort(char [],int);
int  linSrch(char [],int, char);
int  binSrch(char [],int, char);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    char array[SIZE];
    int perLine;
    char value;
    
    //Initialize Variables
    value=rand()%26+65;
    perLine=10;
    fillAry(array,SIZE);
    cout<<"Array before Sorting"<<endl;
    prntAry(array,SIZE,perLine);
    
    //Map the inputs/known to the outputs
    int index=linSrch(array,SIZE,value);
    cout<<"Searching using the Linear Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }
    
    //Display the outputs
    mrkSort(array,SIZE);
    cout<<endl<<"Array after Sorting"<<endl;
    prntAry(array,SIZE,perLine);
    
    //Map the inputs/known to the outputs
    index=binSrch(array,SIZE,value);
    cout<<"Searching using the Binary Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }

    //Exit the program
    return 0;
}

int  binSrch(char a[],int n, char val2Fnd){
    int beg=0;   //Beginning Range of the a array
    int end=n-1; //End point of the a array
    do{
        int midPnt=(end+beg)/2;//Calculate the mid point
        if(a[midPnt]==val2Fnd)return midPnt;
        else if(a[midPnt]>val2Fnd){
            end=midPnt-1;
        }else{
            beg=midPnt+1;
        }
    }while(end>beg);
    return -1;
}

int  linSrch(char a[],int n, char val2Fnd){
    for(int i=0;i<n;i++){
        if(a[i]==val2Fnd)return i;
    }
    return -1;
}

void mrkSort(char a[],int n){
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

void prntAry(char a[],int n,int perLine){
    cout<<endl;
    cout<<"  ";
    for(int i=0;i<perLine;i++){
        cout<<setw(2)<<i<<"";
    }
    cout<<endl;
    int row=0;
    for(int i=0;i<n;i++){
        if(i%perLine==0)cout<<setw(2)<<row<<" ";
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1)){
            cout<<endl;
            row++;
        }
    }
    cout<<endl;
}

void fillAry(char a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%26+65;//[10,99]
    }
}