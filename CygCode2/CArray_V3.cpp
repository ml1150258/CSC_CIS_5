/* 
 * File:   Array.h
 * Author: mlehr
 * Created on May 29th, 2025, 10:26 AM
 * Purpose:  Array Class Implementation
 */


#include "CArray_V3.h"


void Array::bublSrt(){
    bool swap;
    int n=utlSize;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(data[i]>data[i+1]){
                swap1(i,i+1);
                swap=true;
            }
        }
        n--;
    }while(swap);
}

void Array::swap1(int indxJ,int indxK){
    int temp=data[indxJ];
    data[indxJ]=data[indxK];
    data[indxK]=temp;
}

Array::Array(int n){
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    //Fill all the data
    utlSize=n;
    data=new int[utlSize];
    for(int i=0;i<utlSize;i++){
        data[i]=rand()%90+10;//[10,99]
    }
}

void Array::prntAry(int perLine){
    cout<<endl;
    for(int i=0;i<utlSize;i++){
        cout<<data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}