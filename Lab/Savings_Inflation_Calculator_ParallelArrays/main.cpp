/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 6th, 2023, 10:16 AM
 * Purpose:  Inflation/Savings Calculator
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <fstream>//File Input/Output Library
#include <iomanip>//Formatting Library
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const unsigned char CNVPERC=100;//Conversion to and from Percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string ifname;//Input file name
    string instruc;//Instruction String
    fstream in;//Input/output File declaration
    const int SIZE=80;//max Size of Output file name
    const int SIZEP=100;//max Size of the Savings/Cost array
    float p[SIZEP],//Principle/Price $'s
          i,//Interest/Inflation rate in %
          s;//Savings/Cost in $'s
    float int_inf[SIZEP];//Interest/inflation per year
    char yrAry[SIZEP];//Hold the year values
    unsigned char n;//Number of compounding periods in years
    
    //Initialize Variables
    ifname="input.dat";//Input file name
    in.open(ifname,ios::in);//Input File Instructions
    p[0]=1.0e2f;//$100
    i=6.0e0f;//6 percent interest/inflation
    
    //The Process -> Map Inputs to Outputs
    //Output the Information and Instructions
    while(in>>instruc){
        cout<<instruc<<" ";
    }
    //Calculate n by the rule of 72
    n=72/i;//Rule of 72 or 72/n=i
    //Display the Heading
    cout<<"     Savings/Inflation Calculator"<<endl;
    cout<<endl;
    cout<<"Principle/Cost = $"<<p[0]<<endl;
    cout<<"Interest Rate/Inflation Rate = "<<i<<"%"<<endl;
    cout<<"Number of compounding periods = "
            <<static_cast<unsigned int>(n)<<" years"<<endl;
    cout<<"Year  Savings/Cost  Interest/Inflation"<<endl;
    //Loop on the number of compounding periods
    i/=CNVPERC;//Convert to decimal
    cout<<fixed<<setprecision(2)<<showpoint;//Format floats

    for(int year=0;year<=n;year++){
        int_inf[year]=p[year]*i;//Calculate the interest/inflation each year
        yrAry[year]=year;
        cout<<setw(4)<<static_cast<int>(yrAry[year])<<"     $"
                <<setw(5)<<p[year]
                <<"         $"<<setw(5)<<int_inf[year]<<endl;
        p[year+1]=p[year]+int_inf[year];//Add the interest/inflation each year
    }
    cout<<endl<<endl<<"Look at output file"<<endl;
    
    //Close Files
    in.close();

    //Exit the Program
    return 0;
}