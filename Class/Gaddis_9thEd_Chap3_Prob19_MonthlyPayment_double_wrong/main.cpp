/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 28, 2022, 10:15 PM
 * Purpose:  Monthly Payment
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cmath>   //Math Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float PERCENT=1e2f;//100 conversion to percent

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double loan,//Loan amount in dollars
        monPmt,//Monthly payment $'s
       intRate,//Interest Rate
       totPaid,//Total amount payback $'s
       intPaid;//Interest paid in $'s
    char nmCmpds;//Number of compounding periods i.e. Months
    
    //Initialize Variables
    loan=1e4f;//$10,000
    intRate=1/PERCENT;//1% per month
    nmCmpds=36;//36 months
    
    //Map inputs to outputs -> The Process
    float temp=pow(1+intRate,nmCmpds);//Utility/Intermediate variable
    monPmt=intRate*temp*loan/(temp-1);
    totPaid=monPmt*nmCmpds;
    intPaid=totPaid-loan;
    
    //Display Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount:           = $"<<loan<<endl;
    cout<<"Interest rate:         =      "<<intRate*PERCENT<<"%"<<endl;
    cout<<"Monthly Payment        = $  "<<monPmt<<endl;
    cout<<"Total Amount Paid      = $"<<totPaid<<endl;
    cout<<"Interest Paid          = $ "<<intPaid<<endl;

    //Exit stage right
    return 0;
}