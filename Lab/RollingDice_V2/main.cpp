/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 27, 2022, 10:50 AM
 * Purpose:  Rolling Dice
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Rand function
#include <ctime>     //Time to set random function seed
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
unsigned char rollDie(int,int);//Any number of sides and any number of dice

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nGames=36000000;
    int s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;
    
    //Initialize Variables
    s2=s3=s4=s5=s6=s7=s8=s9=s10=s11=s12=0;
    
    //Map the inputs/known to the outputs
    for(int game=1;game<=nGames;game++){
        unsigned char toss=rollDie(2,6);
        switch(toss){
            case 2:s2++;break;
            case 3:s3++;break;
            case 4:s4++;break;
            case 5:s5++;break;
            case 6:s6++;break;
            case 7:s7++;break;
            case 8:s8++;break;
            case 9:s9++;break;
            case 10:s10++;break;
            case 11:s11++;break;
            case 12:s12++;break;
        }
    }
    cout<<"Sum  2="<<s2<<endl;
    cout<<"Sum  3="<<s3<<endl;
    cout<<"Sum  4="<<s4<<endl;
    cout<<"Sum  5="<<s5<<endl;
    cout<<"Sum  6="<<s6<<endl;
    cout<<"Sum  7="<<s7<<endl;
    cout<<"Sum  8="<<s8<<endl;
    cout<<"Sum  9="<<s9<<endl;
    cout<<"Sum 10="<<s10<<endl;
    cout<<"Sum 11="<<s11<<endl;
    cout<<"Sum 12="<<s12<<endl;
    cout<<"Sum All = "<<s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12<<endl;
    cout<<"Number of Games = "<<nGames<<endl;
    
    //Display the outputs

    //Exit the program
    return 0;
}

unsigned char rollDie(int nDice,int nSides){
    unsigned char sum=0;
    for(int dice=1;dice<=nDice;dice++){
        sum+=rand()%nSides+1;
    }
    return sum;
}