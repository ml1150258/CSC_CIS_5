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
    switch(n1000s){
        case 3:romnNm+="M";
        case 2:romnNm+="M";
        case 1:romnNm+="M";
    }
    //Output the #100's in Roman Numerals
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
    switch(n10s){
        case 9:romnNm+="XC";break;
        case 8:romnNm+="LXXX";break;
        case 7:romnNm+="LXX";break;
        case 6:romnNm+="LX";break;
        case 5:romnNm+="L";break;
        case 4:romnNm+="XL";break;
        case 3:romnNm+="X";
        case 2:romnNm+="X";
        case 1:romnNm+="X";
    }
        //Output the #10's in Roman Numerals
    switch(n1s){
        case 9:romnNm+="IX";break;
        case 8:romnNm+="VIII";break;
        case 7:romnNm+="VII";break;
        case 6:romnNm+="VI";break;
        case 5:romnNm+="V";break;
        case 4:romnNm+="IV";break;
        case 3:romnNm+="I";
        case 2:romnNm+="I";
        case 1:romnNm+="I";
    }
    
    //Output the string
    cout<<romnNm<<endl;
 
    //Exit
    return 0;
}

