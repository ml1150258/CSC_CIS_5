/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 24, 2021, 10:30 AM
 * Purpose:  Finding the Average
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Library containing the Random Functions
#include <ctime>      //Time Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    unsigned short val1,val2,val3,val4,val5;//5 Random variables
    float average; //The resultant average
    char  nRndVal; //Number of random variables
    
    //Initialize variables here
    //Use rand() to generate 5 random numbers
    val1=rand()%90+10;//[10-99];
    val2=rand()%90+10;//[10-99];
    val3=rand()%90+10;//[10-99];
    val4=rand()%90+10;//[10-99];
    val5=rand()%90+10;//[10-99];
    nRndVal=5;
    
    //Map inputs to outputs here, i.e. the process
    average=static_cast<float>(val1+val2+val3+val4+val5)/nRndVal;
    
    //Display the results
    cout<<"Random Value 1 = "<<val1<<endl;
    cout<<"Random Value 2 = "<<val2<<endl;
    cout<<"Random Value 3 = "<<val3<<endl;
    cout<<"Random Value 4 = "<<val4<<endl;
    cout<<"Random Value 5 = "<<val5<<endl;
    cout<<"The average value = "<<average<<endl;

    return 0;
}