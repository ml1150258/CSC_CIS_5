/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on June 27, 2023, 10:16 AM
 * Purpose:  Converter
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short number;//Number to Convert
    unsigned char  n1000s,//Number of 1000s
                    n100s,//Number of 100s
                     n10s,//Number of 10s
                      n1s;//Number of 1s
    string roman;         //String representing the roman numeral conversion
    
    //Initialize Variables
    roman="";
    cout<<"Input a number between 1000 - 3000"<<endl;
    cin>>number;
    if(number < 1000 || number > 3000){
        cout<<"You need to follow instructions!"<<endl;
        exit(1);
    }
    
    //The Process -> Map Inputs to Outputs
    n1000s = number/1000;//How many 1000s
    n1s    = number%10; //How many 1s
    n100s  = (number - n1000s*1000)/100; //How many 1000s
    n10s   = (number/10)%10; //How many 10s
    
    //Display Inputs/Outputs
    cout<<"Input = "<<number<<" <-> Split = "
            <<static_cast<int>(n1000s)
            <<static_cast<int>(n100s)
            <<static_cast<int>(n10s)
            <<static_cast<int>(n1s)<<endl;
    //Append 1000s to the string
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
    //Append 100s to the string
    if(n100s==9)roman+="CM";
    if(n100s==8)roman+="DCCC";
    if(n100s==7)roman+="DCC";
    if(n100s==6)roman+="DC";
    if(n100s==5)roman+="D";
    if(n100s==4)roman+="CD";
    if(n100s==3)roman+="CCC";
    if(n100s==2)roman+="CC";
    if(n100s==1)roman+="C";
    //Append 10s to the string
    if(n10s==9)roman+="XC";
    else if(n10s==8)roman+="LXXX";
    else if(n10s==7)roman+="LXX";
    else if(n10s==6)roman+="LX";
    else if(n10s==5)roman+="L";
    else if(n10s==4)roman+="XL";
    else if(n10s==3)roman+="XXX";
    else if(n10s==2)roman+="XX";
    else if(n10s==1)roman+="X";
    //Append 1s to the string
    roman += n1s==9 ? "IX":
             n1s==8 ? "VIII":
             n1s==7 ? "VII":
             n1s==6 ? "VI":
             n1s==5 ? "V":
             n1s==4 ? "IV":
             n1s==3 ? "III":
             n1s==2 ? "II":
             n1s==1 ? "I":"";
    
    //Output the String
    cout<<"Number = "<<number<<" Converts to "<<roman<<endl;

    //Exit the Program
    return 0;
}