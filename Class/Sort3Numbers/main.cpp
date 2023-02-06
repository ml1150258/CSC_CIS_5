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
    float num1,num2,num3;
    
    //Initial Variables
    cout<<"Read in 3 Numbers"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    
    //Map the Inputs to the Outputs
    if(num1<=num2 && num2<=num3){
        cout<<"Sorted order is "<<num1<<", "<<num2<<", "<<num3<<endl;
    }else if(num1<=num3 && num3<=num2){
        cout<<"Sorted order is "<<num1<<", "<<num3<<", "<<num2<<endl;
    }else if(num2<=num1 && num1<=num3){
        cout<<"Sorted order is "<<num2<<", "<<num1<<", "<<num3<<endl;
    }else if(num2<=num3 && num3<=num1){
        cout<<"Sorted order is "<<num2<<", "<<num3<<", "<<num1<<endl;
    }else if(num3<=num1 && num1<=num2){
        cout<<"Sorted order is "<<num3<<", "<<num1<<", "<<num2<<endl;
    }else if(num3<=num2 && num2<=num1){
        cout<<"Sorted order is "<<num3<<", "<<num2<<", "<<num1<<endl;
    }

    //Exit the code
    return 0;
}

