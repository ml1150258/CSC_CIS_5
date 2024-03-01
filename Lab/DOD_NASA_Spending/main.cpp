/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feb 22nd, 2024, 12:00 PM
 * Purpose:  Budget Percentages
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const float BILLION=1e9f;//1x10^9 Billion
const float TRILION=1e12f;//1x10^12 Trillion 
const float PERCENT=100.0f;//Percentage

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float fedBdgt,//Federal Budget in $'s
          dodBdgt,//DOD Budget in $'s
          nasaBgt,//NASA Budget in $'s
          milPerc,//Military Percentage
          nasaPrc;//NASA Percentage
    
    //Initialize all variables
    fedBdgt =   6.5 * TRILION;
    dodBdgt = 842   * BILLION;
    nasaBgt =  25   * BILLION;
    
    //Process or Map solutions
    milPerc = dodBdgt / fedBdgt * PERCENT;
    nasaPrc = nasaBgt / fedBdgt * PERCENT;

    //Display the output
    cout<<"Federal Budget =   "<<fedBdgt/TRILION<<" Trillion Dollars"<<endl;
    cout<<"DOD Budget     = "<<dodBdgt/BILLION<<"   Billion  Dollars"<<endl;
    cout<<"NASA Budget    =  "<<nasaBgt/BILLION<<"   Billion  Dollars"<<endl;
    cout<<"Military Budget Percentage = "<<milPerc<<"%"<<endl;
    cout<<"NASA Budget Percentage     = "<<nasaPrc<<"%"<<endl;
            

    //Exit the Program
    return 0;
}