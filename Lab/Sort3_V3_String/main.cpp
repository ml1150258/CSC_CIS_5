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
    string v1,v2,v3;//[A-Z]
    string min,mid,max;//[A-Z]

    //Initialize Variables
    v1="Mary";
    v2="Marc";
    v3="Mark";
    
    //The Process -> Map Inputs to Outputs

    if(v1<=v2&&v2<=v3){min=v1; mid=v2; max=v3;}
    if(v1<=v3&&v3<=v2){min=v1; mid=v3; max=v2;}
    if(v2<=v1&&v1<=v3){min=v2; mid=v1; max=v3;}
    if(v2<=v3&&v3<=v1){min=v2; mid=v3; max=v1;}
    if(v3<=v1&&v1<=v2){min=v3; mid=v1; max=v2;}
    if(v3<=v2&&v2<=v1){min=v3; mid=v2; max=v1;}

    
    //Display Inputs/Outputs
    cout<<"Variable 1 = "<<v1<<endl;
    cout<<"Variable 2 = "<<v2<<endl;
    cout<<"Variable 3 = "<<v3<<endl;
    cout<<"In Order ("<<min<<","<<mid<<","<<max<<")"<<endl;

    //Exit the Program
    return 0;
}