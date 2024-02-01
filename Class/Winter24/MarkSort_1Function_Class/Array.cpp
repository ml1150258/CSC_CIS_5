/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: mlehr
 * Created on May 30, 2023, 11:22 AM
 * Purpose:  Array Implementation
 */

#include "Array.h"
#include <cstdlib>
#include <iostream>
using namespace std;
        
void Array::setProp(int nElmnt,int prLn){
    nElmnts = nElmnt>=2 && nElmnt<=SIZE?
              nElmnt:
              SIZE;
    perLine = prLn>=2 && prLn<=50?
              prLn:
              50;
}
        
void Array::filAray(){
    for(int i=0;i<nElmnts;i++){
        array[i]=rand()%90+10;
    }
}

void Array::prtAray(){
    for(int i=0;i<nElmnts;i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
        
void Array::mrkSrt1(){
    for(int pos=0;pos<nElmnts-1;pos++){
        for(int i=pos+1;i<nElmnts;i++){
            if(array[pos]>array[i]){
                int temp=array[pos];
                array[pos]=array[i];
                array[i]=temp;
            };
        }
    }
}
