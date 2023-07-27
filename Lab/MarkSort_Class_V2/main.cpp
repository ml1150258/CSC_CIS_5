/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 18, 2023, 11:25 AM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants - Math/Science/Conversions only

//Function Prototypes
void prntAry(Array &,int);
void mrkSrt1(Array&);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Array array;
    
    //Initialize Variables
    array.setSize(200);
    array.setData();
    prntAry(array,10);
    
    //The Process -> Map Inputs to Outputs
    mrkSrt1(array);
    
    //Display Inputs/Outputs
    prntAry(array,10);

    //Exit the Program
    return 0;
}

void mrkSrt1(Array &a){
    for(int i=0;i<a.getSize()-1;i++){
        for(int j=i+1;j<a.getSize();j++){
            if(a.getData(i)>a.getData(j)){
                int temp=a.getData(i);
                a.setData(i,a.getData(j));
                a.setData(j,temp);
            }
        }
    }
}

void prntAry(Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.getSize();i++){
        cout<<a.getData(i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
