/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 23, 2020, 11:07 AM
 * Purpose:  Craps
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
    char die1,die2,sum;
    unsigned int win,lose,nThrGm,nGames;
    
    //Initialize Variables
    win=lose=nThrGm=0;
    nGames=1000000;
    
    //Process or map Inputs to Outputs
    for(unsigned int game=1;game<=nGames;game++){
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        nThrGm++;
        if(sum==7||sum==11)win++;
        else if(sum==2||sum==3||sum==12)lose++;
        else{
            bool rollAgn;
            do{
                die1=rand()%6+1;
                die2=rand()%6+1;
                char sum2=die1+die2;
                nThrGm++;
                if(sum2==sum){
                    win++;
                    rollAgn=false;
                }else if(sum2==7){
                    lose++;
                    rollAgn=false;
                }else rollAgn=true;
            }while(rollAgn);
        }
    }
    
    //Display Outputs
    cout<<"Results of Playing Craps"<<endl;
    cout<<"Number of Games Played  = "<<nGames<<endl;
    cout<<"Number of Games Played  = "<<win+lose<<endl;
    cout<<"Total number of Wins    = "<<win<<endl;
    cout<<"Total number Lost       = "<<lose<<endl;
    cout<<"Number of Throws        = "<<nThrGm<<endl;
    cout<<"Percentage Won          = "<<100.0f*win/nGames<<"%"<<endl;
    cout<<"Percentage Lost         = "<<100.0f*lose/nGames<<"%"<<endl;
    cout<<"Average Throws per Game = "<<1.0f*nThrGm/nGames<<endl;
    
    //Exit stage right!
    return 0;
}