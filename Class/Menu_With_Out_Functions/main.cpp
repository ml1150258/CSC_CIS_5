/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 5th, 2022, 11:25 AM
 * Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Repeat the process
    do{
    
        //Initialize Variables
        cout<<"Which Problem would you like to run"<<endl;
        cout<<"Type 0 for Problem 1"<<endl;
        cout<<"Type 1 for Problem 2"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cin>>choice;

        //Map the Inputs to the Outputs
        switch(choice){
            case '0':cout<<"Homework Problem 1"<<endl;break;
            case '1':cout<<"Homework Problem 2"<<endl;break;
            case '2':cout<<"Homework Problem 3"<<endl;break;
            case '3':cout<<"Homework Problem 4"<<endl;break;
        }
    }while(choice>='0'&&choice<='3');

    //Exit the code
    return 0;
}