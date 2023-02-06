/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23rd, 2022, 12:50 PM
 * Purpose:  MPG
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short mlsDrvn;//Miles Driving
    unsigned char  mpg,//Miles per Gallon
                nGalns;//Number of Gallons to fill tank
    
    //Initialize Variables
    mlsDrvn=375;//375 miles driving on a tank of gas
    nGalns=15;  //Number of Gallons to fill a car
    
    //Map inputs to outputs -> The Process
    mpg=mlsDrvn/nGalns;
    
    //Display Results
    cout<<static_cast<int>(mpg)<<" miles per gallon = "
        <<mlsDrvn<<" miles driving / "
        <<static_cast<int>(nGalns)<<" gallons used"<<endl;

    //Exit stage right
    return 0;
}