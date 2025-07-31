/*
     Author: Dr. Mark E. Lehr
     Date:   July 3rd, 2025
     Purpose:  Roman Numeral Converter
*/

//System Libraries
#include <iostream>  //Input/Output
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    int arabic;
    string roman;
    int n1s,n10s,n100s,n1000s;

    //Initialize Variables
    cout<<"This program converts Arabic to Roman Numberals"<<endl;
    cout<<"Type in an integer between 1-3999"<<endl;
    cin>>arabic;

    //Process - Map the inputs to outputs
    n1000s=arabic/1000;
    n100s =(arabic/100)%10;
    n10s  =(arabic/10)%10;
    n1s   =arabic%10; 

    //Display the results
    if(arabic<1||arabic>3999){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    cout<<arabic<<" = "<<n1000s<<n100s<<n10s<<n1s<<endl;

    //Create the Roman Numeral for the 1000s
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }

    //Create the Roman Numeral for the 100s
    roman+=n100s==9?"CM":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==6?"DC":
           n100s==5?"D":
           n100s==4?"CD":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";

    //Create the Roman Numeral for the 10s
    if(n10s==9)roman+="XC";
    if(n10s==8)roman+="LXXX";
    if(n10s==7)roman+="LXX";
    if(n10s==6)roman+="LX";
    if(n10s==5)roman+="L";
    if(n10s==4)roman+="XL";
    if(n10s==3)roman+="XXX";
    if(n10s==2)roman+="XX";
    if(n10s==1)roman+="X";

    //Create the Roman Numeral for the 1s
    if(n1s==9)roman+="IX";
    else if(n1s==8)roman+="VIII";
    else if(n1s==7)roman+="VII";
    else if(n1s==6)roman+="VI";
    else if(n1s==5)roman+="V";
    else if(n1s==4)roman+="IV";
    else if(n1s==3)roman+="III";
    else if(n1s==2)roman+="II";
    else if(n1s==1)roman+="I";

    //Output the roman numberal result
    cout<<arabic<<" = "<<roman<<endl;

    //Exit stage right
    return 0;
}