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
    switch(score){
        case 100:case 99:case 98:case 97:case 96:case 95:
        case 94:case 93:case 92:case 91:case 90: grade='A';break;
        case 89:case 88:case 87:case 86:case 85:
        case 84:case 83:case 82:case 81:case 80: grade='B';break;
        case 79:
        case 78:
        case 77:
        case 76:   
        case 75:
        case 74:
        case 73:
        case 72:   
        case 71:
        case 70: grade='C';break;
        case 69:
        case 68:
        case 67:
        case 66:   
        case 65:
        case 64:
        case 63:
        case 62:   
        case 61:
        case 60: grade='D';break;
        default: grade='F';
    }
    
            
    //Display Results
    cout<<score<<" = "<<grade<<endl;

    //Exit stage right
    return 0;
}