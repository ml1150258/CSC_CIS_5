/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 22nd, 2022, 9:45 AM
 * Purpose:  Convert an integer to a Roman Numeral
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
#include <cstring>   //String Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string rmNmrl;          //Roman Numeral Representation
    unsigned short nmCnvrt; //Number to Convert to Roman Numeral
    unsigned char n1000s,   //Number of 1000's
                   n100s,   //Number of 100's
                    n10s,   //Number of 10's
                     n1s;   //Number of 1's
    
    //Initial Variables
    nmCnvrt=rand()%4*1000+rand()%10*100+rand()%10*10+rand()%10; //[1-3000]
    rmNmrl="";
    
    //Convert each Place
    n1000s=nmCnvrt/1000;//Number of 1000's
    n100s=(nmCnvrt-n1000s*1000)/100;//Number of 100's
    n10s=nmCnvrt%100/10;//Number of 10's
    n1s=nmCnvrt%10;//Number of 1's
    
    //Display the Inputs and Outputs
    cout<<"See if the Result is equal "<<nmCnvrt
            <<" = "<<static_cast<int>(n1000s)
            <<static_cast<int>(n100s)
            <<static_cast<int>(n10s)
            <<static_cast<int>(n1s)<<endl;
    
    //Switch Statement - Convert the 1000's place
    switch(n1000s){
        case 3:rmNmrl+='M';
        case 2:rmNmrl+='M';
        case 1:rmNmrl+='M';
    }
    
    //Independent if's - Convert 100's place
    if(n100s==9)rmNmrl+="CM";
    if(n100s==8)rmNmrl+="DCCC";
    if(n100s==7)rmNmrl+="DCC";
    if(n100s==6)rmNmrl+="DC";
    if(n100s==5)rmNmrl+="D";
    if(n100s==4)rmNmrl+="CD";
    if(n100s==3)rmNmrl+="CCC";
    if(n100s==2)rmNmrl+="CC";
    if(n100s==1)rmNmrl+="C";
    
    //Ternary operator - Convert 10's place
    rmNmrl+=n10s==9?"XC":
            n10s==8?"LXXX":
            n10s==7?"LXX":
            n10s==6?"LX":
            n10s==5?"L":
            n10s==4?"XL":
            n10s==3?"XXX":
            n10s==2?"XX":
            n10s==1?"X":"";
    
    //Dependent if's - Convert 1's place
    if(n1s==9)     rmNmrl+="IX";
    else if(n1s==8)rmNmrl+="VIII";
    else if(n1s==7)rmNmrl+="VII";
    else if(n1s==6)rmNmrl+="VI";
    else if(n1s==5)rmNmrl+="V";
    else if(n1s==4)rmNmrl+="IV";
    else if(n1s==3)rmNmrl+="III";
    else if(n1s==2)rmNmrl+="II";
    else if(n1s==1)rmNmrl+="I";
    
    //Display the Results
    cout<<"Roman Numeral "<<rmNmrl<<" = "<<nmCnvrt<<endl;

    //Exit the code
    return 0;
}

