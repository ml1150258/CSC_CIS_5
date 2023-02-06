/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 26th, 2022, 9:35 AM
 * Purpose:  Dynamic Memory and Classes
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Setting Random Number Seed
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries
#include "Array.h"

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char *argv[]) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    Array array(size);
    int perLine;
    int value;
    
    //Initialize Variables
    value=rand()%90+10;
    perLine=10;
    cout<<"Array before Sorting"<<endl;
    array.prntAry(perLine);
    
    //Map the inputs/known to the outputs
    int index=array.linSrch(value);
    cout<<"Searching using the Linear Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }
    
    //Display the outputs
    array.mrkSort();
    cout<<endl<<"Array after Sorting"<<endl;
    array.prntAry(perLine);
    
    //Map the inputs/known to the outputs
    index=array.binSrch(value);
    cout<<"Searching using the Binary Technique"<<endl;
    if(index!=-1){
        cout<<"Value "<<value<<" found at index = "<<index<<endl;
    }else{
        cout<<"Value "<<value<<" not found"<<endl;
    }

    //Exit the program
    return 0;
}