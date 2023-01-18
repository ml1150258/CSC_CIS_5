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
    unsigned int win,lose,nThrGm;
    
    //Initialize Variables
    win=lose=nThrGm=0;
    
    //Process or map Inputs to Outputs
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
    
    //Display Outputs
    cout<<"Initial Roll = "<<static_cast<int>(sum)<<endl;
    cout<<((win>0)?("We Won!!!!"):("We Lose :("))<<endl;
    cout<<"Number of Throws in this Game = "<<nThrGm<<endl;
    //Exit stage right!
    return 0;
}