/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23, 2021, 10:19 AM
 * Purpose:  Calculating the Military and NASA Budgets
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const unsigned char PERCENT=100;//Percent conversion

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    float milBdgt,//US Military Budget in $'s
          nasaBdt,//NASA Budget in $'s
          fedBdgt,//US Federal Budget in $'s
           pcNasa,//Percentage of the Budget for NASA
            pcMil;//Percentage of the Budget 
    
    //Initialize variables here
    fedBdgt=4.79e12f;//$4.79 Trillion
    milBdgt=714e9f; //$714 Billion
    nasaBdt=22.6e9; //$22.6 Billion
    
    //Map inputs to outputs here, i.e. the process
    pcMil=milBdgt/fedBdgt*PERCENT;
    pcNasa=nasaBdt/fedBdgt*PERCENT;
    
    //Display the results
    cout<<"Federal  Budget  = $"<<fedBdgt<<endl;
    cout<<"Military Budget  = $"<<milBdgt<<endl;
    cout<<"NASA     Budget  = $"<<nasaBdt<<endl;
    cout<<"Military Percent =  "<<pcMil<<"%"<<endl;
    cout<<"NASA     Percent =  "<<pcNasa<<"%"<<endl;

    return 0;
}