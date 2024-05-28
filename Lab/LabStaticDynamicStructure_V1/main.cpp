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
    const int SIZE=11;
    int x[SIZE],sqrx[SIZE],cubex[SIZE];
    
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    for(int i=0;i<SIZE;i++){
        x[i]=i;
        sqrx[i]=x[i]*x[i];
        cubex[i]=sqrx[i]*x[i];
    }
    
    //Display Inputs/Outputs
    cout<<setw(10)<<"X"<<setw(10)<<"SQRX"<<setw(10)<<"CUBEX"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<setw(10)<<x[i]<<setw(10)<<sqrx[i]<<setw(10)<<cubex[i]<<endl;
    }
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}