/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Number Function 
#include <ctime>     //Time Library
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
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int x;
    
    //Initialize Variables
    x=rand()%11-5;//[-5,5]
    
    //Map the inputs/known to the outputs
    if(x>0)
    {
        cout<<"x is > 0"<<endl;
        cout<<"x = "<<x<<endl;
    }
    else if(x<0)
    {
        cout<<"x is < 0"<<endl;
        cout<<"x = "<<x<<endl;
    }
    else
    {
        cout<<"x is equal to 0"<<endl;
        cout<<"x = "<<x<<endl;
    }
    
    
    //Display the outputs

    //Exit the program
    return 0;
}