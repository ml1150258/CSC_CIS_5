/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on June 29, 2023, 10:22 AM
 * Purpose:  Grade
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time for seed
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score,//[0-100]
                  grade;//A,B,C,D,F
    
    //Initialize Variables
    score=rand()%51+50;//[50-100]
    
    //The Process -> Map Inputs to Outputs
    //grade = score >= 90 ? 'A': score >= 80 ? 'B': score >= 70 ? 'C': score >= 60 ? 'D':'F';
    grade = score >= 90 ? 'A':
            score >= 80 ? 'B':
            score >= 70 ? 'C':
            score >= 60 ? 'D':'F';
    
    //Display Inputs/Outputs
    cout<<"Score = "<<static_cast<int>(score)<<" gives a grade = "<<grade<<endl;

    //Exit the Program
    return 0;
}