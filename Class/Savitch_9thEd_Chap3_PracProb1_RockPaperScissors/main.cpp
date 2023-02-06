/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 19, 2022, 10:40 AM
 * Purpose:  Rock-Paper-Scissors
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time to set the seed
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char ply1,ply2;//The 2 players playing RoShamBo
    
    //Initialize Variables
    do{
        ply1=rand()%4+80;//[P,Q,R,S]
    }while(ply1=='Q');
    do{
        ply2=rand()%4+80;//[P,Q,R,S]
    }while(ply2=='Q');
    
    //Map the inputs/known to the outputs
    if(ply1==ply2){
        cout<<"This is Tie!"<<endl;
    }else if(ply1=='R'){
        if(ply2=='S')cout<<ply1<<" beats "<<ply2<<endl;
        if(ply2=='P')cout<<ply2<<" beats "<<ply1<<endl;
    }else if(ply1=='P'){
        if(ply2=='R')cout<<ply1<<" beats "<<ply2<<endl;
        if(ply2=='S')cout<<ply2<<" beats "<<ply1<<endl;
    }else if(ply1=='S'){
        if(ply2=='P')cout<<ply1<<" beats "<<ply2<<endl;
        if(ply2=='R')cout<<ply2<<" beats "<<ply1<<endl;
    }
    
    //Display the outputs
    cout<<"Player 1 = "<<ply1<<endl;
    cout<<"Player 2 = "<<ply2<<endl;

    //Exit the program
    return 0;
}