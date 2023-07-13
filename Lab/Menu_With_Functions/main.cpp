/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 6th, 2023, 10:16 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time for seed
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes
void prob1();
void prob2();
void prob3();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option,//Option to choose from menu
                  nOpshun;//Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpshun='3';//In this case we have 3 options
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"1 -> Dependent if Grade"<<endl;
        cout<<"2 -> Independent if Grade"<<endl;
        cout<<"3 -> Switch Case Grade"<<endl;
        cout<<"etc....."<<endl;
        cin>>option;//Read in the option
        //Use a switch case to implement
        switch(option){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
             default:cout<<endl<<"Exit Program"<<endl<<endl;
        }
    }while(option<=nOpshun);
    
    //Exit the Program
    return 0;
}

void prob1(){
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score,//[0-100]
                  grade;//A,B,C,D,F
    
    //Initialize Variables
    score=rand()%51+50;//[50-100]
    
    //The Process -> Map Inputs to Outputs
    if(score >= 90)      grade='A';
    else if(score >= 80) grade='B';
    else if(score >= 70) grade='C';
    else if(score >= 60) grade='D';
    else                 grade='F';
    
    //Display Inputs/Outputs
    cout<<"Score = "<<static_cast<int>(score)<<" gives a grade = "<<grade<<endl;
}

void prob2(){
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score,//[0-100]
                  grade;//A,B,C,D,F
    
    //Initialize Variables
    score=rand()%51+50;//[50-100]
    
    //The Process -> Map Inputs to Outputs
    if(score >= 90)               grade='A';
    if(score >= 80 && score < 90) grade='B';
    if(score >= 70 && score < 80) grade='C';
    if(score >= 60 && score < 70) grade='D';
    if(score <  60)               grade='F';
    
    //Display Inputs/Outputs
    cout<<"Score = "<<static_cast<int>(score)<<" gives a grade = "<<grade<<endl;
}

void prob3(){
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score,//[0-100]
                  grade;//A,B,C,D,F
    
    //Initialize Variables
    score=rand()%51+50;//[50-100]
    
    //The Process -> Map Inputs to Outputs
    switch(score/10){
        case 10:
        case  9: grade='A';break;
        case  8: grade='B';break;
        case  7: grade='C';break;
        case  6: grade='D';break;
        default: grade='F';
    }
    
    //Display Inputs/Outputs
    cout<<"Score = "<<static_cast<int>(score)<<" gives a grade = "<<grade<<endl;
}