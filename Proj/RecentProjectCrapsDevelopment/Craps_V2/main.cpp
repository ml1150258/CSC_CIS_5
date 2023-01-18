/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 26th, 2021, 10:40 AM
 * Purpose:  Version -> Determining some stats, Number of Rolls, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random function
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
char rol2Die(int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int wins,losses,nRolls;
    char nSides;
    
    //Initialize Variables
    wins=losses=0;
    nSides=6;
    nRolls=0;
    
    //Map Inputs to Outputs -> Process
    char sum=rol2Die(nSides);
    nRolls++;
    if(sum==7||sum==11){
        wins++;
    }else if(sum==2||sum==3||sum==12){
        losses++;
    }else{
        bool kpRolng;
        do{
            kpRolng = true;
            char sum1=rol2Die(nSides);
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
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

char rol2Die(int n){
    return rand()%n+rand()%n+2;
}