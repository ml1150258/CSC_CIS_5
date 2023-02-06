/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 22nd, 2022, 11:30 AM
 * Purpose:  Sorting 3 Names
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstring>   //String Library string compare
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const int SIZE=10;
    char name1[SIZE],name2[SIZE],name3[SIZE];
    
    //Initial Variables
    cout<<"Read in 3 Names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    //Map the Inputs to the Outputs
    if(strcmp(name1,name2)<0 && strcmp(name2,name3)<0){
        cout<<"Sorted order is "<<name1<<", "<<name2<<", "<<name3<<endl;
    }else if(strcmp(name1,name3)<0 && strcmp(name3,name2)<0){
        cout<<"Sorted order is "<<name1<<", "<<name3<<", "<<name2<<endl;
    }else if(strcmp(name2,name1)<0 && strcmp(name1,name3)<0){
        cout<<"Sorted order is "<<name2<<", "<<name1<<", "<<name3<<endl;
    }else if(strcmp(name2,name3)<0 && strcmp(name3,name1)<0){
        cout<<"Sorted order is "<<name2<<", "<<name3<<", "<<name1<<endl;
    }else if(strcmp(name3,name1)<0 && strcmp(name1,name2)<0){
        cout<<"Sorted order is "<<name3<<", "<<name1<<", "<<name2<<endl;
    }else if(strcmp(name3,name2)<0 && strcmp(name2,name1)<0){
        cout<<"Sorted order is "<<name3<<", "<<name2<<", "<<name1<<endl;
    }

    //Exit the code
    return 0;
}

