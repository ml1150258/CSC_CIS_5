/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Roman Numeral Conversion
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string cArbcRm(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int arabic;
    
    //Input or initialize values Here
    arabic=2021;
    
    //Process/Calculations Here
    cout<<arabic<<"="<<cArbcRm(arabic)<<endl;
 
    //Exit
    return 0;
}

string cArbcRm(int arabic){
    //Declare all Variables Here
    int n1000s,n100s,n10s,n1s;
    string romnNm;//Roman Number
    
    //Input or initialize values Here
    romnNm="";
    
    //Process/Calculations Here
    n1000s=arabic/1000;  //Determine # 1000'S
    arabic-=n1000s*1000; //Subtract from the Original Arabic
    n100s=arabic/100;    //Repeat process for all digits
    arabic-=n100s*100;
    n10s=arabic/10;    //Repeat process for all digits
    arabic-=n10s*10;
    n1s=arabic;
    
    //Output the #1000's in Roman Numerals
    switch(n1000s){
        case 3:romnNm+="M";
        case 2:romnNm+="M";
        case 1:romnNm+="M";
    }
    //Output the #100's in Roman Numerals
    if(n100s==9)romnNm+="CM";
    if(n100s==8)romnNm+="DCCC";
    if(n100s==7)romnNm+="DCC";
    if(n100s==6)romnNm+="DC";
    if(n100s==5)romnNm+="D";
    if(n100s==4)romnNm+="CD";
    if(n100s==3)romnNm+="CCC";
    if(n100s==2)romnNm+="CC";
    if(n100s==1)romnNm+="C";
    
    //Output the #10's in Roman Numerals
    if(n10s==9)romnNm+="XC";
    else if(n10s==8)romnNm+="LXXX";
    else if(n10s==7)romnNm+="LXX";
    else if(n10s==6)romnNm+="LX";
    else if(n10s==5)romnNm+="L";
    else if(n10s==4)romnNm+="XL";
    else if(n10s==3)romnNm+="XXX";
    else if(n10s==2)romnNm+="XX";
    else romnNm+="X";
        
    //Output the #10's in Roman Numerals
    romnNm+=n1s==9?"IX":
            n1s==8?"VIII":
            n1s==7?"VII":
            n1s==6?"VI":
            n1s==5?"V":
            n1s==4?"IV":
            n1s==3?"III":
            n1s==2?"II":"I";

    return romnNm;
}