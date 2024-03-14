/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 14th, 2024, 11:03 AM
 * Purpose:  Example Menu
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time for seed
#include <cstring>   //Char String functions strcmp, strcpy
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    char choose;//Choose the problem
    
    //Initialize Variables
    cout<<"Menu Options"<<endl;
    cout<<"1.  Type 1 for Sort V3 with Single Chars"<<endl;
    cout<<"2.  Type 2 for Sort V3 with Strings"<<endl;
    cout<<"3.  Type 3 for Sort V3 with Char Arrays"<<endl;
    cin>>choose;
    
    //Map/Process the Inputs -> Outputs
    switch(choose){
        case '1':{
            //Set random seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare Variables
            unsigned char v1,v2,v3;//[A-Z]
            unsigned char min,mid,max;//[A-Z]

            //Initialize Variables
            v1=rand()%26+65;//[65-90][A-Z]
            v2=rand()%26+65;//[65-90][A-Z]
            v3=rand()%26+65;//[65-90][A-Z]

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
            break;}
        case '2':{
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
            break;}
        case '3':{
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
            break;}
        default:
            cout<<"You typed the wrong option"<<endl;
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}