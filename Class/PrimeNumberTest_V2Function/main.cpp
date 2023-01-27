/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 26th, 2023, 10:20 AM
 * Purpose:  Prime Test
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //For the SQRT function
#include <cstdlib>   //Exit function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
bool isPrime(int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Determine if n is prime"<<endl;
    cout<<"Input an n value for this determination"<<endl;
    cin>>n;
    
    //Map/Process the Inputs -> Outputs
    for(int i=-10;i<=n;i++){
        string msg=isPrime(i)?" is Prime":" is not Prime";

        //Display Inputs/Outputs
        cout<<i<<msg<<endl;
    }
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

bool isPrime(int n){
    //Map/Process the Inputs -> Outputs
    if(n<=1)return false;
    int nsqrt=sqrt(n);
    for(int i=2;i<=nsqrt;i++){
        if(n%i==0)return false;
    }
    return true;
}