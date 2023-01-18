/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 7th, 2022, 11:44 AM
 * Purpose:  Craps, Win, Lose or Roll again
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
    unsigned int win,lose,rollAgn;
    unsigned int nGames;
    
    //Initial Variables
    win=lose=rollAgn=0;
    nGames=1000;
    
    //Map the Inputs to the Outputs
    for(int game=1;game<=nGames;game++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        //Record results
        if(sum==7||sum==11)win++;
        else if(sum==2||sum==3||sum==12)lose++;
        else rollAgn++;
    }
    
    //Display the Inputs and Outputs
    cout<<"The total number of games = "<<nGames<<endl;
    cout<<"The total number of games = "<<win+lose+rollAgn<<endl;
    cout<<"Your wins  = "<<win<<endl;
    cout<<"Your loses = "<<lose<<endl;
    cout<<"Roll again = "<<rollAgn<<endl;

    //Exit the code
    return 0;
}

