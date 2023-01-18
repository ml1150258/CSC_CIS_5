/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  Lab 1 Optimize Fuel Purchase
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Libary
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char CNVPERC=100;//Conversion to Percentage

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float gGage,  //Gas Gage percentage full
        tnkSize,  //Size of tank in gallons
            mpg;  //Miles per Gallon
    float galReq; //Gallons Required at fill-up
    
    //Initialize Variables
    gGage=0.75f;//75% full
    tnkSize=2.2e1f;//22.0 -> Number of gallons
    mpg=0.17e2f;   //17.0 -> Gas mileage
    
    //Map the inputs/known to the outputs
    galReq=tnkSize*(1-gGage);
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Knowns for Your Particular Vehicle"<<endl<<endl;
    cout<<setw(10)<<gGage*CNVPERC<<"%  = Gas Gage % Full"<<endl;
    cout<<setw(7)<<static_cast<int>(tnkSize)<<"      = Size of Tank in Gallons"<<endl;
    cout<<setw(7)<<static_cast<int>(mpg)<<"      = Gas Mileage mpg"<<endl;
    cout<<setw(9)<<setprecision(1)<<galReq<<"    = Gallons Required to fill up"<<endl;

    //Declare Part 2 Variables
    float g1PPG,  //Gas Station 1 $'s/Gallon
        milesG1,  //Miles to Gas Station 1
        cstfil1,  //Cost to fill up $'s
        totDis1,  //Total Distance driven
        cstDrv1,  //Cost to Drive to Station 1
        totCst1,  //Total Cost for Station 1
        ppgSt1;   //Effective price per gallon station 1
 
    //Calculate the cost of Gas Station 1		
    cout<<endl<<"Gas Station 1 inputs"<<endl;
    cout<<"Input Regular Price/Gallon and miles to Station 1"<<endl;
    cin>>g1PPG>>milesG1;
    cout<<endl;
    
    //Computation for Gas Station 1
    cstfil1=galReq*g1PPG;
    totDis1=2*milesG1;
    cstDrv1=totDis1/mpg*g1PPG;
    totCst1=cstfil1+cstDrv1;
    ppgSt1=totCst1/galReq;
    
    //Outputs for Gas Station 1
    cout<<setprecision(2);
    cout<<setw(6)<<"$"<<g1PPG<<"   = Regular Gas $/Gallon"<<endl;
    cout<<setw(7)<<static_cast<int>(milesG1)<<"      = Miles to Gas Station "<<endl;
    cout<<setw(5)<<"$"<<cstfil1<<"   = Cost to fill up"<<endl;
    cout<<setw(7)<<static_cast<int>(totDis1)<<"      = Total Distance driven in Miles back and forth to Gas Station"<<endl;
    cout<<setw(6)<<"$"<<cstDrv1<<"   = Cost to drive distance to and from gas station $"<<endl;
    cout<<setw(5)<<"$"<<totCst1<<"   = Total Cost $ with mileage to gas station"<<endl;
    cout<<setw(6)<<"$"<<ppgSt1<<"   = $ Price per gallon when adding in mileage to station"<<endl;
    
    //Exit the program
    return 0;
}