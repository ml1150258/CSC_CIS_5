/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on June 27, 2023, 10:16 AM
 * Purpose:  Dieter Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const float CNVGLB=453.592f;//Conversion from lbs to grams

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int nCans;//Number of permissible cans of diet code to drink
    float mm,//Mass of mouse grms
         mkm,//Mass of sweetner which will kill mouse grms
          wd,//Desired weight of dieter lbs
          mc,//Mass of Coke Can grms
         cnc;//Concentration of sweetner in coke %
    
    //Initialize Variables
    mm=3.5e1f;//35 grams
    mkm=5e0f; //5 grams
    wd=2e2f;  //200lbs
    mc=3.5e2f;//350 grams
    cnc=1e-3f;//1/10th of 1%
    
    //The Process -> Map Inputs to Outputs
    nCans=mkm*wd*CNVGLB/(mm*mc*cnc);
    
    //Display Inputs/Outputs
    cout<<"The permissible cans of coke to drink for a "<<wd
            <<" lb  dieter = "<<nCans<<" cans maximum"<<endl;

    //Exit the Program
    return 0;
}