/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 18th, 2023, 10:15 AM
 * Purpose:  Savings and Inflation Calculator
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
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
    unsigned char n;//Number of compounding periods years     
    
    //Initialize Variables
    n=2.4e1f;//24 years
    bp=1.0e2f;//$100.00
    sc=bp;//Initialize our savings or cost
    i=6;//Inv/Inf rate in Percent
    
    //Display Header
    cout<<"Savings or Cost Calculator"<<endl<<endl;
    cout<<"$"<<bp<<" = Balance or Price"<<endl;
    cout<<i<<"% = Interest/Investment or Information Rate"
            <<endl<<endl;
    cout<<"Year   Amount    Rate"<<endl;
    cout<<setw(3)<<0<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<bp;
    
    //Map/Process the Inputs -> Outputs
    i/=PERCENT;
    int year=1;
    do{
        float interest=sc*i;
        cout<<"  $"<<setw(5)<<interest<<endl;
        sc+=interest;
        cout<<setw(3)<<year<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<sc;
        year++;
    }while(year<=n);
    cout<<"  $"<<setw(5)<<sc*i<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}