/*
     Author: Dr. Mark E. Lehr
     Date:   June 24th, 2025
     Purpose:  Gaddis 9th Ed Chap 2 Prob 20 Paint Coverage
*/

//System Libraries
#include <iostream>  //Input/Output
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    float pCanCov,//Paint Can Coverage ft^2/can
          width,  //Width of Fence in ft
          height, //Heigth of Fence in ft
          areaCov;//Area to Cover in ft^2
    unsigned short nCans;//Integer Number of Paint Cans Required

    //Initialize Variables
    pCanCov = 3.4e2f;//340 square feet/gallon
    width   = 1e2f;  //100 feet in width fence legth
    height  = 6e0f;  //6 feet is height of fence

    //Process - Map the inputs to outputs
    //Paint front and backside of fence twice
    areaCov = 2*2*width*height;
    nCans = areaCov/pCanCov+1;//Integer Truncation then Round up

    //Display the results
    cout<<"The Painter needs to order "<<nCans
        <<" cans of Paint!"<<endl;

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}