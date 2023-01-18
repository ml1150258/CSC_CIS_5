/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on February 22nd, 2022, 12:06 AM
 * Purpose:  Free Fall
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const float GRAVITY=32.174;//Acceleration due to Gravity Units = ft/sec^2

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    float timFall,//Time in free fall (secs)
          disFall;//Distance in free fall (feet)
    
    //Initial Variables
    cout<<"This program calculates the distance drop in Free Fall"<<endl;
    cout<<"Assumes no drag!"<<endl;
    cout<<"Input the time in seconds"<<endl;
    cin>>timFall;
    
    //Map the Inputs to the Outputs
    disFall=GRAVITY*timFall*timFall/2;
    int idsFall=(disFall+0.005f)*100;//Shift left 2 Places
    disFall=idsFall/100.0f;//Shift back right 2 Places
    
    //Display the Inputs and Outputs
    cout<<"The distance fallen in "
            <<timFall<<" secs = "<<disFall<<" feet"<<endl;

    //Exit the code
    return 0;
}

