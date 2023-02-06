/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2019, 12:46 PM
 * Purpose:  Shoot off simulation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
float pUnifrm();
bool  pKill(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    float aSkill,bSkill,cSkill;
    bool aLive,bLive,cLive;
    
    //Initialize or input i.e. set variable values
    aSkill=1.0f/3;//Aaron skill level 33.33%
    bSkill=1.0f/2;//Bob skill level 50%
    cSkill=1.0f;  //Charlie skill level = 100%
    aLive=bLive=cLive=true;
    
    //Aaron Shoots
    if(aLive){
        if(cLive)cLive=!pKill(aSkill);
        else if(bLive)bLive=!pKill(aSkill);
    }
    //Bob Shoots
    if(bLive){
        if(cLive)cLive=!pKill(bSkill);
        else if(aLive)aLive=!pKill(bSkill);
    }
    //Charlie Shoots
    if(cLive){
        if(bLive)bLive=!pKill(cSkill);
        else if(aLive)aLive=!pKill(cSkill);
    }
    
    
    //Display the outputs
    cout<<"Aaron   is "<<(aLive?"Alive":"Dead")<<endl;
    cout<<"Bob     is "<<(bLive?"Alive":"Dead")<<endl;
    cout<<"Charlie is "<<(cLive?"Alive":"Dead")<<endl;

    //Exit stage right or left!
    return 0;
}

bool  pKill(float prb){
    return pUnifrm()<=prb?true:false;
}

float pUnifrm(){
    return rand()/MAXRAND;
}