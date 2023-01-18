/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  Elementary Craps
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;//Frequency of the wins x -> fx
    int l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;//Frequency of the wins x -> fx
    int nGames;
    
    //Initialize Variables
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    nGames=1000000;
    
    //Process/Map inputs to outputs
    for(int game=1;game<=nGames;game++){
        char die1=rand()%6+1;//Range [0,6]
        char die2=rand()%6+1;//Range [0,6]
        char sum=die1+die2;
        if(sum==7)w7++;
        else if(sum==11)w11++;
        else if(sum==2)l2++;
        else if(sum==3)l3++;
        else if(sum==12)l12++;
        else{
            bool thrwAgn=true;
            do{
                char die1=rand()%6+1;//Range [0,6]
                char die2=rand()%6+1;//Range [0,6]
                char sum2=die1+die2;
                if(sum2==7){
                    switch(sum){
                        case 4:l4++;break;
                        case 5:l5++;break;
                        case 6:l6++;break;
                        case 8:l8++;break;
                        case 9:l9++;break;
                        case 10:l10++;break;
                    }
                    thrwAgn=false;
                }else if(sum==sum2){
                    switch(sum){
                        case 4:w4++;break;
                        case 5:w5++;break;
                        case 6:w6++;break;
                        case 8:w8++;break;
                        case 9:w9++;break;
                        case 10:w10++;break;
                    }
                    thrwAgn=false;
                }
            }while(thrwAgn);
        }
    }
    int nWins=w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12;
    int nLoss=l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12;
    
    //Output data
    cout<<"Wins and Losses playing the game of Craps"<<endl;
    cout<<"                 "<<" Wins "<<" Losses"<<endl;
    cout<<"Frequency of 2  = "<<setw(6)<<w2<<setw(6)<<l2<<endl;
    cout<<"Frequency of 3  = "<<setw(6)<<w3<<setw(6)<<l3<<endl;
    cout<<"Frequency of 4  = "<<setw(6)<<w4<<setw(6)<<l4<<endl;
    cout<<"Frequency of 5  = "<<setw(6)<<w5<<setw(6)<<l5<<endl;
    cout<<"Frequency of 6  = "<<setw(6)<<w6<<setw(6)<<l6<<endl;
    cout<<"Frequency of 7  = "<<setw(6)<<w7<<setw(6)<<l7<<endl;
    cout<<"Frequency of 8  = "<<setw(6)<<w8<<setw(6)<<l8<<endl;
    cout<<"Frequency of 9  = "<<setw(6)<<w9<<setw(6)<<l9<<endl;
    cout<<"Frequency of 10 = "<<setw(6)<<w10<<setw(6)<<l10<<endl;
    cout<<"Frequency of 11 = "<<setw(6)<<w11<<setw(6)<<l11<<endl;
    cout<<"Frequency of 12 = "<<setw(6)<<w12<<setw(6)<<l12<<endl;
    cout<<"Wins = "<<nWins<<endl;
    cout<<"Loss = "<<nLoss<<endl;
    cout<<"Total = "<<nWins+nLoss<<" = "<<nGames<<endl;
    
    //Exit stage right!
    return 0;
}