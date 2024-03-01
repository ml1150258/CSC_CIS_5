/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feb 22nd, 2024, 10:45 PM
 * Purpose:  Price of Circuit Board
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
unsigned char PERCENT=100;//Percentage

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float cbCost,//Circuit board cost in $'s
          cbPrft,//Circuit board profit
          cbPrc; //Board Price in $'s
    
    //Initialize all variables
    cbCost=1.495e1f;//$14.95 Cost -> 1.495x10^1
    cbPrft=3.5e-1f;//0.35 or 35% profit -> 3.5x10^-1
    
    //Process or Map solutions
    cbPrc=cbCost*(1+cbPrft);

    //Display the output
    cout<<"Cost of the Circuit Board  = $"<<cbCost<<endl;
    cout<<"Profit to be made          =  "<<cbPrft*PERCENT<<"%"<<endl;
    cout<<"Price of the Circuit Board = $"<<cbPrc<<endl;

    //Exit the Program
    return 0;
}