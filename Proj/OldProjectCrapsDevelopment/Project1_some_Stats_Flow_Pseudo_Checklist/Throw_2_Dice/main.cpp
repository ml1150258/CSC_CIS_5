/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  Statistics for Throwing 2 Dice
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12;//Frequency of the sum x -> fx
    int nThrows;
    
    //Initialize Variables
    f2=f3=f4=f5=f6=f7=f8=f9=f10=f11=f12=0;
    nThrows=36000;
    
    //Process/Map inputs to outputs
    for(int thrw=1;thrw<=nThrows;thrw++){
        char die1=rand()%6+1;//Range [1,6]
        char die2=rand()%6+1;//Range [1,6]
        switch(die1+die2){
            case 2:f2++;break;
            case 3: f3++; break;
            case 4: f4++; break;
            case 5: f5++; break;
            case 6: f6++; break;
            case 7: f7++; break;
            case 8: f8++; break;
            case 9: f9++; break;
            case 10:f10++;break;
            case 11:f11++;break;
            case 12:f12++;break;
            default:cout<<"Error"<<endl;
        }
    }
    
    //Output data
    cout<<"Frequency of 2 = "<<f2<<endl;
    cout<<"Frequency of 3 = "<<f3<<endl;
    cout<<"Frequency of 4 = "<<f4<<endl;
    cout<<"Frequency of 5 = "<<f5<<endl;
    cout<<"Frequency of 6 = "<<f6<<endl;
    cout<<"Frequency of 7 = "<<f7<<endl;
    cout<<"Frequency of 8 = "<<f8<<endl;
    cout<<"Frequency of 9 = "<<f9<<endl;
    cout<<"Frequency of 10 = "<<f10<<endl;
    cout<<"Frequency of 11 = "<<f11<<endl;
    cout<<"Frequency of 12 = "<<f12<<endl;
    cout<<nThrows<<"="<<f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12<<endl;
    
    //Exit stage right!
    return 0;
}