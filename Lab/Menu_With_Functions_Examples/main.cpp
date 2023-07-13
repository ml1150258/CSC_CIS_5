/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 6th, 2023, 10:16 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>
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
        cout<<"1 -> Question 1"<<endl;
        cout<<"2 -> Question 2"<<endl;
        cout<<"3 -> Question 3"<<endl;
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
    cout<<endl<<"Question 1 Here"<<endl<<endl;
}

void prob2(){
    cout<<endl<<"Question 2 Here"<<endl<<endl;
}

void prob3(){
    cout<<endl<<"Question 3 Here"<<endl<<endl;
}