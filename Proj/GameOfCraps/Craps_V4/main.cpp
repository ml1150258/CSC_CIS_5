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
#include <fstream>     //Read and Write to a file
#include <cstring>     //String Objects
#include <cmath>       //Math Library
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
    fstream in,out;//Input and Output file streams
    const int SIZE=20;
    char fNamIn[SIZE]="input.dat";
    string        fNamOut="output.dat";
    unsigned char sum,die1,die2;
    unsigned int nGames,fGames;
    unsigned int wins,loses;
    unsigned int mxRolls,avgRols;
    float smSqrs;
 
    //Initialize variables
    in.open(fNamIn,ios::in);
    out.open(fNamOut,ios::out);
    wins=loses=0;
    nGames=100000;
    mxRolls=avgRols=0;
    smSqrs=0;
    
    //Read in data from the file
    while(in>>fGames);
    nGames=fGames>nGames?fGames:nGames;
    
    //Process, map inputs to outputs
    for(int game=1;game<=nGames;game++){
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        sum=die1+die2;//[2,12]
        unsigned short nRolls=1;
        switch(sum){
            case 7:case 11:wins++;break;
            case 2:case 3:case 12:loses++;break;
            default:{
                bool rollAgn=true;
                do{
                    die1=rand()%6+1;//[1,6]
                    die2=rand()%6+1;//[1,6]
                    char sumAgn=die1+die2;//[2,12]
                    nRolls++;
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
        avgRols+=nRolls;
        smSqrs+=((nRolls-3.38)*(nRolls-3.38));
        if(mxRolls<nRolls)mxRolls=nRolls;
    }
    
    //Display your initial conditions as well as outputs.
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Number of Games Played = "<<setw(10)<<nGames<<endl;
    cout<<"Number of Games Won    = "<<setw(10)<<wins<<endl;
    cout<<"Number of Games Lost   = "<<setw(10)<<loses<<endl;
    cout<<"Number of Games Played = "<<setw(10)<<wins+loses<<endl;
    cout<<"Percentage of Games Won    = "<<PERCENT*wins/nGames<<"%"<<endl;
    cout<<"Percentage of Games Lost   = "<<PERCENT*loses/nGames<<"%"<<endl;
    cout<<"Maximum number of rolls/game = "<<mxRolls<<endl;
    cout<<"Average number of rolls/game = "<<static_cast<float>(avgRols)/nGames<<endl;
    cout<<"The standard deviation = "<<pow(smSqrs/(nGames-1),0.5);
    
    //Record to output file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Number of Games Played = "<<setw(10)<<nGames<<endl;
    out<<"Number of Games Won    = "<<setw(10)<<wins<<endl;
    out<<"Number of Games Lost   = "<<setw(10)<<loses<<endl;
    out<<"Number of Games Played = "<<setw(10)<<wins+loses<<endl;
    out<<"Percentage of Games Won    = "<<PERCENT*wins/nGames<<"%"<<endl;
    out<<"Percentage of Games Lost   = "<<PERCENT*loses/nGames<<"%"<<endl;
    out<<"Maximum number of rolls/game = "<<mxRolls<<endl;
    out<<"Average number of rolls/game = "<<1.0f*avgRols/nGames<<endl;
    out<<"The standard deviation = "<<pow(smSqrs/(nGames-1),0.5);
    
    //Exit stage right
    in.close();
    out.close();
    return 0;
}