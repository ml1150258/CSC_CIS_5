/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Simulate a Craps Game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;//Conversion to Percent

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ifstream in;
    int nGames,wins=0,losses=0;
    
    //Initialize variables
    in.open("GameInfo.dat");
    while(in>>nGames);//Last value becomes the number of games
    
    //Play the game
    for(int game=1;game<=nGames;game++){
        //Throw dice and sum
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
        //Determine wins and losses
        switch(sum1){
            case  7:
            case 11:wins++;break;
            case  2:
            case  3:
            case 12:losses++;break;
            default:{
                //Loop until a 7 or previous sum is thrown
                bool thrwAgn=true;
                do{
                    //Throw the dice again
                    char die1=rand()%6+1;//[1,6]
                    char die2=rand()%6+1;//[1,6]
                    char sum2=die1+die2;
                    if(sum2==7){
                        losses++;
                        thrwAgn=false;
                    }else if(sum1==sum2){
                        wins++;
                        thrwAgn=false;
                    }
                }while(thrwAgn);
            }
        }
    }
    
    //Output the transformed data
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Number of games won   = "<<wins<<endl;
    cout<<"Number of games lost  = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins+losses<<endl;
    cout<<"Percentage wins       = "
            <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
    cout<<"Percentage losses     = "
            <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
    
    //Exit stage right!
    in.close();
    return 0;
}