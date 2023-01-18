/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 25, 2021, 11:15 AM
 * Purpose:  Roll 2 die, a pair of dice
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
    unsigned char mn,mx,die1,die2,sum;
    unsigned int nLoop,count;
    unsigned int freq2,freq3,freq4,freq5,freq6,freq7,freq8,freq9,
                 freq10,freq11,freq12;
    
    //Initialize Variables
    mn=mx=(rand()%6+1)+(rand()%6+1);
    nLoop=360000000;
    count=0;
    freq2=freq3=freq4=freq5=freq6=freq7=0;
    freq8=freq9=freq10=freq11=freq12=0;
    
    //Map Inputs to Outputs -> Process
    for(int thrw=1;thrw<=nLoop;thrw++){
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        sum=die1+die2;//[2,12]
        //cout<<"Throw = "<<thrw<<" Die Value = "<<static_cast<int>(die)<<endl;
        if(mn>sum)mn=sum;
        if(mx<sum)mx=sum;
        count++;
        switch(sum){
            case 2:freq2++;break;
            case 3:freq3++;break;
            case 4:freq4++;break;
            case 5:freq5++;break;
            case 6:freq6++;break;
            case 7:freq7++;break;
            case 8:freq8++;break;
            case 9:freq9++;break;
            case 10:freq10++;break;
            case 11:freq11++;break;
            case 12:freq12++;break;
            default:
                cout<<"If you reached this point, you don't know what is up!"
                        <<endl;
        }
    }
    
    //Display Inputs/Outputs
    cout<<"The Maximum Value Thrown = "<<static_cast<int>(mx)<<endl;
    cout<<"The Minimum Value Thrown = "<<static_cast<int>(mn)<<endl;
    cout<<"Frequency 2  = "<<freq2<<endl;
    cout<<"Frequency 3  = "<<freq3<<endl;
    cout<<"Frequency 4  = "<<freq4<<endl;
    cout<<"Frequency 5  = "<<freq5<<endl;
    cout<<"Frequency 6  = "<<freq6<<endl;
    cout<<"Frequency 7  = "<<freq7<<endl;
    cout<<"Frequency 8  = "<<freq8<<endl;
    cout<<"Frequency 9  = "<<freq9<<endl;
    cout<<"Frequency 10 = "<<freq10<<endl;
    cout<<"Frequency 11 = "<<freq11<<endl;
    cout<<"Frequency 12 = "<<freq12<<endl;
    cout<<"The count = "<<count<<" = "<<nLoop<<endl;
    cout<<"Sum of Frequencies = "<<freq2+freq3+freq4+freq5+
            freq6+freq7+freq8+freq9+freq10+freq11+freq12<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}