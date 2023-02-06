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

//Function Prototypes
float pUnifrm();
void  maxMin(int,int &,int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    int mx,mn;
    unsigned int nLoops;
    unsigned int limit;
    
    //Initialize or input i.e. set variable values
    nLoops=3000000000;
    mx=mn=rand();
    limit=1;
    
    //Map inputs -> outputs
    for(int i=1;i<=nLoops;i++){
        maxMin(rand(),mx,mn);
    }
    limit<<=31;
    limit-=1;
    
    //Display the outputs
    cout<<"Min = "<<mn<<" Max = "<<mx<<endl;
    cout<<fixed<<setprecision(0)<<showpoint;
    cout<<"2^31-1 = "<<pow(2,31)-1<<endl;
    cout<<"2^31-1 = "<<limit<<endl;
    

    //Exit stage right or left!
    return 0;
}

void  maxMin(int val,int &max,int &min){
    if(max<val)max=val;
    if(min>val)min=val;
}