/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 4th, 2024
 * Purpose:  Approximating PI by throwing Darts
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
//const float MAXRAND=pow(2,15)-1;//Max value using the minGW Compiler
const float MAXRAND=pow(2,31)-1;//Max value using the Cygwin Compiler

const float PI=4*atan(1);

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nDarts,  //Number of darts thrown
        inCrcle; //Number of darts in circle
    
    //Initialize Variables
    nDarts=100000;
    inCrcle=0;
    
    //Map/Process the Inputs -> Outputs
    for(unsigned int darts=1;darts<=nDarts;darts++){
        float x=rand()/MAXRAND;//[0,1]
        float y=rand()/MAXRAND;//[0,1]
        if(x*x+y*y<1)inCrcle++;
    }
    
    //Display Inputs/Outputs
    cout<<"For a "<<nDarts<<" darts"<<endl;
    cout<<"Approximation to PI = "<<4.0f*inCrcle/nDarts<<endl;
    cout<<"Exact value of PI   = "<<PI<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}