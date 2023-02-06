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
    if(score>=90&&score<=100){
        grade='A';
    }
    if(score>=80&&score<90){
        grade='B';
    }
    if(score>=70&&score<80){
        grade='C';
    }
    if(score>=60&&score<70){
        grade='D';
    }
    if(score<60){
        grade='F';
    }
            
    //Display Results
    cout<<score<<" = "<<grade<<endl;

    //Exit stage right
    return 0;
}