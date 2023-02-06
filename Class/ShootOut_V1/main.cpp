/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 28, 2020, 1:10 PM
 * Purpose:  ShootOut
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Need the power function
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float rndProb();//Random Number Between [0,1]
bool  isLess(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    bool aAlive,bAlive,cAlive;
    float aProb,bProb,cProb;
    
    //Initialize the values
    aAlive=bAlive=cAlive=true;
    aProb=1.0f/3.0f;
    bProb=1.0f/2.0f;
    cProb=1.0f;
    
    //Play the shoot out game
    do{
        if(aAlive){
            if(cAlive)cAlive=!isLess(aProb);
            else if(bAlive)bAlive=!isLess(aProb);
        }
        if(bAlive){
            if(cAlive)cAlive=!isLess(bProb);
            else if(aAlive)aAlive=!isLess(bProb);
        }
        if(cAlive){
            if(bAlive)bAlive=!isLess(cProb);
            else if(aAlive)aAlive=!isLess(cProb);
        }
    }while(aAlive+bAlive+cAlive>1);
    
    //Output the Winner
    cout<<"Aaron   is "<<(aAlive?"Alive":"Dead")<<endl;
    cout<<"Bob     is "<<(bAlive?"Alive":"Dead")<<endl;
    cout<<"Charlie is "<<(cAlive?"Alive":"Dead")<<endl;

    //Exit stage right!
    return 0;
}

bool  isLess(float prob){
    if(prob>=rndProb())return true;
    return false;
}

float rndProb(){
    return 1.0f*rand()/(pow(2,31)-1);
}