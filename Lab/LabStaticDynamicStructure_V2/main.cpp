/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on May 23rd, 2024, 11:03 AM
 * Purpose:  Array Table
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    int size=11;
    int *x,*sqrx,*cubex;
    
    //Initialize Variables
    x=new int[size];
    sqrx=new int[size];
    cubex=new int[size];
    
    //Map/Process the Inputs -> Outputs
    for(int i=0;i<size;i++){
        x[i]=i;
        sqrx[i]=x[i]*x[i];
        cubex[i]=sqrx[i]*x[i];
    }
    
    //Display Inputs/Outputs
    cout<<setw(10)<<"X"<<setw(10)<<"SQRX"<<setw(10)<<"CUBEX"<<endl;
    for(int i=0;i<size;i++){
        cout<<setw(10)<<x[i]<<setw(10)<<sqrx[i]<<setw(10)<<cubex[i]<<endl;
    }
    
    //Clean up memory and files
    delete []x;
    delete []sqrx;
    delete []cubex;
    
    //Exit the Program
    return 0;
}