/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on June 27, 2023, 10:16 AM
 * Purpose:  Positive/Negative Sums
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int negSum,//Negative Sum
        posSum,//Positive Sum
        totSum,//Total Sum
        inptInt;//Input 10 integers
    
    //Initialize Variables
    negSum = posSum = totSum = 0;
    
    //The Process -> Map Inputs to Outputs
    cout<<"Type in 5 Positive or Negative Integers"<<endl;
    cin>>inptInt;
         inptInt < 0 ?         //Boolean Test
         negSum  += inptInt:   //If test is true
         posSum  += inptInt;   //If test is false
         
    cin>>inptInt;
         inptInt < 0 ?         //Boolean Test
         negSum  += inptInt:   //If test is true
         posSum  += inptInt;   //If test is false

    cin>>inptInt;
         inptInt < 0 ?         //Boolean Test
         negSum  += inptInt:   //If test is true
         posSum  += inptInt;   //If test is false
         
    cin>>inptInt;
         inptInt < 0 ?         //Boolean Test
         negSum  += inptInt:   //If test is true
         posSum  += inptInt;   //If test is false
         
    cin>>inptInt;
         inptInt < 0 ?         //Boolean Test
         negSum  += inptInt:   //If test is true
         posSum  += inptInt;   //If test is false
         
    //Display Inputs/Outputs
    totSum = negSum + posSum;
    cout<<"Negative Sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive Sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total Sum    ="<<setw(4)<<totSum<<endl;

    //Exit the Program
    return 0;
}