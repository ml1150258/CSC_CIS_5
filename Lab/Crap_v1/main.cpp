/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 27, 2022, 10:50 AM
 * Purpose:  Craps
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
    int nGames=10000000;
    int winTot,lossTot;
    int w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;
    int l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;
    
    //Initialize Variables
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    winTot=lossTot=0;
    
    //Map the inputs/known to the outputs
    for(int game=1;game<=nGames;game++){
        unsigned char toss=rollDie(2,6);
        if(toss==7){
            w7++;winTot++;
        }else if(toss==11){
            w11++;winTot++;
        }else if(toss==2){
            l2++;lossTot++;
        }else if(toss==3){
            l3++;lossTot++;
        }else if(toss==12){
            l12++;lossTot++;
        }else{
            bool loop;
            do{
                loop=true;
                unsigned char toss2=rollDie(2,6);
                if(toss2==7){
                    switch(toss){
                        case 2:l2++;break;
                        case 3:l3++;break;
                        case 4:l4++;break;
                        case 5:l5++;break;
                        case 6:l6++;break;
                        case 7:l7++;break;
                        case 8:l8++;break;
                        case 9:l9++;break;
                        case 10:l10++;break;
                        case 11:l11++;break;
                        case 12:l12++;break;
                    }
                    lossTot++;
                    loop=false;
                }else if(toss==toss2){
                    switch(toss){
                        case 2:w2++;break;
                        case 3:w3++;break;
                        case 4:w4++;break;
                        case 5:w5++;break;
                        case 6:w6++;break;
                        case 7:w7++;break;
                        case 8:w8++;break;
                        case 9:w9++;break;
                        case 10:w10++;break;
                        case 11:w11++;break;
                        case 12:w12++;break;
                    }
                    loop=false;
                    winTot++;
                }
            }while(loop);
        }
    }
    cout<<"Win  2="<<w2<<endl;
    cout<<"Win  3="<<w3<<endl;
    cout<<"Win  4="<<w4<<endl;
    cout<<"Win  5="<<w5<<endl;
    cout<<"Win  6="<<w6<<endl;
    cout<<"Win  7="<<w7<<endl;
    cout<<"Win  8="<<w8<<endl;
    cout<<"Win  9="<<w9<<endl;
    cout<<"Win 10="<<w10<<endl;
    cout<<"Win 11="<<w11<<endl;
    cout<<"Win 12="<<w12<<endl;
    cout<<"Win All = "<<w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12<<endl;
    cout<<"Total Wins = "<<winTot<<endl;
    cout<<"Loss  2="<<l2<<endl;
    cout<<"Loss  3="<<l3<<endl;
    cout<<"Loss  4="<<l4<<endl;
    cout<<"Loss  5="<<l5<<endl;
    cout<<"Loss  6="<<l6<<endl;
    cout<<"Loss  7="<<l7<<endl;
    cout<<"Loss  8="<<l8<<endl;
    cout<<"Loss  9="<<l9<<endl;
    cout<<"Loss 10="<<l10<<endl;
    cout<<"Loss 11="<<l11<<endl;
    cout<<"Loss 12="<<l12<<endl;
    cout<<"Lose All = "<<l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12<<endl;
    cout<<"Total Losses = "<<lossTot<<endl;
    cout<<"Total Games  = "<<winTot+lossTot<<endl;
    cout<<"Number of Games = "<<nGames<<endl;
    cout<<"Win  Percentage = "<<100.0f*winTot/nGames<<"%"<<endl;
    cout<<"Loss Percentage = "<<100.0f*lossTot/nGames<<"%"<<endl;
    
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