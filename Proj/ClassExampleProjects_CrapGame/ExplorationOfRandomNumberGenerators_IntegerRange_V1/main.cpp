/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 7th, 2022, 10:35 AM
 * Purpose:  Random Number Generation Exploration
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
    int minRand,//Minimum Random Number Desired
        maxRand,//Maximum Random Number Desired
        randNum;//Random Number Achieved
    
    //Initial Variables
    minRand=10;
    maxRand=99;
    
    //Map the Inputs to the Outputs
    for(int test=0;test<100;test++){
        randNum=rand()%(maxRand-minRand+1)+minRand;
        cout<<randNum<<" ";
        if(test%10==9)cout<<endl;
    }

    //Display the Inputs and Outputs

    //Exit the code
    return 0;
}

