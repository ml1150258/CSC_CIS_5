/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Array.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void Array::setSize(int n){
    size=n>SIZE?SIZE:n;
}

void Array::setData(){
    for(int i=0;i<size;i++){
        data[i]=rand()%90+10;//[10-99]
    }
}

void Array::setData(int indx,int val){
    int idx=indx>=0&&indx<size?indx:0;
    data[idx]=val;
}
        
int  Array::getSize(){
    return size;
}
        
int  Array::getData(int indx){
    int i=indx>=0&&indx<size?indx:0;
    return data[i];
}

void Array::mrkSrt1(){
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