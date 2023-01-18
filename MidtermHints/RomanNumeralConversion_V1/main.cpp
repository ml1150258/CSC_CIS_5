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
    
    //Input or initialize values Here
    arabic=2999;
    
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
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    //Output the #100's in Roman Numerals
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    //Output the #10's in Roman Numerals
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
        //Output the #10's in Roman Numerals
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
 
    //Exit
    return 0;
}

