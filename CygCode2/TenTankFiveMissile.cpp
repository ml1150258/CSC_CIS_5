/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 12th, 2025, 11:19 AM
 * Purpose:  Simulate 10 Tanks, 5 Missiles
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Rand Function
#include <ctime>      //Time Function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    const int SIZE=10;
    int tank[SIZE]={};//Initializing the tank array to 0
    int nSims=100000;//Number of Simulations
    int cnt5hits=0;//Number of times we got 5 hits
    int nMissile=5;//Number of missiles is 5
    
    //Initialize variables here
    
    //Map inputs to outputs here, i.e. the process
    for(int sim=1;sim<=nSims;sim++){
        //Zero out the tank array each time
        for(int i=0;i<SIZE;i++)tank[i]=0;
        for(int m=1;m<=nMissile;m++){
            int randIdx=rand()%10;
            tank[randIdx]=1;
        }
    //Sum how many hits
        int sHits=0;
        for(int idx=0;idx<SIZE;idx++){
            sHits+=tank[idx];
        }
        if(sHits==5)cnt5hits++;
    }
    
    //Display the results
    cout<<"For "<<nSims<<" we get "<<cnt5hits<<" of 5 hits which gives a Probability = "<<100.0f*cnt5hits/nSims<<"%"<<endl;

    return 0;
}