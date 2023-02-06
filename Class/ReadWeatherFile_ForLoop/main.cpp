/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 24, 2022, 11:25 AM
 * Purpose: Read a Weather File
 *           Specifically 3 summer months June/July/August
 *           30 days per month
 *           Random Rainy-R, Cloudy-C, Sunny-S days
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <fstream>   //File Library I/O
#include <cstdlib>   //Random function
#include <ctime>     //Time Library
#include <cstring>
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
    fstream in1,in2;
    const int SIZE=20;
    char fileNm1[SIZE]="weather1.dat";
    string fileNm2="weather2.dat";
    unsigned char nMonths,nDays;
    
    //Initial Variables
    in1.open(fileNm1,ios::in);
    in2.open(fileNm2,ios::in);
    nMonths=3;
    nDays=30;
    
    //The first file contents
    cout<<"Weather1.dat file content"<<endl;
    for(int month=1;month<=nMonths;month++){
        for(int day=1;day<=nDays;day++){
            char weather;
            in1>>weather;
            cout<<weather;
        }
        cout<<endl;
    }
    
    //The second file contents
    cout<<endl<<"Weather2.dat file content"<<endl;
    for(int month=1;month<=nMonths;month++){
        for(int day=1;day<=nDays;day++){
            char weather;
            in2>>weather;
            cout<<weather;
        }
        cout<<endl;
    }
    
    //Display the Inputs and Outputs

    //Exit the code
    in1.close();
    in2.close();
    return 0;
}

