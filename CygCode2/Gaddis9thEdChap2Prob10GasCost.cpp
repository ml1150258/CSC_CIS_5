/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 26th, 2025, 1:15 PM
 * Purpose:  Decisions, Decisions, Decisions,
 *           Which Gas Station to Fill up at
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    float  ggInd,  //Gas Gage Indicator
           gasTnk, //Gas Tank Size in Gallons
           mpg,    //Miles/Gallon
           stADist,//Station A Distance from Home Miles
           stBDist,//Station B Distance from Home
           prcStA, //Price of Gas at Station A
           prcStB, //Price of Gas at Station B
           galFill,//Gallons to Fill Tank
           cstA,   //Cost to Get to Station A
           cstFilA,//Cost to fill up at Station A
           totCstA,//Total Cost for Station A
           cstB,   //Cost to Get to Station A
           cstFilB,//Cost to fill up at Station A
           totCstB;//Total Cost for Station A

    //Initialize variables here
    ggInd=0.75f;    //75% Filled
    gasTnk=1.6e1f;  //16 gallons Gas Tank Size in Gallons
    mpg=2.4e1f;     //24 mpg
    stADist=8.0f;   //8 Miles
    prcStA=3.89f;   //$3.89 per gallon
    stBDist=0.5f;   //0.5 Miles
    prcStB=4.22f;   //$4.22 per gallon
    
    //Map inputs to outputs here, i.e. the process
    galFill=gasTnk*(1-ggInd);   //How many gallons to fill up
    
    cstA=2*(stADist/mpg)*prcStA;//Cost to go to Station A
    cstFilA=prcStA*galFill;     //Cost to fill up at Station A
    totCstA=cstA+cstFilA;       //Total Cost for Station A
    
    cstB=2*(stBDist/mpg)*prcStB;//Cost to go to Station B
    cstFilB=prcStB*galFill;     //Cost to fill up at Station B
    totCstB=cstB+cstFilB;       //Total Cost for Station B
    
    //Display the results
    cout<<"Gage Indicator % Full = "<<ggInd*100<<"%"<<endl;
    cout<<"Gas Tank Size in Gallons = "<<gasTnk<<" Gallons"<<endl;
    cout<<"Number of Gallons Required to Fill Car = "<<galFill<<" Gallons"<<endl;
    cout<<"Miles/Gallon = "<<mpg<<endl<<endl;

    cout<<"Distance to Station A = "<<stADist<<" Miles"<<endl;
    cout<<"Price of Gas at Station A = $"<<prcStA<<endl;
    cout<<"Cost to get to Station A = $"<<cstA<<endl;
    cout<<"Cost to Fill up at Station A = $"<<cstFilA<<endl;
    cout<<"Total Cost for Station A = $"<<totCstA<<endl<<endl; 

    cout<<"Distance to Station B = "<<stBDist<<" Miles"<<endl;
    cout<<"Price of Gas at Station B = $"<<prcStB<<endl;
    cout<<"Cost to get to Station B = $"<<cstB<<endl;
    cout<<"Cost to Fill up at Station B = $"<<cstFilB<<endl;
    cout<<"Total Cost for Station B = $"<<totCstB<<endl<<endl; 
    
    cout<<"The station to go to is Station "<<
        (totCstA<totCstB?"A":"B")<<endl;

    //Exit Stage Right
    return 0;
}