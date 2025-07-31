/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 3rd, 2:05 PM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    bool x,y;
    
    //Output the header
    cout<<"X	Y	!X	!Y	X&&Y	X||Y	X^Y	X^Y^Y	X^Y^X	"
        <<"!X&&!Y	!(X||Y)	!X||!Y	!(X&&Y)"<<endl;
    
    //First Row
    x=y=true;
    cout<<(x?'T':'F')<<"       "
        <<(y?'T':'F')<<"        "
        <<(!x?'T':'F')<<"       "
        <<(!y?'T':'F')<<"       "
        <<(x&&y?'T':'F')<<"       "
        <<endl;

        //Second Row
        y=false;
        cout<<(x?'T':'F')<<"       "
            <<(y?'T':'F')<<"        "
            <<(!x?'T':'F')<<"       "
            <<(!y?'T':'F')<<"       "
            <<(x&&y?'T':'F')<<"       "
            <<endl;

    return 0;
}