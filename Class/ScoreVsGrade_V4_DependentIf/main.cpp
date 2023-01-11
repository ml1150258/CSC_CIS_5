/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 10th, 2023, 4:25 PM
 * Purpose:  Dependent If
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score;
    char grade;
    const char ASCR=90,BSCR=80,CSCR=70,DSCR=60;
    
    //Initialize Variables
    score=rand()%51+50;//[50-100]
    
    //Map/Process the Inputs -> Outputs
    if(score>=ASCR){
        grade='A';
    }else if(score>=BSCR){
        grade='B';
    }else if(score>=CSCR){
        grade='C';
    }else if(score>=DSCR){
        grade='D';
    }else{
        grade='F';
    }
    
    //Display Inputs/Outputs
    cout<<"The score of "<<static_cast<int>(score)
            <<" gives a grade = "<<grade<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}