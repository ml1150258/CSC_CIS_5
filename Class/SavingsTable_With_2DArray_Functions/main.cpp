/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19th, 2022, 10:10 AM
 * Purpose:  Savings Table
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!  Higher Dimensions
const unsigned char PERCENT=100;//Percent conversion
const int COLS=4;//Number of Columns in the 2D Array

//Function Prototypes
void model(float [][COLS],float,int);
void view(const float [][COLS],float,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    const int SIZE=100;
    float savings[SIZE][COLS];//Column 0->year 1->date 2->balance 3->interest
    float intRate;//Interest Rate in %
    int   numCmpd;//Number of compounding periods years

    //Initialize Variables
    savings[0][2]=1e2f;//$100
    intRate=6.0f/PERCENT;//6%
    numCmpd=12;//Number of years
    savings[0][3]=0;  //Interest earned
    
    //Map the inputs/known to the outputs
    model(savings,intRate,numCmpd);
    
    //Display the outputs
    view(savings,intRate,numCmpd);

    //Exit the program
    return 0;
}

//Column 0->year 1->date 2->balance 3->interest
void view(const float savings[][COLS],float intRate,int numCmpd){
    cout<<"Year  Date  Savings Interest"<<endl;
    for(int year=0;year<=numCmpd;year++){
        cout<<fixed<<setprecision(0)<<noshowpoint;
        cout<<setw(4)<<savings[year][0]<<setw(6)<<savings[year][1];
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(9)<<savings[year][2]<<setw(9)<<savings[year][3]<<endl;
    }
}

//Column 0->year 1->date 2->balance 3->interest
void model(float savings[][COLS],float intRate,int numCmpd){
    for(int year=0,date=2022;year<=numCmpd;year++,date++){
        savings[year][0]=year;
        savings[year][1]=date;
        savings[year][3]=savings[year][2]*intRate;
        savings[year+1][2]=savings[year][2]+savings[year][3];
    }
}