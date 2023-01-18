/*
    Author: Dr. Mark E. Lehr
    Date:   April 20th, 2021  11:12am
    Purpose:  Craps
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cstdlib>     //Random number library
#include <ctime>       //Time Library
#include <iomanip>     //Format Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
float PERCENT=100.0f;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned char sum,die1,die2;
    unsigned int nGames;
    unsigned int wins,loses;
    
    //Initialize variables
    wins=loses=0;
    nGames=100000000;
    
    //Process, map inputs to outputs
    for(int game=1;game<=nGames;game++){
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        sum=die1+die2;//[2,12]
        switch(sum){
            case 7:case 11:wins++;break;
            case 2:case 3:case 12:loses++;break;
            default:{
                bool rollAgn=true;
                do{
                    die1=rand()%6+1;//[1,6]
                    die2=rand()%6+1;//[1,6]
                    char sumAgn=die1+die2;//[2,12]
                    if(sumAgn==7){
                        loses++;
                        rollAgn=false;
                    }else if(sumAgn==sum){
                        wins++;
                        rollAgn=false;
                    }
                }while(rollAgn);
            }
        }
    }
    
    //Display your initial conditions as well as outputs.
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Number of Games Played = "<<setw(10)<<nGames<<endl;
    cout<<"Number of Games Won    = "<<setw(10)<<wins<<endl;
    cout<<"Number of Games Lost   = "<<setw(10)<<loses<<endl;
    cout<<"Number of Games Played = "<<setw(10)<<wins+loses<<endl;
    cout<<"Percentage of Games Won    = "<<PERCENT*wins/nGames<<"%"<<endl;
    cout<<"Percentage of Games Lost   = "<<PERCENT*loses/nGames<<"%"<<endl;
    
    //Exit stage right
    return 0;
}