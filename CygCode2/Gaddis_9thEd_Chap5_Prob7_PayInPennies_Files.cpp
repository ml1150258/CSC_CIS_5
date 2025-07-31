/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2:00 PM
 * Purpose:  Pay In Pennies
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <fstream>    //File stream Library
#include <cmath>      //Bring in math Library for check
#include <string.h>   //String function Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const int CNVDLRS=100;//How many Pennies in a Dollar

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    unsigned int payPDay,//Pay per day in Pennies
                 totPay, //Total Pay at the end
                 hwMnyDy;//How many days we work
    fstream in,//File to read in the How Many Days
            outP,//File to output the Penny Results
            outD;//File to output the Dollar Results
    
    //Initialize variables here
    in.open("howManyDays.txt",ios::in);
    in>>hwMnyDy;//Number of days working
    cout<<endl<<"How many Days from the file is  = "
        <<hwMnyDy<<endl<<endl;
    
    string flNameP;//Declare the Filename with a string
    flNameP="pennies.txt";
    outP.open(flNameP,ios::out);

    const int SIZE=80;
    char flNameD[SIZE];//Declare the Filename with a char string
    strcpy(flNameD,"dollars.txt");
    outD.open(flNameD,ios::out);

    //Loop on all the days
    for(int thsMny=1;thsMny<=hwMnyDy;thsMny++){
        totPay=0; //0 to start
        payPDay=1;//1 Penny
        //Map inputs to outputs here, i.e. the process
        for(int day=1;day<=thsMny;day++){
            totPay+=payPDay;//Add each pay day to the total
            payPDay*=2;//Double each pay day
        }
        
        //Display the results
        outP<<endl<<"Number of pay days = "<<thsMny<<endl;
        outP<<"Pennies Earned = "<<totPay<<" cents"<<endl;
        outP<<"Pennies Earned = "<<(pow(2,thsMny)-1)<<" cents"<<endl;

        //Output the way Code-e was it formatted
        int nDlrs=totPay/CNVDLRS;//Number of Dollars
        int nPnnys=totPay%CNVDLRS;//Number of Pennies

        outD<<endl<<"Number of pay days = "<<thsMny<<endl;
        outD<<"Total Pay = $"<<nDlrs<<'.'
            <<(nPnnys<10?"0":"")<<nPnnys<<endl<<endl;
    }
    //Exit the Program
    in.close();
    outP.close();
    outD.close();

    return 0;
}