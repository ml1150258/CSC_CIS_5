/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 10th, 2023, 11:03 AM
 * Purpose:  Score vs. Grade
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Number Library
#include <cstring>   //String Library
#include <ctime>     //Time to set Random Number Seedusing namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char grade;
    unsigned char score;
    
    //Initialize Variables
    score=rand()%51+50;//50-100
    
    //Map/Process the Inputs -> Outputs
    grade=score>=90?'A':
          score>=80?'B':
          score>=70?'C':
          score>=60?'D':'F';
    
    //Display Inputs/Outputs
    std::cout<<"A score of "<<static_cast<int>(score)<<
          " gives a grade of "<<grade<<std::endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}