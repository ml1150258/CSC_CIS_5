/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 16th, 2024, 6:45 PM
 * Purpose:  Example Arrays with Functions
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Library for the Rand function
#include <ctime>     //Time Library to set Random Number seed
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int COLS=15;

//Function Prototypes
void filAray(int [][COLS],int);
void prntAry(int [][COLS],int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int ROWS=10;
    int array[ROWS][COLS];
    
    //Initialize Variables
    filAray(array,ROWS);
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    prntAry(array,ROWS);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void prntAry(int a[][COLS],int rows){
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[][COLS],int rows){
    int base=100;
    int range=200;
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            a[row][col]=rand()%(range+1)+base;//[100-300]
        }
    }
}