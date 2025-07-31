/*
     Author: Dr. Mark E. Lehr
     Date:   June 23rd, 2025
     Purpose:  Savings
*/

//System Libraries
#include <iostream>  //Input/Output
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    float prin,intRate,savings;
    int nCmpPds;

    //Initialize Variables
    prin=100;//$100
    intRate=0.06;//6%
    nCmpPds=24;//24 years

    //Process - Map the inputs to outputs
    savings=prin*pow(1+intRate,nCmpPds);

    //Display the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"savings($"<<prin<<","<<intRate<<","
        <<nCmpPds<<" years) = $"<<savings<<endl;

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}