/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 30th, 2022, 10:15 AM
 * Purpose:  Grade Ternary Operator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int score;//Score 50-100
    char grade,//Pass/Fail
         pfScr;//Pass Fail Score
    
    //Initialize Variables
    pfScr=70;
    score=rand()%51+50;//[50-100]
    
    //Map inputs to outputs -> The Process
    //grade=score>=90?'A':score>=80?'B':score>=70?'C':score>=60?'D':'F';
    if(score>=90)     grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D';
    else              grade='F';
            
    //Display Results
    cout<<score<<" = "<<grade<<endl;

    //Exit stage right
    return 0;
}