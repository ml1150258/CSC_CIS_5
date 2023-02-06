/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 12th, 2022, 9:45 AM
 * Purpose:  Read and Quantify 2-D data
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
const int DAYS=31;//Max days in a month

//Function Prototypes
void input(fstream &,char [][DAYS],int &,int &);
void display(const char [][DAYS],int,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    fstream in;
    const int DAYS=31;//Max days in a month
    const int MONTHS=12;//Max months in a year
    char weather[MONTHS][DAYS];
    int  nMonths,//Number of Months
         nDays;//Number of days
    
    //Initialize Variables
    in.open("weather.dat",ios::in);
    
    //Input the data first Row in Weather Data
    input(in,weather,nMonths,nDays);
    
    //Now Display the information
    display(weather,nMonths,nDays);

    //Exit the program
    in.close();
    return 0;
}

void display(const char weather[][DAYS],int nMonths,int nDays){
    //Now Display the information
    cout<<nMonths<<" "<<nDays<<endl;
    for(int nRow=0;nRow<nMonths;nRow++){
        for(int nCols=0;nCols<nDays;nCols++){
            cout<<weather[nRow][nCols];
        }
        cout<<endl;
    }
}

void input(fstream &in,char weather[][DAYS],int &nMonths,int &nDays){
    //Input the data first Row in Weather Data
    in>>nMonths>>nDays;
    for(int nRow=0;nRow<nMonths;nRow++){
        for(int nCols=0;nCols<nDays;nCols++){
            in>>weather[nRow][nCols];
        }
    }
}