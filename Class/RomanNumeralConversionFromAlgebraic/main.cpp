/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2021, 11:02 AM
 * Purpose:  Roman Numeral Conversion
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
    //Declare variables here
    short algebra;
    string roman="";
    char n1000s,n100s,n10s,n1s;
    
    //Initialize variables here
    cout<<"Convert Algebraic Number to Roman Numerals"<<endl;
    cout<<"Input a number < 4000"<<endl;
    cin>>algebra;
    
    //Determine if an appropriate number
    if(algebra<0 || algebra>=4000){
        if(algebra>=4000)cout<<"Too Large a number"<<endl;
        else cout<<"Negative number"<<endl;
        exit(1);
    }
    
    //Calculate the number of powers of 10
    n1000s=algebra/1000;    //Strip 1000's
    n100s=algebra%1000/100; //Stripped the 100's place
    n10s=algebra%100/10;    //Stripped the 10's place
    n1s=algebra%10;         //Stripped the 1's place
    cout<<algebra<<" = "<<static_cast<int>(n1000s)
                        <<static_cast<int>(n100s)
                        <<static_cast<int>(n10s)
                        <<static_cast<int>(n1s)<<" ?"<<endl;
    
    //Output Roman Numerals 1000's - Switch Case
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
    
    //Output Roman Numerals 100's -  Ternary Operator
    roman+=n100s==9?"CM":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==6?"DC":
           n100s==5?"D":
           n100s==4?"CD":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";
    
    //Output Roman Numerals 10's - Dependent if
    if(n10s==9)roman+="XC";
    else if(n10s==8)roman+="LXXX";
    else if(n10s==7)roman+="LXX";
    else if(n10s==6)roman+="LX";
    else if(n10s==5)roman+="L";
    else if(n10s==4)roman+="XL";
    else if(n10s==3)roman+="XXX";
    else if(n10s==2)roman+="XX";
    else if(n10s==1)roman+="X";
              
    //Output Roman Numerals 10's - Independent if
    if(n1s==9)roman+="IX";
    if(n1s==8)roman+="VIII";
    if(n1s==7)roman+="VII";
    if(n1s==6)roman+="VI";
    if(n1s==5)roman+="V";
    if(n1s==4)roman+="IV";
    if(n1s==3)roman+="III";
    if(n1s==2)roman+="II";
    if(n1s==1)roman+="I";
    
    //Display the results
    cout<<algebra<<" = "<<roman<<endl;

    return 0;
}