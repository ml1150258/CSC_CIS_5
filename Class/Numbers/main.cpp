/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 18, 2022, 10:50 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float TRILION=1e12f;//Trillion Conversions
const float BILLION=1e9f;//Billion  Conversions
const float MILLION=1e6f;//Million  Conversions
const char  PERCENT=100;//Percent Conversions

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float milBdgt,  //Military Budget
          natBdgt,  //National Budget
          milPerc;  //Military Budget Percentage
    
    //Initialize Variables
    milBdgt=752.9*BILLION;
    natBdgt=6.82*TRILION;
    
    //Map the inputs/known to the outputs
    milPerc=milBdgt/natBdgt;
    
    //Display the outputs
    cout<<setprecision(3)<<showpoint;
    cout<<"National Budget = $"
            <<natBdgt/TRILION<<" Trillion"<<endl;
    cout<<"National Budget = $"
            <<natBdgt<<endl;
    cout<<setprecision(4);
    cout<<"Military Budget = $"
            <<milBdgt/BILLION<<" Billion"<<endl;
    cout<<"Military Budget = $"
            <<milBdgt<<endl;
    cout<<setprecision(3);
    cout<<"Miltary Percentage = "<<milPerc*PERCENT
            <<"%"<<endl;
    
    //Exit the program
    return 0;
}