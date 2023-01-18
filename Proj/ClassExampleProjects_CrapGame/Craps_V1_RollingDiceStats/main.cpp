/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 7th, 2022, 10:15 AM
 * Purpose:  Roll the Dice
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Set the random number seed
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
    unsigned int nThrows;//Number of throws
    unsigned int f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12;//Frequency of each Throws
    
    //Initial Variables
    nThrows=36000;
    f2=f3=f4=f5=f6=f7=f8=f9=f10=f11=f12=0;
    
    //Map the Inputs to the Outputs
    for(int toss=1;toss<=nThrows;toss++){
        char die1=rand()%6+1;//[1-6]
        char die2=rand()%6+1;//[1-6]
        char sum=die1+die2;
        switch(sum){
            case 2:f2++;break;
            case 3:f3++;break;
            case 4:f4++;break;
            case 5:f5++;break;
            case 6:f6++;break;
            case 7:f7++;break;
            case 8:f8++;break;
            case 9:f9++;break;
            case 10:f10++;break;
            case 11:f11++;break;
            case 12:f12++;break;
            default: cout<<"If you get here something is wrong"<<endl;
        }
    }
    
    //Display the Inputs and Outputs
    cout<<"Number of times 2 dice where thrown = "<<nThrows<<endl;
    cout<<"Number of times 2 dice where thrown = "
            <<f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12<<endl;
    cout<<"Sum = 2 -> was thrown ->"<<f2<<" times"<<endl;
    cout<<"Sum = 3 -> was thrown ->"<<f3<<" times"<<endl;
    cout<<"Sum = 4 -> was thrown ->"<<f4<<" times"<<endl;
    cout<<"Sum = 5 -> was thrown ->"<<f5<<" times"<<endl;
    cout<<"Sum = 6 -> was thrown ->"<<f6<<" times"<<endl;
    cout<<"Sum = 7 -> was thrown ->"<<f7<<" times"<<endl;
    cout<<"Sum = 8 -> was thrown ->"<<f8<<" times"<<endl;
    cout<<"Sum = 9 -> was thrown ->"<<f9<<" times"<<endl;
    cout<<"Sum = 10 -> was thrown ->"<<f10<<" times"<<endl;
    cout<<"Sum = 11 -> was thrown ->"<<f11<<" times"<<endl;
    cout<<"Sum = 12 -> was thrown ->"<<f12<<" times"<<endl;
    
    //Exit the code
    return 0;
}

