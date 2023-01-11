/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 11, 2023, 11:03 AM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y  ETC.... 13 COLUMNS"<<endl<<endl;
    
    //Row 1
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<endl;
            
    //Row 2
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    
    //Row 3
    
    //Row 4
    
    //Exit the Program
    return 0;
}