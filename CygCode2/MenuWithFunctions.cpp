/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 3rd, 1:40 PM
 * Purpose:  Menu Example
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
void menu();
void prob1();
void prob2();
void prob3();
void prob4();

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    char choose;
    
    //Initialize variables here
    do{
        menu();
        cin>>choose;
        
        //Map inputs to outputs here, i.e. the process
        switch(choose){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            default:cout<<"You choose to exit"<<endl;
        }
    }while(choose>='1'&&choose<='4');
    
    //Exit the Program

    return 0;
}

void prob4(){
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int score;
    char grade;
    
    //Initialize variables here
    score=rand()%51+50;//[50 to 100]
    
    //Map inputs to outputs here, i.e. the process
    grade = score>=90?'A':
            score>=80?'B':
            score>=70?'C':
            score>=60?'D':'F';

    //Display the results
    cout<<"A score of "<<score<<" gives a Grade of "<<grade<<endl;
}

void prob3(){
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int score;
    char grade;
    
    //Initialize variables here
    score=rand()%51+50;//[50 to 100]
    
    //Map inputs to outputs here, i.e. the process
    switch(score/10){
        case 10:
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
    }

    //Display the results
    cout<<"A score of "<<score<<" gives a Grade of "<<grade<<endl;
}

void prob2(){
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
}

void prob1(){
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));

    //Declare variables here
    int score;
    char grade;
    
    //Initialize variables here
    score=rand()%51+50;//[50 to 100]
    
    //Map inputs to outputs here, i.e. the process
    if(score>=90)            grade='A';
    if(score>=80 && score<90)grade='B';
    if(score>=70 && score<80)grade='C';
    if(score>=60 && score<70)grade='D';
    if(score<60)             grade='F';

    //Display the results
    cout<<"A score of "<<score<<" gives a Grade of "<<grade<<endl;
    
}

void menu(){
    cout<<"Type 1 for Grade Independent If"<<endl;
    cout<<"Type 2 for Grade with Dependent If"<<endl;
    cout<<"Type 3 for Grade with Switch Case"<<endl;
    cout<<"Type 4 for Grade with Ternary Operator"<<endl;
    cout<<"Type Anything Else to Exit"<<endl;
}