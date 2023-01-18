/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2022, 11:20 AM
 * Purpose:  Hmwk 1
 *           Calculating how much paint for a fence
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
    //Unsigned short range -32768 to 32767
    unsigned short length,  //Length of fence in feet
                   height,  //Height of fence in feet
                 covArea,   //1 Side area of fence in feet^2
                 cvPaint,   //2 Sides, 2xPaint for surface area
                 cvGlPnt,   //Surface Area covered by 1 can of Paint
                 nmGlPnt;   //Number of Gallons of paint
    
    //Initialize Variables
    length=100; //100 feet
    height=6;    //6 feet
    cvGlPnt=340;//340 square feet coverage per gallon of paint
    
    //Map the inputs/known to the outputs
    covArea=length*height;//Surface area in ft^2, one side
    cvPaint=4*covArea;//Due to Both sides painted twice
    nmGlPnt=cvPaint/cvGlPnt+1;//Number of Gallons of Paint
    
    //Display the outputs
    cout<<"This program calculates the number of gallons of paint given:"<<endl;
    cout<<"Fence Length                   = "<<length<<" feet"<<endl;
    cout<<"Fence Height                   = "<<height<<" feet"<<endl;
    cout<<"Area covered by 1 can of paint = "<<cvGlPnt<<" feet^2"<<endl;
    cout<<"Area to be painted             = "<<covArea<<" feet^2"<<endl;
    cout<<"Directions -> both sides painted twice"<<endl;
    cout<<"Surface Area to be painted     = "<<cvPaint<<" feet^2"<<endl;
    cout<<"The number of gallons of paint = "<<nmGlPnt<<endl;

    //Exit the program
    return 0;
}