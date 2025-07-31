/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 4th, 2021, 10:55 AM
 * Purpose:  Generate Cards
 */

//System Libraries
#include <iostream>  //I/O Library
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
    
    //Declare Variable Data Types and Constants
    const int NCARDS=52;//Number of Cards
    string face[]={"Ace","2","3","4","5",
                    "6","7","8","9",
                    "Ten","Jack","Queen","King"};   //Face Values of the Cards
    string suit[]={"Spades","Diamonds",
                   "Clubs","Hearts"};//All the suits in a deck
    fstream out;
    string fileName;
    
    //Initialize file parameters
    fileName="card.dat";
    out.open(fileName,ios::out);
    
    //Initialize Variables
    cout<<right;
    for(unsigned char card=0;card<NCARDS;card++){
        string strCard;
        strCard=face[card%13];
        strCard+="_";
        strCard+=suit[card/13];
        out <<setw(14)<<strCard<<endl;
        cout<<setw(14)<<strCard<<endl;
    }
    
    //Exit stage right!
    out.close();
    return 0;
}