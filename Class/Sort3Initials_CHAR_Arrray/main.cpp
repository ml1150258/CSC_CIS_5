/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2021, 10:10 AM
 * Purpose:  Sorting 3 Initials
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Function
#include <string.h>   //String Compare function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set the random number Seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare variables here
    const int SIZE=4;
    char name1[SIZE],
         name2[SIZE],
         name3[SIZE];
    
    //Initialize variables here
    name1[0]=rand()%26+'A';//[A-Z]
    name1[1]=rand()%26+'A';//[A-Z]
    name1[2]=rand()%26+'A';//[A-Z]
    name1[3]='\0';
    name2[0]=rand()%26+'A';//[A-Z]
    name2[1]=rand()%26+'A';//[A-Z]
    name2[2]=rand()%26+'A';//[A-Z]
    name2[3]='\0';  
    name3[0]=rand()%26+'A';//[A-Z]
    name3[1]=rand()%26+'A';//[A-Z]
    name3[2]=rand()%26+'A';//[A-Z]
    name3[3]='\0';
    
    //Map inputs to outputs here, i.e. the process
    cout<<"Sort the 3 Initials"<<endl;
    cout<<"The first name = "<<name1<<endl;
    cout<<"The second name = "<<name2<<endl;
    cout<<"The third name = "<<name3<<endl;
    cout<<"Output the sorted order"<<endl;
    if(strcmp(name1,name2)<=0 && strcmp(name2,name3)<=0){
        cout<<name1<<" "<<name2<<" "<<name3<<endl;
    }else if(strcmp(name1,name3)<=0 && strcmp(name3,name2)<=0){
        cout<<name1<<" "<<name3<<" "<<name2<<endl;
    }else if(strcmp(name2,name1)<=0 && strcmp(name1,name3)<=0){
        cout<<name2<<" "<<name1<<" "<<name3<<endl;
    }else if(strcmp(name2,name3)<=0 && strcmp(name3,name1)<=0){
        cout<<name2<<" "<<name3<<" "<<name1<<endl;
    }else if(strcmp(name3,name1)<=0 && strcmp(name1,name2)<=0){
        cout<<name3<<" "<<name1<<" "<<name2<<endl;
    }else{
        cout<<name3<<" "<<name2<<" "<<name1<<endl;
    }
    
    //Display the results

    return 0;
}