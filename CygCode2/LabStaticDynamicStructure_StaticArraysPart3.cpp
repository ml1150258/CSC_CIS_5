/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 21, 2021, 11:19 AM
 * Purpose:  Lab Assignment
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>    //Format Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries
struct Array{
    int size;
    int *data;
};

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int size=10;
    Array x,x2,x3;
    x.size=x2.size=x3.size=size;
    x.data=new int[size],x2.data=new int[size],x3.data=new int[size];
    
    //Initialize variables here
    
    //Map inputs to outputs here, i.e. the process
    for(int i=0;i<size;i++){
        x.data[i]=i+1;
        x2.data[i]=x.data[i]*x.data[i];
        x3.data[i]=x2.data[i]*x.data[i];
    }

    //Display the results
    cout<<"      Number     Square    Cube"<<endl;
    for(int i=0;i<size;i++){
        cout<<setw(10)<<x.data[i]
            <<setw(10)<<x2.data[i]
            <<setw(10)<<x3.data[i]<<endl;
    }

    //Deallocate memory 
    delete []x.data;
    delete []x2.data;
    delete []x3.data;

    return 0;
}