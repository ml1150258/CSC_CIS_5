/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2019, 12:46 PM
 * Purpose:  Shoot out problem, step by step
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
void  maxMin(float,float &,float &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    float mx,mn;
    unsigned int nLoops;
    
    //Initialize or input i.e. set variable values
    nLoops=3000000000;
    mx=mn=pUnifrm();
    
    //Map inputs -> outputs
    for(int i=1;i<=nLoops;i++){
        maxMin(pUnifrm(),mx,mn);
    }
    
    //Display the outputs
    cout<<"Min = "<<mn<<" Max = "<<mx<<endl;

    //Exit stage right or left!
    return 0;
}

float pUnifrm(){
    return rand()/MAXRAND;
}

void  maxMin(float val,float &max,float &min){
    if(max<val)max=val;
    if(min>val)min=val;
}