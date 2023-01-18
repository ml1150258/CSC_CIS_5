/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11, 2022, 11:20 AM
 * Purpose:  Paycheck
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

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int payRate,  //Rate of pay in $'s/hr
        hrsWrkd;  //Hours worked
    float payChck;//Paycheck in $'s
    
    //Initialize Variables
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map the inputs/known to the outputs
    payChck = hrsWrkd<40?                         //Boolean Test
              hrsWrkd*payRate:                    //If Test is true do this
              40*payRate+(hrsWrkd-40)*2*payRate;  //If Test is false do this
            
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<payChck;

    //Exit the program
    return 0;
}