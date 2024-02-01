/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29, 2024, 1:45 PM
 * Purpose:  Prime Investigation
 *
*/

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <cmath>     //Sqrt Function
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
bool isPrime(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    for(int i=2;i<=100;i++){
        bool prime=isPrime(i);
        cout<<"The number "<<i<<(prime?" is ":" is not ")<<"Prime"<<endl;
    }
    //Display the output

    //Exit the Program
    return 0;
}

bool isPrime(int p){
    bool isPrime=true;
    for(int i=2;i<=sqrt(p)&&isPrime;i++){
        if(p%i==0)isPrime=false;
    }
    return isPrime;
}