/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>  //Input-Output Library
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

#include "Array.h"


int  Array::binSrch(int val2Fnd){
    int beg=0;   //Beginning Range of the a array
    int end=size-1; //End point of the a array
    do{
        int midPnt=(end+beg)/2;//Calculate the mid point
        if(data[midPnt]==val2Fnd)return midPnt;
        else if(data[midPnt]>val2Fnd){
            end=midPnt-1;
        }else{
            beg=midPnt+1;
        }
    }while(end>beg);
    return -1;
}

int  Array::linSrch(int val2Fnd){
    for(int i=0;i<size;i++){
        if(data[i]==val2Fnd)return i;
    }
    return -1;
}

void Array::mrkSort(){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(data[i]>data[j]){
                int temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
}

void Array::prntAry(int perLine){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array::Array(int n){
    n=n<2?2:n;
    size=n;
    data=new int[n];
    for(int i=0;i<n;i++){
        data[i]=rand()%90+10;//[10,99]
    }
}