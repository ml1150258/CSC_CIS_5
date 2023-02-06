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
    switch(score/10){
        case 10:
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
    }
          
    //Display the Inputs and Outputs
    cout<<"Your score of "<<static_cast<int>(score)
        <<" = "<<grade<<endl;

    //Exit the code
    return 0;
}

