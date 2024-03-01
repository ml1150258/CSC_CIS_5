/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feb 29th, 2024, 1:04 PM
 * Purpose:  Diet Coke Dilema
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const float CNVLBGR=453.592;//Grams/Pound

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float mm,//Mass of Mouse
          wd,//Weight of Dieter lbs
          md,//Mass of the Dieter when finished dieting
         mkm,//Mass of sweetener to kill mouse
         mkd,//Mass to kill dieter
          ms,//Mass of sweetener in a can of coke
         cnc,//Concentration of sweetener in 1 can of coke
          mc;//Mass of coke contents
    int nCans;//Number of cans
    
    //Initialize all variables
    mm=35;//Grams
    mkm=5;//Grams
    wd=200;//lbs
    cnc=.001;
    mc=350;//Grams
    
    //Process or Map solutions
    md=wd*CNVLBGR;//Mass of the Dieter given weight and conversion
    mkd=md*mkm/mm;//Mass to kill dieter give mouse mass, dieter mass and mass to kill mouse
    ms=mc*cnc;//Mass of sweetener give concentration of sweetener in a can of coke
    nCans=mkd/ms;//Number of cans is what would kill dieter/mass of 1 can of sweetener in a coke

    //Display the output
    cout<<"Mass to kill Dieter = "<<mkd<<" grams"<<endl;
    cout<<"Mass of sweetener in 1 can of coke = "<<ms<<" grams"<<endl;
    cout<<"Number of cans of coke = "<<nCans<<endl;

    //Exit the Program
    return 0;
}