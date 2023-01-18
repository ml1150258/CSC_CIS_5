/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on February 22nd, 2022, 11:36 AM
 * Purpose:  Big C
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time to set random number seed
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<int>(time(0)));
    
    //Declare Variables
    char ltr;//Variable representing the letter to choose
    
    //Initial Variables
    cout<<"This Program creates a Banner C Character"<<endl;
    cout<<"Input the Letter you would like to use for the Banner"<<endl;
    cout<<"For example a-z or A-Z"<<endl<<endl;;
    cin>>ltr;
    
    //Map the Inputs to the Outputs
    
    //Display the Inputs and Outputs
    cout<<"  "<<ltr<<ltr<<ltr<<endl;
    cout<<" "<<ltr<<"  "<<ltr<<endl;
    cout<<ltr<<endl;
    cout<<ltr<<endl;
    cout<<ltr<<endl;
    cout<<ltr<<endl;
    cout<<ltr<<endl;
    cout<<" "<<ltr<<"  "<<ltr<<endl;
    cout<<"  "<<ltr<<ltr<<ltr<<endl;
    
    //Exit the code
    return 0;
}

