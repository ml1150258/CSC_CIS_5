/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feb 15th, 2024, 11:50 AM
 * Purpose:  Calculate number of cans of paint necessary
 *           to cover a fence twice, front and back
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    unsigned short pntCan,//Square footage covered with 1 can of paint
                  areaCov;//Area in square feet to paint
    unsigned char hgtFnce,//Height of fence
                  widFnce,//Width of fence
                    nCans;//Number of cans of paint
    
    //Initialize all variables
    hgtFnce=6;//6 feet
    widFnce=100;//100 feet
    pntCan=340;//1 gallon = 340ft^2
    
    //Process or Map solutions
    nCans=2*2*hgtFnce*widFnce/pntCan+1;

    //Display the output
    cout<<"Number of Cans of Paint required for \n"
        <<"covering fence front and back both sides painted twice = "
        <<static_cast<int>(nCans)<<endl;

    //Exit the Program
    return 0;
}