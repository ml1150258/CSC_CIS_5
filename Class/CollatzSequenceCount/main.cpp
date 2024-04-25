/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 23rd, 2024, 12:20 PM
 * Purpose:  Collatz Sequence Count
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>//Math Library for Square Root Function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int colatz1(int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    int mxSeq=0;
    int nLoop=1000;
    for(int i=2;i<=nLoop;i++){
        int seq=colatz1(i);
        if(mxSeq<seq)mxSeq=seq;
        cout<<i<<" gives a sequence length of "<<seq<<endl;
    }
    cout<<"Max Length = "<<mxSeq<<" with Range = 1 to "<<nLoop<<endl;
 
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

int colatz1(int n){
    int count=1;
    do{
        if(n%2==0)n/=2;//Divide by 2
        else{
            n*=3;//Multiple by 3
            n++; //Add 1
        }
        count++;//Increment the sequence count
    }while(n!=1);//Exit when reaching 1
    return count;
}