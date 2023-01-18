/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 25, 2021, 11:15 AM
 * Purpose:  Roll a simple 6 sided die
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Gererator
#include <ctime>     //Time to set the seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char mn,mx,die;
    unsigned int nLoop;
    
    //Initialize Variables
    mn=mx=rand()%6+1;
    nLoop=10000;
    
    //Map Inputs to Outputs -> Process
    for(int thrw=1;thrw<=nLoop;thrw++){
        die=rand()%6+1;//[1,6]
        cout<<"Throw = "<<thrw<<" Die Value = "<<static_cast<int>(die)<<endl;
        if(mn>die)mn=die;
        if(mx<die)mx=die;
    }
    
    //Display Inputs/Outputs
    cout<<"The Maximum Value Thrown = "<<static_cast<int>(mx)<<endl;
    cout<<"The Minimum Value Thrown = "<<static_cast<int>(mn)<<endl;
    
    
    //Exit the Program - Cleanup
    return 0;
}