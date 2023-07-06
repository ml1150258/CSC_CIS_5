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
    fstream in,out;//Input/output File declaration
    const int SIZE=80;//max Size of Output file name
    char ofname[SIZE]="output.dat";//Output File Name
    float p,//Principle/Price $'s
          i,//Interest/Inflation rate in %
          s;//Savings/Cost in $'s
    unsigned char n;//Number of compounding periods in years
    
    //Initialize Variables
    ifname="input.dat";//Input file name
    in.open(ifname,ios::in);//Input File Instructions
    out.open(ofname,ios::out);;//Output File Results
    p=1.0e2f;//$100
    i=6.0e0f;//6 percent interest/inflation
    
    //The Process -> Map Inputs to Outputs
    //Output the Information and Instructions
    while(in>>instruc){
        cout<<instruc<<" ";
    }
    //Calculate n by the rule of 72
    n=72/i;//Rule of 72 or 72/n=i
    //Display the Heading
    out<<"     Savings/Inflation Calculator"<<endl;
    out<<endl;
    out<<"Principle/Cost = $"<<p<<endl;
    out<<"Interest Rate/Inflation Rate = "<<i<<"%"<<endl;
    out<<"Number of compounding periods = "
            <<static_cast<unsigned int>(n)<<" years"<<endl;
    out<<"Year  Savings/Cost  Interest/Inflation"<<endl;
    //Loop on the number of compounding periods
    i/=CNVPERC;//Convert to decimal
    out<<fixed<<setprecision(2)<<showpoint;//Format floats
    
    int year=0;
    while(year<=n){
        float int_inf=p*i;//Calculate the interest/inflation each year
        out<<setw(4)<<year<<"     $"
                <<setw(5)<<p
                <<"         $"<<setw(5)<<int_inf<<endl;
        p+=int_inf;//Add the interest/inflation each year
        year++;
    }
    cout<<endl<<endl<<"Look at output file"<<endl;
    
    //Close Files
    in.close();
    out.close();

    //Exit the Program
    return 0;
}