/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 28, 2020, 12:23 PM
 * Purpose:  Pull 5 Cards
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <fstream>   //File Library
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
    unsigned short vC1,vC2,vC3,vC4,vC5;
    unsigned char nCards;
    fstream input;
    string card1,card2,card3,card4,card5;
    string fileName;
    
    //Initialize file parameters
    fileName="card.dat";
    input.open(fileName.c_str(),ios::in);
    
    //Initialize Variables
    nCards=52;
    vC1=rand()%nCards+1;
    //Unique Value for first 2 cards
    do{
        vC2=rand()%nCards+1;
    }while(vC1==vC2);
    //Order the first 2
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 3
    do{
        vC3=rand()%nCards+1;
    }while(vC1==vC3||vC2==vC3);
    //Order the first 3
    if(vC2>vC3){
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 4
    do{
        vC4=rand()%nCards+1;
    }while(vC1==vC4||vC2==vC4||vC3==vC4);
    //Order the first 4
    if(vC3>vC4){
        unsigned short temp=vC3;
        vC3=vC4;
        vC4=temp;
    }
    if(vC2>vC3){
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 5
    do{
        vC5=rand()%nCards+1;
    }while(vC1==vC5||vC2==vC5||vC3==vC5||vC4==vC5);
    //Order the first 5
    if(vC4>vC5){
        unsigned short temp=vC4;
        vC4=vC5;
        vC5=temp;
    }
    if(vC3>vC4){
        unsigned short temp=vC3;
        vC3=vC4;
        vC4=temp;
    }
    if(vC2>vC3){
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    
    //Pull cards from the file
    string cardIn;
    for(int card=1;card<=nCards;card++){
        input>>cardIn;
        if(vC1==card)card1=cardIn;
        if(vC2==card)card2=cardIn;
        if(vC3==card)card3=cardIn;
        if(vC4==card)card4=cardIn;
        if(vC5==card)card5=cardIn;
    }
    
    //Display Outputs
    cout<<setw(3)<<vC1
        <<setw(3)<<vC2
        <<setw(3)<<vC3
        <<setw(3)<<vC4
        <<setw(3)<<vC5<<endl;
    cout<<setw(3)<<card1
        <<setw(3)<<card2
        <<setw(3)<<card3
        <<setw(3)<<card4
        <<setw(3)<<card5<<endl;

    //Exit stage right!
    input.close();
    return 0;
}