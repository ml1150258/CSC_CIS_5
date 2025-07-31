/*
     Author: Dr. Mark E. Lehr
     Date:   June 23rd, 2025
     Purpose:  Add 2 numbers
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
    short a,b,c;//Declare 3 2 byte variables

    //Initialize Variables
    a=9000;
    b=28000;

    //Process - Map the inputs to outputs
    c=a+b;

    //Display the results
    cout<<c<<" = "<<a<<" + "<<b<<endl;

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}