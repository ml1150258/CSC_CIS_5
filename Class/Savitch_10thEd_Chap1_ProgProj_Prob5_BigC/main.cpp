/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 5, 2022, 11:20 AM
 * Purpose:  Savitch Big C or Banner C
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    char letter,z;//Variable to use which creates Big C
    
    //Initialize Variables
    letter='C';//Initialized to Character X
    
    //Map the inputs/known to the outputs
    z=letter;
    
    //Display the outputs
    cout<<"  "<<z<<z<<z<<endl;
    cout<<" "<<z<<"  "<<z<<endl;
    cout<<z<<endl;
    cout<<z<<endl;
    cout<<z<<endl;
    cout<<z<<endl;
    cout<<z<<endl;
    cout<<" "<<z<<"  "<<z<<endl;
    cout<<"  "<<z<<z<<z<<endl;

    //Exit the program
    return 0;
}