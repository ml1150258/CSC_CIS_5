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
#include <iomanip>
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
    unsigned char min,max;
    unsigned int nThrows, freq;
    
    //Loop for all frequencies
    cout<<"Throwing 2 Dice and Summing the Results"<<endl;
    cout<<"Stats -           Simulation    Exact"<<endl;
    for(char frq=2;frq<=12;frq++){

        //Initialize Variables
        sum=freq=0;
        nThrows=36000000;
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        //Make sure to set the min and max inside the
        //Range before examination
        min=max=sum;

        //Throw the dice, find the min and max
        for(int toss=1;toss<nThrows;toss++){
            die1=rand()%6+1;
            die2=rand()%6+1;
            sum=die1+die2;
            if(sum>max)max=sum;
            if(sum<min)min=sum;
            if(sum==frq)freq++;
        }

        //Display Outputs
        cout<<fixed<<setprecision(2);
        cout<<"The frequency of "
                <<setw(2)<<static_cast<int>(frq)<<" ~ "
                <<setw(5)<<100.0f*freq/nThrows<<"% = ";
        cout<<setw(5)<<
                (frq<=7?(frq-1.0):(13.0-frq))*100.0f/36<<"% = ";
        cout<<setprecision(0)<<
                (frq<=7?(frq-1.0):(13.0-frq))<<"/36"<<endl;
    }

    //Exit stage right!
    return 0;
}