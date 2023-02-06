/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on Feb 24th, 2022, 10:10 AM
 * Purpose:  Land Calculation
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const float ACRFT2=43560;//Conversion from Acres to Ft^2
const float FTMILE=5280;//Number of feet to a mile

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    float ft2,     //Area in ft2
          nAcres,  //Number of Acres
          nSqMls,  //Number of Square Miles
          perMls;  //Perimeter in miles
    
    //Initial Variables
    cout<<"This program performs land calculations"<<endl;
    cout<<"Input the square footage to convert"<<endl;
    cin>>ft2;
    
    //Map the Inputs to the Outputs
    nAcres=ft2/ACRFT2;
    nSqMls=ft2/FTMILE/FTMILE;
    perMls=4*sqrt(nSqMls);
    
    //Display the Inputs and Outputs
    cout<<"The square footage     = "<<ft2<<" ft^2"<<endl;
    cout<<"The number of acres    = "<<nAcres<<" acres"<<endl;
    cout<<"The number of miles^2  = "<<nSqMls<<" miles^2"<<endl;
    cout<<"The perimeter in miles = "<<perMls<<" miles"<<endl;

    //Exit the code
    return 0;
}

