/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 12, 2024 11:55 AM
 * Purpose:  Sort
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstring>   //Char String functions strcmp, strcpy
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=80;
    char v1[SIZE],v2[SIZE],v3[SIZE];
    char min[SIZE],mid[SIZE],max[SIZE];
    
    //Initialize Variables
    strcpy(v1,"Mary");
    strcpy(v2,"Marc");
    strcpy(v3,"Mark");
    
    //The Process -> Map Inputs to Outputs

    if(strcmp(v1,v2)<0&&strcmp(v2,v3)<0){
        strcpy(min,v1); strcpy(mid,v2); strcpy(max,v3);}
    if(strcmp(v1,v3)<0&&strcmp(v3,v2)<0){
        strcpy(min,v1); strcpy(mid,v3); strcpy(max,v2);}
    if(strcmp(v2,v1)<0&&strcmp(v1,v3)<0){
        strcpy(min,v2); strcpy(mid,v1); strcpy(max,v3);}
    if(strcmp(v2,v3)<0&&strcmp(v3,v1)<0){
        strcpy(min,v2); strcpy(mid,v3); strcpy(max,v1);}
    if(strcmp(v3,v1)<0&&strcmp(v1,v2)<0){
        strcpy(min,v3); strcpy(mid,v1); strcpy(max,v2);}
    if(strcmp(v3,v2)<0&&strcmp(v2,v1)<0){
        strcpy(min,v3); strcpy(mid,v2); strcpy(max,v1);}

    
    //Display Inputs/Outputs
    cout<<"Variable 1 = "<<v1<<endl;
    cout<<"Variable 2 = "<<v2<<endl;
    cout<<"Variable 3 = "<<v3<<endl;
    cout<<"In Order ("<<min<<","<<mid<<","<<max<<")"<<endl;

    //Exit the Program
    return 0;
}