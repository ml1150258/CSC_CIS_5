/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  The game of craps
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Srand/Rand
#include <ctime>     //Time
#include <iomanip>   //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int nGames,wins,losses;
    
    //Initialize variables
    nGames=1000000,wins=0,losses=0;
    
    //Play Craps
    for(int game=1;game<=nGames;game++){
        //Throw a pair of die
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
        if(sum1==2||sum1==3||sum1==12)losses++;
        else if(sum1==7||sum1==11)wins++;
        else{
            bool stpGame=false;
            do{
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sum2=die1+die2;
                if(sum1==sum2){
                    wins++;
                    stpGame=true;
                }else if(sum2==7){
                    losses++;
                    stpGame=true;
                }
            }while(!stpGame);
        }
    }
    
    //Output the transformed data
    cout<<"Number of Games played = "<<nGames<<endl;
    cout<<"Number of Games played = "<<wins+losses<<endl;
    cout<<"Number of wins         = "<<wins<<endl;
    cout<<"Number of losses       = "<<losses<<endl;
    cout<<"Percentage wins        = "<<100.0f*wins/nGames<<"%"<<endl;
    cout<<"Percentage losses      = "<<100.0f*losses/nGames<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}