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
    unsigned char min,mid,max;//Sorted Output
    
    //Initialize Variables
    v1=rand()%26+65;//[65-90][A-Z]
    v2=rand()%26+65;//[65-90][A-Z]
    v3=rand()%26+65;//[65-90][A-Z]
    
    //The Process -> Map Inputs to Outputs
    min=max=mid=v1;
    
    min=min>v2?v2:min;
    min=min>v3?v3:min;
    
    max=max<v2?v2:max;
    max=max<v3?v3:max;
    
    mid= max==v1 && min==v3?v2:mid;
    mid= max==v3 && min==v1?v2:mid;
    mid= max==v1 && min==v2?v3:mid;
    mid= max==v2 && min==v1?v3:mid;
    
    //Display Inputs/Outputs
    cout<<"Variable 1 = "<<v1<<endl;
    cout<<"Variable 2 = "<<v2<<endl;
    cout<<"Variable 3 = "<<v3<<endl;
    cout<<"Smallest Value = "<<min<<endl;
    cout<<"Middle   Value = "<<mid<<endl;
    cout<<"Maximum  Value = "<<max<<endl;

    //Exit the Program
    return 0;
}