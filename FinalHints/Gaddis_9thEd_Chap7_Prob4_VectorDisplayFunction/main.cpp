/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 31, 2022, 11:10 AM
 * Purpose:  Fill and Display Arrays with Conditions
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Function
#include <vector>    //STL Vector Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void fillAry(vector<int> &,int);
void prntAry(vector<int> &,int,int);
void newAry(vector<int> &,int,int,vector<int> &,int&);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=200;//Maximum Size of array
    vector<int> array(size);//Integer array
    vector<int> brray(size);//Integer array
    int bigger;//Elements that are bigger for the new array
    
    //Initialize Variables
    int aSize=size/2;//Use half the allocated array
    int bSize=0;
    fillAry(array,aSize);
    
    //Map the inputs/known to the outputs
    bigger=rand()%90+10;
    newAry(array,aSize,bigger,brray,bSize);
    
    //Display the outputs
    prntAry(array,aSize,10);
    cout<<"The new array has "<<bSize<<" elements "
            <<"bigger than "<<bigger<<endl;
    prntAry(brray,bSize,10);

    //Exit the program
    return 0;
}

void newAry(vector<int> &a,int aSize,int n,vector<int> &b,int &bSize){
    bSize=0;
    for(int i=0;i<aSize;i++){
        if(a[i]>n){
            b[bSize++]=a[i];
        }
    }
}

void prntAry(vector<int> &a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";//[10,99]
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}