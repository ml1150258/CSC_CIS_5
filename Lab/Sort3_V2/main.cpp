/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 12, 2024 11:55 AM
 * Purpose:  Sort
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time for seed
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char v1,v2,v3;//[A-Z]

    //Initialize Variables
    v1=rand()%26+65;//[65-90][A-Z]
    v2=rand()%26+65;//[65-90][A-Z]
    v3=rand()%26+65;//[65-90][A-Z]
    
    //The Process -> Map Inputs to Outputs
    //Display Inputs/Outputs
    cout<<"Variable 1 = "<<v1<<endl;
    cout<<"Variable 2 = "<<v2<<endl;
    cout<<"Variable 3 = "<<v3<<endl;
    if(v1<=v2&&v2<=v3)cout<<"In Order ("<<v1<<","<<v2<<","<<v3<<")"<<endl;
    if(v1<=v3&&v3<=v2)cout<<"In Order ("<<v1<<","<<v3<<","<<v2<<")"<<endl;
    if(v2<=v1&&v1<=v3)cout<<"In Order ("<<v2<<","<<v1<<","<<v3<<")"<<endl;
    if(v2<=v3&&v3<=v1)cout<<"In Order ("<<v2<<","<<v3<<","<<v1<<")"<<endl;
    if(v3<=v2&&v2<=v1)cout<<"In Order ("<<v3<<","<<v2<<","<<v1<<")"<<endl;
    if(v3<=v1&&v1<=v2)cout<<"In Order ("<<v3<<","<<v1<<","<<v2<<")"<<endl;

    //Exit the Program
    return 0;
}