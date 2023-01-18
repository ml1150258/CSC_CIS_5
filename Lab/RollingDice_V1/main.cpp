/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 27, 2022, 10:50 AM
 * Purpose:  Rolling Dice
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Rand function
#include <ctime>     //Time to set random function seed
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
unsigned char rollDie(int,int);//Any number of sides and any number of dice

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nGames=1000;
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    unsigned char min,max;
    min=max=rollDie(2,6);
    for(int game=1;game<=nGames;game++){
        unsigned char toss=rollDie(2,6);
        if(toss>max)max=toss;
        else if(toss<min)min=toss;
    }
    cout<<"Min = "<<static_cast<int>(min)<<endl;
    cout<<"Max = "<<static_cast<int>(max)<<endl;
    
    //Display the outputs

    //Exit the program
    return 0;
}

unsigned char rollDie(int nDice,int nSides){
    unsigned char sum=0;
    for(int dice=1;dice<=nDice;dice++){
        sum+=rand()%nSides+1;
    }
    return sum;
}