/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 28th, 2024, 11:03 AM
 * Purpose:  Rectangle
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char letter;
    int side;
    
    //Initialize Variables
    cout<<"Print the Size of a Rectangle with a Character"<<endl;
    cout<<"Input the rows/cols of Rectangle and Character Display"<<endl;
    cin>>side>>letter;
    
    //Map/Process the Inputs -> Outputs
    for(int row=1;row<=side;row++){
        for(int col=1;col<=side;col++){
            cout<<letter;
        }
        //if(row!=side)cout<<endl;
        cout<<endl;
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}