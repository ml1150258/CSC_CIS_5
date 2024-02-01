/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Array.h"
#include <cstdlib>
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