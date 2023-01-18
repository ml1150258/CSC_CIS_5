/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  Statistics for Throwing 2 Dice
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int min,max;
    unsigned int maximum;
    
    //Initialize Variables
    min=max=rand();//%6+1;//Undue for Dice
    maximum=(1<<31) - 1;
    
    //Process/Map inputs to outputs
    for(int i=1;i<=2000000000;i++){
        int rnd=rand();//%6+1;//Undue for Dice
        if(rnd>max)max=rnd;
        if(rnd<min)min=rnd;
    }
    
    //Output data
    cout<<"The minimum = "<<min<<endl;
    cout<<"The maximum = "<<max<<endl;
    cout<<"2^31-1      = "<<maximum<<endl; 
    
    //Exit stage right!
    return 0;
}