/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 19, 2022, 11:35 AM
 * Purpose:  Savings with Rule of 72
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char PERCENT=100;//Conversion to Decimal from Percent

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,    //Present Value in $'s
     intRate,    //Interest Rate in %
      intrst,    //Yearly interest $'s
          fv;    //Future Value in $'s
    unsigned char nCmpPds;//Number of compounding periods years
    unsigned short stYear;//Starting Year 
    
    //Initialize Variables
    pv=1e2f;//$100
    intRate=9;//9%
    stYear=2022;//Year to start savings
    
    //Map the inputs/known to the outputs
    //Display the outputs
    nCmpPds=72/intRate;//Number of years to approx double initial Savings
    intRate/=PERCENT;
    fv=pv;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<pv<<" = Initial Principle $'s"<<endl;
    cout<<intRate*PERCENT<<"% = Interest Rate %"<<endl;
    cout<<endl<<setw(10)<<"Years"<<setw(10)<<"Year"
                <<setw(15)<<"Retirement"<<setw(10)<<"Interest"<<endl;
    for(int years=0;years<=nCmpPds;years++){
        intrst=fv*intRate;
        cout<<setw(10)<<years<<setw(10)<<years+stYear
                <<setw(15)<<fv<<setw(10)<<intrst<<endl;
        fv+=intrst;
    }

    //Exit the program
    return 0;
}