/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on May 1st, 2025, 11:03 AM
 * Purpose:  Time clock
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int CNVMIN=60;//60 min in an hour
const int CNVHRS=24;//24 hours in a day

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int hrs,min,addTime;
    int totMin,resHrs,resMin;
    char ampm;
    
    //Initialize Variables
    ampm='P';
    hrs=10;//Hours
    min=45;//min
    addTime=720;//min
    
    //Map/Process the Inputs -> Outputs
    totMin= ampm=='P'? 
            (12+hrs)*CNVMIN+min+addTime
            :hrs*CNVMIN+min+addTime;
    
    totMin %= CNVHRS*CNVMIN;//Remaining Minutes in 24 hour clock
    resHrs  = totMin/CNVMIN;//Determine the Hour 0-23
    resMin  = totMin%CNVMIN;//Determine the minutes
    ampm    = totMin>=12*CNVMIN? 'P': 'A';
    
    //Display Inputs/Outputs
    cout<<(resHrs==0?12:resHrs>=13?resHrs-12:resHrs)<<":"
        <<(resMin<10?'0':'\0')<<resMin<<' '<<ampm<<'M'<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}