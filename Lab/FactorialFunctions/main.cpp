/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 11th, 2023, 11:53 AM
 * Purpose:  Factorial Functions
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes
int fctrl1(int);//Factorial with a For-loop
int fctrl2(int);//Factorial with a Recursion
float sumLog(int);//Factorial with a Exp(Sum-Log)
float smLog10(int);//Factorial with a 10^(Sum-Log)

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    
    //Declare Variables
    int n,nfact1,nfact2,nfact3,nfact4;
    float ffact3,ffact4;
    
    //Initialize Variables
    cout<<"This program calculates n!"<<endl;
    cout<<"Input a small integer"<<endl;
    cin>>n;
    
    //The Process -> Map Inputs to Outputs
    nfact1=fctrl1(n);
    
    //Display Inputs/Outputs
    cout<<"For-Loop         "<<n<<"! = "<<nfact1<<endl;
    
    //The Process -> Map Inputs to Outputs
    nfact2=fctrl1(n-1)*n;
    
    //Display Inputs/Outputs
    cout<<"For-Loop         "<<n<<"! = "<<nfact2<<endl;
    
    //The Process -> Map Inputs to Outputs
    nfact2=fctrl2(n);
    
    //Display Inputs/Outputs
    cout<<"Recursion        "<<n<<"! = "<<nfact2<<endl;
    
    //The Process -> Map Inputs to Outputs
    ffact3=sumLog(n);
    
    //Display Inputs/Outputs
    cout<<"Exp(Sum-Log)     "<<n<<"! = "<<exp(ffact3)<<endl;
    
    //The Process -> Map Inputs to Outputs
    nfact3=ffact3;
    ffact3-=nfact3;
    
    //Display Inputs/Outputs
    cout<<"Exp(Sum-Log)     "<<n<<"! = "<<exp(ffact3)<<" x e^("<<nfact3<<")"<<endl;

    //The Process -> Map Inputs to Outputs
    ffact4=smLog10(n);
    nfact4=ffact4;
    ffact4-=nfact4;
    
    //Display Inputs/Outputs
    cout<<"10^(Sum-Log10)   "<<n<<"! = "<<pow(10,ffact4)<<" x 10^("<<nfact4<<")"<<endl;

    //Exit the Program
    return 0;
}

float smLog10(int n){
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=log(i)/log(10);
    }
    return sum;
}

float sumLog(int n){
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=log(i);
    }
    return sum;
}

int fctrl2(int n){
    if(n<=1)return 1;
    return fctrl2(n-1)*n;
}

int fctrl1(int n){
    int factor=1;
    for(int i=1;i<=n;i++){
        factor*=i;
    }
    return factor;
}