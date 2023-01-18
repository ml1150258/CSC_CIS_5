/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 7th, 2022, 10:45 AM
 * Purpose:  Random Number Generation a Random Number between 0 and 1
 *           think of this as a Probability
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Set the random number seed
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int maxRand;//Max Random from rand() function
    float    minR,//Minimum Random Number Desired
             maxR,//Maximum Random Number Desired
          randNum;//Random Number Achieved
    
    //Initial Variables
    maxRand=(1<<15)-1;//2^15-1 pow(2,15)-1
    minR=maxR=1.0f*rand()/maxRand;
    
    //Map the Inputs to the Outputs
    for(int test=0;test<50000000;test++){
        randNum=1.0f*rand()/maxRand;
        if(randNum>maxR)maxR=randNum;
        if(randNum<minR)minR=randNum;
    }

    //Display the Inputs and Outputs
    cout<<"The minimum random number encountered = "<<minR<<endl;
    cout<<"The maximum random number encountered = "<<maxR<<endl;

    //Exit the code
    return 0;
}