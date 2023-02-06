/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2021, 11:02 AM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int fact1,fact2,n;
    
    //Initialize variables here
    fact1=1;
    fact2=1;
    n=13;
    
    //Map inputs to outputs here, i.e. the process
    for(int i=1;i<=n-1;i++){
        fact2*=i;
    }
    for(int i=1;i<=n;i++){
        fact1*=i;
    }
    
    //Display the results
    cout<<n<<"! = "<<fact1<<endl;
    cout<<n-1<<"! = "<<fact2<<endl;
    cout<<n<<"! / "<<n-1<<"! = "<<n<<" = "<<fact1/fact2<<endl;

    return 0;
}