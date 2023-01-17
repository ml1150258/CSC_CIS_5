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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int arabic,n1000s,n100s,n10s,n1s;
    string romnNm;//Roman Number
    
    //Input or initialize values Here
    arabic=2999;
    romnNm="";
    
    //Process/Calculations Here
    cout<<arabic<<"=";
    n1000s=arabic/1000;  //Determine # 1000'S
    arabic-=n1000s*1000; //Subtract from the Original Arabic
    n100s=arabic/100;    //Repeat process for all digits
    arabic-=n100s*100;
    n10s=arabic/10;    //Repeat process for all digits
    arabic-=n10s*10;
    n1s=arabic;
    cout<<n1000s<<n100s<<n10s<<n1s<<endl;
    
    //Conversion
    cout<<n1000s<<n100s<<n10s<<n1s<<"=";
    //Output the #1000's in Roman Numerals
    //Using the Ternary Operator
    romnNm+=n1000s==3?"MMM":
            n1000s==2?"MM":
            n1000s==1?"M":"";
    
    //Output the #100's in Roman Numerals
    //Using the Switch-Case
    switch(n100s){
        case 9:romnNm+="CM";break;
        case 8:romnNm+="DCCC";break;
        case 7:romnNm+="DCC";break;
        case 6:romnNm+="DC";break;
        case 5:romnNm+="D";break;
        case 4:romnNm+="CD";break;
        case 3:romnNm+="C";
        case 2:romnNm+="C";
        case 1:romnNm+="C";
    }
    
    //Output the #10's in Roman Numerals
    //Using the Independent If
    if(n10s==9)romnNm+="XC";
    if(n10s==8)romnNm+="LXXX";
    if(n10s==7)romnNm+="LXX";
    if(n10s==6)romnNm+="LX";
    if(n10s==5)romnNm+="L";
    if(n10s==4)romnNm+="XL";
    if(n10s==3)romnNm+="XXX";
    if(n10s==2)romnNm+="XX";
    if(n10s==1)romnNm+="X";
    
    //Output the #10's in Roman Numerals
    //Using the Dependent if
    if(n1s==9)romnNm+="IX";
    else if(n1s==8)romnNm+="VIII";
    else if(n1s==7)romnNm+="VII";
    else if(n1s==6)romnNm+="VI";
    else if(n1s==5)romnNm+="V";
    else if(n1s==4)romnNm+="IV";
    else if(n1s==3)romnNm+="III";
    else if(n1s==2)romnNm+="II";
    else if(n1s==1)romnNm+="I";
    
    //Output the string
    cout<<romnNm<<endl;
 
    //Exit
    return 0;
}

