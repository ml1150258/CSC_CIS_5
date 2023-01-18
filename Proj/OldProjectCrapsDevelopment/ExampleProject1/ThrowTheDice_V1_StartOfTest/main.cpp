/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 23, 2020, 10:07 AM
 * Purpose:  Take Stats On Summing 2 Die
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned char sum,die1,die2;
    
    //Initialize Variables
    sum=0;
    
    //Throw the dice
    die1=rand()%6+1;
    die2=rand()%6+2;
    sum=die1+die2;
    
    //Display Outputs
    cout<<static_cast<int>(sum)<<" = "
        <<static_cast<int>(die1)<<" + "
        <<static_cast<int>(die2)<<endl;

    //Exit stage right!
    return 0;
}