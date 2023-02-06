/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 8th, 2022, 11:49 AM
 * Purpose:  C++ Template
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score,//Score for a homework [50,100]
                  grade;//Typical Grade
    
    //Initial Variables
    score=rand()%51+50;//[50,100]
    
    //Map the Inputs to the Outputs
    if(score>=90)            grade='A';
    if(score>=80 && score<90)grade='B';
    if(score>=70 && score<80)grade='C';
    if(score>=60 && score<70)grade='D';
    if(score<60)             grade='F';
          
    //Display the Inputs and Outputs
    cout<<"Your score of "<<static_cast<int>(score)
        <<" = "<<grade<<endl;

    //Exit the code
    return 0;
}

