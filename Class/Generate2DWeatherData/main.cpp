/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 12th, 2022, 9:45 AM
 * Purpose:  Generate 2-D data
 */

//System Level Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>  //Random Number Library
#include <fstream>  //File Library
#include <ctime>    //Time Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    fstream out;
    const int SIZE=3;
    char weather[SIZE]={'S','R','C'};
    char nMonths,//Number of Months
         nDays;//Number of days
    
    //Initialize Variables
    out.open("weather.dat",ios::out);
    nDays=30;
    nMonths=3;
    
    //Map the inputs/known to the outputs
    cout<<static_cast<int>(nMonths)<<" "<<static_cast<int>(nDays)<<endl;
    out<<static_cast<int>(nMonths)<<" "<<static_cast<int>(nDays)<<endl;
    for(int nRow=0;nRow<nMonths;nRow++){
        for(int nCols=0;nCols<nDays;nCols++){
            char x=weather[rand()%SIZE];
            cout<<x<<" ";
            out<<x<<" ";
        }
        cout<<endl;
        out<<endl;
    }

    //Exit the program
    out.close();
    return 0;
}