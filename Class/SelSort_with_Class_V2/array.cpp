/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "array.h"
#include <iostream>
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

void Array::selSort(){
    for(int i=0;i<size-1;i++){
        int indx=i;
        for(int j=i+1;j<size;j++){
            if(data[indx]>data[j]){
                indx=j;
            }
        }
        swap1(data[i],data[indx]);
    }
}

void Array::swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
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
    size=n>=2?n:2;
    data=new int[size];
    for(int i=0;i<size;i++){
        data[i]=rand()%90+10;//[10,99]
    }
}
