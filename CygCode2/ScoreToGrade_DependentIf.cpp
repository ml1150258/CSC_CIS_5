/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 2nd, 2025, 1:30 PM
 * Purpose:  Grade with Independent If
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Number Function
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
    int score;
    char grade;
    
    //Initialize variables here
    score=rand()%51+50;//[50 to 100]
    
    //Map inputs to outputs here, i.e. the process
    if(score>=90)     grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D';
    else              grade='F';

    //Display the results
    cout<<"A score of "<<score<<" gives a Grade of "<<grade<<endl;

    return 0;
}