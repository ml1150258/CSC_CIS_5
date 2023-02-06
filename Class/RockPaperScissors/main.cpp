/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 22nd, 2022, 10:40 AM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
#include <cstring>   //String Library
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
    char p1,p2;//The 2 players in the game
    string win;  //Winner
    
    //Initial Variables
    char play=rand()%3;
    p1=play==0?'R':
       play==1?'P':'S';
    play=rand()%3;
    p2=play==0?'R':
       play==1?'P':'S';
    
    //Map the Inputs to the Outputs
    if(p1==p2)win="Tie";
    else if(p1=='S'){
        if(p2=='R')win="Player 2";
        else win="Player 1";
    }
    else if(p1=='P'){
        if(p2=='S')win="Player 2";
        else win="Player 1";
    }
    else if(p1=='R'){
        if(p2=='P')win="Player 2";
        else win="Player 1";
    }
    
    
    //Display the Inputs and Outputs
    cout<<"Player 1 = "<<p1<<endl;
    cout<<"Player 2 = "<<p2<<endl;
    cout<<"Who Won? -> "<<win<<endl;

    //Exit the code
    return 0;
}

