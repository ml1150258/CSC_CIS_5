/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 26th, 2021, 10:40 AM
 * Purpose:  Version 4 -> Reading from files and Control Constructs
 *                  While loop and Ternary Operator
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random function
#include <ctime>     //Time Library
#include <fstream>   //File Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    fstream input;
    unsigned int wins,losses,nRolls,nGames,mxGames;
    char nSides;
    string fn="Game_Parameters.dat";
    
    //Initialize Variables
    input.open(fn,ios::in);
    wins=losses=0;
    nSides=6;
    nGames=2;
    mxGames=10;//Maximum number of Games
    while(input>>nGames){}
    nGames=nGames<mxGames?nGames:mxGames;
    
    //Map Inputs to Outputs -> Process
    for(int game=1;game<=nGames;game++){
        nRolls=0;
        char sum=rand()%nSides+rand()%nSides+2;
        nRolls++;
        switch(sum){
            case 11: case 7: wins++;break;
            case  2: case 3: case 12: losses++; break;
            default:
                bool kpRolng;
                do{
                    kpRolng = true;
                    char sum1=rand()%nSides+rand()%nSides+2;
                    nRolls++;
                    if(sum1==7){
                        losses++;
                        kpRolng=false;
                    }else if(sum1==sum){
                        wins++;
                        kpRolng=false;
                    }
                    cout<<"On Roll "<<nRolls<<" we threw a "
                            <<static_cast<int>(sum1)<<endl;
                }while(kpRolng);
        }
        cout<<"Sum of the Dice = "<<static_cast<int>(sum)<<endl;
        cout<<"Wins = "<<wins<<endl;
        cout<<"Loss = "<<losses<<endl;
        cout<<"Number Rolls it took to play the game = "<<nRolls<<endl;
        cout<<"Game = "<<game<<endl<<endl;
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    input.close();
    return 0;
}