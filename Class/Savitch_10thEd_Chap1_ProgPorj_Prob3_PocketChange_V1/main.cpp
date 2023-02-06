/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on February 24th, 2022, 11:25 AM
 * Purpose:  Pocket Change
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstdlib>   //Random function
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const unsigned char HLFDOLR=50;//Conversion from Half Dollar to Pennies
const unsigned char QUARTER=25;//Conversion from Quarter to Pennies
const unsigned char DIME=10;   //Conversion from Dime to Pennies
const unsigned char NICKLE=5;  //Conversion from Nickle to Pennies

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short nHlfDls,//Number of Half Dollars
                     nQtrs,//Number of Quarters
                    nDimes,//Number of Dimes
                     nNkls,//Number of Nickels
                    nPenys,//Number of Pennies
                   pktChng;//Total Pocket Change
    
    //Initial Variables
    nHlfDls=rand()%10;//Range of Random Number[0,9]
    nQtrs=rand()%10;//Range of Random Number[0,9]
    nDimes=rand()%10;//Range of Random Number[0,9]
    nNkls=rand()%10;//Range of Random Number[0,9]
    nPenys=rand()%10;//Range of Random Number[0,9]
    
    //Map the Inputs to the Outputs
    pktChng = nHlfDls*HLFDOLR
            + nQtrs*QUARTER
            + nDimes*DIME
            + nNkls*NICKLE + nPenys;
    
    
    //Display the Inputs and Outputs
    cout<<"The number of Half Dollars = "<<nHlfDls<<endl;
    cout<<"The number of Quarters     = "<<nQtrs<<endl;
    cout<<"The number of Dimes        = "<<nDimes<<endl;
    cout<<"The number of Nickles      = "<<nNkls<<endl;
    cout<<"The number of Pennies      = "<<nPenys<<endl;
    cout<<"The total Pocket Change    = "
            <<pktChng<<" cents"<<endl;

    //Exit the code
    return 0;
}

