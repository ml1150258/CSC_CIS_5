/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 1st, 2025, 1:30 PM
 * Purpose:  Paycheck with 40 hours for Double Time
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
    float payRate,//Payrate in $'s/hr
          hrsWrkd, //Number of hours worked
          dblTime,//Double Time - hour where double time occurs
          payChk; //Gross Pay
    
    //Initialize variables here
    dblTime=40;//40 hours
    cout<<"This program calculates your paycheck in $'s"<<endl;
    cout<<"Input your pay rate $'s/hr and number of hours worked"<<endl;
    cin>>payRate>>hrsWrkd;

    //Map inputs to outputs here, i.e. the process
    payChk =  payRate*hrsWrkd;//Straight Time
    payChk += hrsWrkd>dblTime?//Check the Hours
              payRate*(hrsWrkd-dblTime):0;//Double Time
    
    //Display the results
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Hours Worked = "<<hrsWrkd<<" hours"<<endl;
    cout<<"Pay Check = $"<<payChk<<endl;

    return 0;
}