/* 
   File:   main.cpp
   Author: Dr. Mark E. Lehr
   Created on June 5, 2025, 11:19 AM
   Purpose:  Savitch 10thEd Chap 1 Prob 4 Free Fall
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float GRAVITY=32.174f;//Gravity 32.174 ft/sec^2
const float CNVFTMT=3.28084f;//Conversion ft to meter

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    float time,   //Time in units of seconds
          dstceFt,//Distance dropped or free fall in feet
          dstceMt;//Distance dropped or free fall in meters
    
    //Initialize variables here
    cout<<"This problem calcualtes the free fall distance dropped"
        <<" in feet or meters.  Input the time in seconds for free fall."<<endl;
    cin>>time;
    
    //Map inputs to outputs here, i.e. the process
    //dstceFt=1/2*GRAVITY*time*time;  -> 0
    //dstceFt=GRAVITY*time*time/2; -> Leads to correct answer
    //dstceFt=1/2.0f*GRAVITY*time*time; -> Leads to correct answer
    dstceFt=1.0f/2*GRAVITY*time*time;//Leads correct answer
    dstceMt=dstceFt/CNVFTMT;
    
    //Display the results
    cout<<"Gravity = "<<GRAVITY<<" ft/sec"<<endl;
    cout<<"Conversion from Feet to Meters = "<<CNVFTMT<<endl;
    cout<<time<<" seconds produces "<<dstceFt<<" drop in feet or "
        <<dstceMt<<" drop in meters"<<endl;

    return 0;
}