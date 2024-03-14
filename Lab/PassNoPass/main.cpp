/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Mar 5th, 2024, 10:16 AM
 * Purpose:  Pass/No Pass
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed for Score
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
    unsigned char score,//Score from Homework or Test
                  grade;//Grade associated with score
    
    //Initialize all variables
    score=rand()%51+50;
    
    //Process or Map solutions
    grade = score>=70? 'P': 'N';
    
    //Display the Results
    cout<<"P = Pass, N = No Pass"<<endl;
    cout<<"A score of "<<static_cast<int>(score)<<" is a "<<grade<<endl;
    
    //Exit the Program
    return 0;
}