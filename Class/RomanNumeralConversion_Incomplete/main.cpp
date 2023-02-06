/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2022, 11:55 AM
 * Purpose:  Roman Numeral Converter
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstring>   //String to hold Roman Numeral
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char n1000s,n100s,n10s,n1s;
    unsigned short arabic;
    string roman="";
    
    //Initialize Variables
    cout<<"Input a integer between 0-3000"<<endl;
    cin>>arabic;
    
    //Map the inputs/known to the outputs
    n1000s=arabic/1000;
    n100s=(arabic-n1000s*1000)/100;
    n10s=arabic%100/10;
    n1s=arabic%10;
    
    //Display the outputs
    cout<<arabic<<" = "<<static_cast<int>(n1000s)
            <<static_cast<int>(n100s)
            <<static_cast<int>(n10s)
            <<static_cast<int>(n1s)<<endl;
    
    //Convert the 1000's place
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
    
    //Output the conversion
    cout<<roman<<" = "<<arabic<<endl;

    //Exit the program
    return 0;
}