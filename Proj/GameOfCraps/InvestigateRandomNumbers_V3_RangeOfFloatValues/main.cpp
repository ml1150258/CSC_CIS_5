/*
    Author: Dr. Mark E. Lehr
    Date:   April 8th, 2021  11:12am
    Purpose:How to choose numbers between values and scale
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cstdlib>     //Random number library
#include <ctime>       //Time Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const unsigned int MAXRAND=(1<<31)-1;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned int nLoops;
    float max,scale,min,shift;
    
    //Initialize variables
    nLoops=100000;
    scale=10;
    shift=5;
    max=min=(1.0f*rand()/MAXRAND)*(scale)+shift;
    
    //Process, map inputs to outputs
    for(unsigned int i=1;i<=nLoops;i++){
        //              (0  ->   1)     * Scale
        float random=(1.0f*rand()/MAXRAND)*(scale)+shift;//[scale+shift]
        max=max<random?random:max;
        min=min>random?random:min;
        cout<<"Run #"<<i<<" = "<<random<<endl;
    }
    
    //Display your initial conditions as well as outputs.
    cout<<"Scale value wanted = "<<scale<<endl;
    cout<<"Shift value wanted = "<<shift<<endl;
    cout<<"Maximum Random Number "<<max<<endl;
    cout<<"Minimum Random Number "<<min<<endl;
    
    //Exit stage right
    return 0;
}