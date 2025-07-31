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
    char face[]="A23456789TJQK";//Face Values of the Cards
    char suit[]="SDCH";         //All the suits in a deck
    fstream out;
    string fileName;
    string strCard="  ";
    
    //Initialize file parameters
    fileName="card.dat";
    out.open(fileName,ios::out);
    
    //Initialize Variables
    for(unsigned char card=0;card<NCARDS;card++){
        strCard[0]=face[card%13];
        strCard[1]=suit[card/13];
        out<<strCard<<endl;
        cout<<strCard<<endl;
    }
    
    //Exit stage right!
    out.close();
    return 0;
}