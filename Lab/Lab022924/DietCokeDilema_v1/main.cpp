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

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float mm,//Mass of Mouse
          md,//Mass of the Dieter when finished dieting
         mkm,//Mass of sweetener to kill mouse
         mkd,//Mass to kill dieter
         cnc,//Concentration of sweetener in 1 can of coke
          mc;//Mass of coke contents
    int nCans;//Number of cans
    
    //Initialize all variables
    mm=35;//Grams
    mkm=5;//Grams
    md=90000;//Grams
    cnc=.001;
    mc=350;//Grams
    
    //Process or Map solutions
    mkd=md*mkm/mm;

    //Display the output
    cout<<"Mass to kill Dieter = "<<mkd<<" grams"<<endl;

    //Exit the Program
    return 0;
}