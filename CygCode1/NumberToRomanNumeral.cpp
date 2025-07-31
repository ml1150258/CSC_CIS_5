/*
Name:  Dr. Mark Lehr
Date:  03/20/25
Purpose: Roman Numeral Conversion
*/

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    unsigned short arabic;//Arabic number 1-3999
    string         rmnNum;//Conversion
    unsigned char n1000s,n100s,n10s,n1s;
	
	//Initialize Values
    cout<<"This code converts Arabic Numbers to Roman Numerals"<<endl;
    cout<<"Input an integer between 1 and 3999"<<endl;
    cin>>arabic;
    cout<<arabic;
    n1000s= arabic/1000;
    n100s = (arabic%1000)/100;
    n10s  = (arabic%100)/10;
    n1s   = arabic%10;
    cout<<" = "<<static_cast<int>(n1000s)
               <<static_cast<int>(n100s)
               <<static_cast<int>(n10s)<<
               static_cast<int>(n1s)<<endl;
	
	//Map the Inputs to Outputs - Process
    //Switch Case for 1000s
    switch(n1000s){
        case 3: rmnNum+='M';
        case 2: rmnNum+='M';
        case 1: rmnNum+='M';
    }

    //Independent if for 100s
    if(n100s==9)rmnNum+="CM";
    if(n100s==8)rmnNum+="DCCC";
    if(n100s==7)rmnNum+="DCC";
    if(n100s==6)rmnNum+="DC";
    if(n100s==5)rmnNum+="D";
    if(n100s==4)rmnNum+="CD";
    if(n100s==3)rmnNum+="CCC";
    if(n100s==2)rmnNum+="CC";
    if(n100s==1)rmnNum+="C";

    //Ternary Operator
    rmnNum+= n10s==9? "XC":
             n10s==8? "LXXX":
             n10s==7? "LXX":
             n10s==6? "LX":
             n10s==5? "L":
             n10s==4? "XL":
             n10s==3? "XXX":
             n10s==2? "XX":
             n10s==1? "X":"";

    //Dependent If
         if(n1s==9)rmnNum+="IX";
    else if(n1s==8)rmnNum+="VIII";
    else if(n1s==7)rmnNum+="VII";
    else if(n1s==6)rmnNum+="VI";
    else if(n1s==5)rmnNum+="V";
    else if(n1s==4)rmnNum+="IV";
    else if(n1s==3)rmnNum+="III";
    else if(n1s==2)rmnNum+="II";
    else if(n1s==1)rmnNum+="I";
	
	//Display and output the results
	cout<<"The conversion is = "<<rmnNum<<endl;
	//Exit the program
	return 0;
}