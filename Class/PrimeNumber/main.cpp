/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on May 1st, 2025 11:03 AM
 * Purpose:  1st Attempt at Prime Number
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Square Root Function
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
    int n;//Number to determine if prime
    bool isPrime;
    
    //Initialize Variables
    for(int n=-10;n<=100;n++){
    
        //Map/Process the Inputs -> Outputs
        isPrime=true;

        //Display Inputs/Outputs
        int absn=abs(n);
        int sqrN=sqrt(absn);
        if(absn>1){
            for(int i=2;i<=sqrN&&isPrime;i++){
                if(n%i==0)isPrime=false;
            }
        }else{
            isPrime=false;
        }

        //Display the result
        cout<<n<<(isPrime?" is Prime":" is not Prime")<<endl;
    }
    
    //Exit the Program
    return 0;
}