/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 1st, 2025, 1:55 PM
 * Purpose:  Develop a Template to be copied
 *           for all future programs in CSC/CIS 5
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int sumPos,//Sum of the Positive numbers
        sumNeg,//Sum of the Negative numbers
        inpInt;//Number to inputs 10x's
    
    //Initialize variables here
    sumPos=sumNeg=0;
    cout<<"Input 10 Numbers"<<endl;
    
    //Map inputs to outputs here, i.e. the process
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    cin>>inpInt;
    inpInt>0 ? sumPos+=inpInt : sumNeg+=inpInt;
    
    //Display the results
    cout<<"Positive Sum = "<<sumPos<<endl;
    cout<<"Negative Sum = "<<sumNeg<<endl;
    cout<<"Total Sum    = "<<sumPos+sumNeg<<endl;

    return 0;
}