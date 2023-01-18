/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 25, 2021, 11:15 AM
 * Purpose:  Roll a simple 6 sided die
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Gererator
#include <ctime>     //Time to set the seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char mn,mx,die;
    unsigned int nLoop;
    unsigned int freq1,freq2,freq3,freq4,freq5,freq6;
    
    //Initialize Variables
    mn=mx=rand()%6+1;
    nLoop=360000000;
    freq1=freq2=freq3=freq4=freq5=freq6=0;
    
    //Map Inputs to Outputs -> Process
    for(int thrw=1;thrw<=nLoop;thrw++){
        die=rand()%6+1;//[1,6]
        //cout<<"Throw = "<<thrw<<" Die Value = "<<static_cast<int>(die)<<endl;
        if(mn>die)mn=die;
        if(mx<die)mx=die;
        switch(die){
            case 1:freq1++;break;
            case 2:freq2++;break;
            case 3:freq3++;break;
            case 4:freq4++;break;
            case 5:freq5++;break;
            case 6:freq6++;break;
            default:
                cout<<"If you reached this point, you don't know what is up!"
                        <<endl;
        }
    }
    
    //Display Inputs/Outputs
    cout<<"The Maximum Value Thrown = "<<static_cast<int>(mx)<<endl;
    cout<<"The Minimum Value Thrown = "<<static_cast<int>(mn)<<endl;
    cout<<"Frequency 1 = "<<freq1<<endl;
    cout<<"Frequency 2 = "<<freq2<<endl;
    cout<<"Frequency 3 = "<<freq3<<endl;
    cout<<"Frequency 4 = "<<freq4<<endl;
    cout<<"Frequency 5 = "<<freq5<<endl;
    cout<<"Frequency 6 = "<<freq6<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}