/* 
00000000011111111112222222222333333333344444444445555555555666666666677777777778
12345678901234567890123456789012345678901234567890123456789012345678901234567890
 * File:   main.cpp
 * Author: mlehr
 * Created on January 5, 2023, 10:46 AM
 * Purpose:  Free Fall Calculation
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Utilizes random numbers
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
float GRAVITY=3.2174e1f;//Gravity 32.174 ft/sec^2

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float drop, //Distance the object falls feet
           tim; //Time in seconds
            
    
    //Initialize Variables
    tim=rand()%10+1;//Time from 1 to 10 seconds
    
    //Map/Process the Inputs -> Outputs
    //drop=1/2*GRAVITY*tim*tim;  //Incorrect integer division
    //drop=1.0f/2*GRAVITY*tim*tim;
    //drop=1/2.0f*GRAVITY*tim*tim;
    //drop=GRAVITY*tim*tim/2;
    //drop=GRAVITY*pow(tim,2)/2;    //Very expensive function for simple square
    //drop=GRAVITY*exp(2*log(tim))/2;//Very expensive function for simple square
    drop=GRAVITY*tim*tim/2;
    
    //Display Inputs/Outputs
    cout<<"This program calculates distance in free fall"<<endl;
    cout<<"The time of drop = "<<tim<<" seconds"<<endl;
    cout<<"The distance dropped = "<<drop<<" feet"<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}