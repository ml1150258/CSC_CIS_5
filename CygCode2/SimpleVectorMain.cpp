/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 1st, 2021, 7:50 AM
 * Purpose:  To Test and Modify the Simple Vector
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "SimpleVector.h"

//Global Constants

//Function prototypes
void fillVec(SimpleVector<unsigned char> &);
void prntVec(SimpleVector<unsigned char> &,char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int size=100;
    SimpleVector<unsigned char> sv(size);
    
    //Fill the Vector
    fillVec(sv);
    sv.pushBack(65);
    
    //Prchar the Vector
    cout<<"Original Random Dynamic Array derived Simple Vector"<<endl;
    prntVec(sv,10);
    
    //Copy the Vector
    SimpleVector<unsigned char> copysv(sv);
    
    //Print the Vector
    cout<<"Copied Random Dynamic Array derived Simple Vector"<<endl;
    prntVec(copysv,10);

    return 0;
}

void prntVec(SimpleVector<unsigned char> &sv,char perLine){
    cout<<endl;
    for(unsigned char i=0;i<sv.size();i++){
        cout<<sv[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillVec(SimpleVector<unsigned char> &sv){
    for(unsigned char i=0;i<sv.size();i++){
        sv[i]=rand()%26+65;
    }
}