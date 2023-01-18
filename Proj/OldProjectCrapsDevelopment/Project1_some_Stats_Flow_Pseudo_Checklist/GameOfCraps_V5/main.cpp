/* 
 * Author: Dr. Mark E. Lehr
 * Purpose:  Project 1 - Simulate a Craps Game.
 *           Betting will be implemented in Project 2
 *           No Global Variables, No Doubles
 *           7 Character or less variable names
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O
#include <iomanip>   //Format the output
#include <string>    //Strings
#include <cmath>     //Math functions
using namespace std; //Name-space under which system libraries exist

//User Libraries - None

//Global Constants, NO Global variables!!!
//Conversions, Math, Physics constants only.
//Anything else will be graded as an F
const float PERCENT=100.0f;//Conversion to Percent
const   int HNDRDMIL=10e8; //Hundred Million
const   int MILLION =10e6; //Million
const   int HNDTHSND=10e5; //Hundred Thousand

//Function Prototypes - None

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare file and game variables
    ifstream in;               //Input File
    ofstream out;              //Output File
    int nGames,wins=0,losses=0;//Number of games, wins/losses
    int mxThrw=0,numThrw=0,lmGames=HNDRDMIL;//Game limiter and Throw statistics
    
    //Initialize variables
    string inName="GameInfo.dat";   //String Name
    char outName[]="GameStats.dat"; //Character Array Name
    in.open(inName.c_str());        //Open the Input file
    out.open(outName);              //Open the Output file
    while(in>>nGames);//Last value in file becomes the number of games
    nGames=nGames>lmGames?lmGames:nGames;//Limit games if to high
    
    //Play the game the prescribed number of times.
    int beg=time(0);//Time the game play
    for(int game=1;game<=nGames;game++){
        //Throw dice and sum, keep track of number of throws in a game
        int gmThrw=1;
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
                    gmThrw++;//Increment the number of throws
                    if(sum2==7){
                        losses++;
                        thrwAgn=false;
                    }else if(sum1==sum2){
                        wins++;
                        thrwAgn=false;
                    }//end of dependent if-else
                }while(thrwAgn);//end of do-while
            }
        }//end of switch
        //Keep track of total throws and max throws
        numThrw+=gmThrw;
        if(mxThrw<gmThrw)mxThrw=gmThrw;//Independent if
    }//end of for-loop
    int end=time(0);//End time of Game play
    
    //Output the game statistics to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total time to play these Games in integer seconds = "<<end-beg<<endl;
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Number of games won   = "<<wins<<endl;
    cout<<"Number of games lost  = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins+losses<<endl;
    cout<<"Percentage wins       = "
            <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
    cout<<"Percentage losses     = "
            <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
    cout<<"Maximum number of throws in a game = "<<mxThrw<<endl;
    cout<<"Average throw per game="<<static_cast<float>(numThrw)/nGames<<endl;
    cout<<"Ratio of Longest to shortest game = 10^"<<log10(mxThrw)<<endl;
    
    //Output the game statistics to a file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Total time to play these Games in integer seconds = "<<end-beg<<endl;
    out<<"Total number of Games = "<<nGames<<endl;
    out<<"Number of games won   = "<<wins<<endl;
    out<<"Number of games lost  = "<<losses<<endl;
    out<<"Total wins and losses = "<<wins+losses<<endl;
    out<<"Percentage wins       = "
            <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
    out<<"Percentage losses     = "
            <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
    out<<"Maximum number of throws in a game = "<<mxThrw<<endl;
    out<<"Average throw per game="<<static_cast<float>(numThrw)/nGames<<endl;
    out<<"Ratio of Longest to shortest game = 10^"<<log10(mxThrw)<<endl;
    
    //Close Files and Exit stage right!
    in.close();
    out.close();
    return 0;
}