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
    if(n<=1){
        cout<<n<<" is not prime"<<endl;
        exit(0);
    }
    if(n==2){
        cout<<n<<" is prime"<<endl;
        exit(0);
    }
    int nsqrt=sqrt(n)+1;
    bool notPrime=false;
    for(int i=2;i<=nsqrt&&!notPrime;i++){
        if(n%i==0){
            notPrime=true;
            cout<<n<<" is not prime"<<endl;
        }
    }
    if(!notPrime)cout<<n<<" is Prime"<<endl;
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}