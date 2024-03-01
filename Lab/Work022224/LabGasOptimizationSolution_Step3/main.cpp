/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feb 20th, 2024, 12:06 PM
 * Purpose:  Lab Gas Optimization Solution
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const char PERCENT=100;//Percent Conversion
const float HLFPNY=0.005;//Half a penny in dollars

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    float mpg,//Miles per gallon for your vehicle
        ggage,//Gas Gage Reading in %
        gNdid,//Gas needed in Gallons
         disA,//Distance to gas station A
       ppGalA,//Price per gallon in $'s station A
      gasReqA,//Gas required to get to station A
      totGasA,//Total Gas needed for station A
      totCstA;//Total Cost needed for station A
    
    //Initialize all variables
    mpg=25;
    ggage=0.25;
    disA=1;
    ppGalA=4.19;
    
    //Process or Map solutions
    gNdid=mpg*(1-ggage);
    gasReqA=2*disA/mpg;//2* since roundtrip
    totGasA=gNdid+gasReqA;
    totCstA=totGasA*ppGalA;
    int itotCst=(totCstA+HLFPNY)*100;//Add 1/2 Penny shift 2 places Left
    totCstA=itotCst/100.0;//Shift back 2 places right

    //Display the output
    cout<<mpg<<"    = mpg miles/gallon"<<endl;
    cout<<ggage*PERCENT<<"%   = Gas Gage Reading"<<endl;
    cout<<gNdid<<" = Gas needed to fill the tank"<<endl;
    cout<<endl;
    cout<<disA<<" = Distance from home in miles"<<endl;
    cout<<"$"<<ppGalA<<" = Price per Gallon"<<endl;
    cout<<gasReqA<<" = Gas Reguired for station A"<<endl;
    cout<<totGasA<<" = Total Gas needed for station A"<<endl;
    cout<<"$"<<totCstA<<" = Total Cost"<<endl;
    //Exit the Program
    return 0;
}