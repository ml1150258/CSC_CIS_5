/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 4th, 2024
 * Purpose:  Determine min/max random number values
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
#include <cmath>     //Power Function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const unsigned int MAXRAND=pow(2,31)-1;

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int min,max,nLoops;
    
    //Initialize Variables
    nLoops=3000000000;
    min=max=rand();
    
    //Map/Process the Inputs -> Outputs
    for(unsigned int i=1;i<=nLoops;i++){
        int random=rand();
        if(min>random)min=random;
        if(max<random)max=random;
    }
    
    //Display Inputs/Outputs
    cout<<"For a "<<nLoops<<" loops"<<endl;
    cout<<"Min Random number = "<<min<<endl;
    cout<<"Max Random number = "<<max<<endl;
    cout<<"Calculated Max Random Number = "<<MAXRAND<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}