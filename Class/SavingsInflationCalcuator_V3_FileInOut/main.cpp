/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 18th, 2023, 10:15 AM
 * Purpose:  Savings and Inflation Calculator
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
#include <fstream>   //File I/O Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const unsigned char PERCENT=100;//Percent Conversion

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float bp,//Initial balance or price $'s
          sc,//Savings or cost over time $'s
           i;//Interest, Investment Rate or Inflation Rate %
    unsigned short n;//Number of compounding periods years 
    fstream in,out;//Input, Output file    
    
    //Initialize Variables
    in.open("input.dat",ios::in);
    out.open("table.dat",ios::out);
    in>>n>>bp>>i;
    sc=bp;//Initialize our savings or cost
    
    //Display Header
    out<<"Savings or Cost Calculator"<<endl<<endl;
    out<<"$"<<bp<<" = Balance or Price"<<endl;
    out<<i<<"% = Interest/Investment or Information Rate"
            <<endl<<endl;
    out<<"Year   Amount    Rate"<<endl;
    out<<setw(3)<<0<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<bp;
    
    //Map/Process the Inputs -> Outputs
    i/=PERCENT;
    for(int year=1;year<=n;year++){
        float interest=sc*i;
        out<<"  $"<<setw(5)<<interest<<endl;
        sc+=interest;
        out<<setw(3)<<year<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<sc;
    }
    out<<"  $"<<setw(5)<<sc*i<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}