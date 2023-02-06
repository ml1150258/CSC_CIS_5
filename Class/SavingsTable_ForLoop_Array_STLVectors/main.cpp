/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on May 5th, 2022, 10:40 AM
 * Purpose:  Savings Table
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
#include <vector>    //STL Vector
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const char PERCENT=100;//Percent Conversion

//Function Prototypes
void model(int,float,vector<int> &, vector<int> &,vector<float> &,vector<float> &);
void  view(int,float,const vector<int> &,const vector<int> &,
        const vector<float> &,const vector<float> &);

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    int           size=100;
    float         balance,//Balance to start $'s
                  intRate;//Interest in %
    int           numCmpd;//Number of years, compounding periods
    vector<int>   initD8(size);
    vector<int>   nYear(size);
    vector<float> savings(size);
    vector<float> interst(size);
    
    
    //Initial Variables
    balance=1e2f;//$100
    intRate=6.0/PERCENT;//6 Percent
    initD8[0]=2022;//This year
    numCmpd=12;//12 Years
    savings[0]=balance;
    
    //Map the Inputs to the Outputs
    model(numCmpd,intRate,nYear,initD8,interst,savings);
    
    //Display the Inputs and Outputs
    view(numCmpd,intRate,nYear,initD8,interst,savings);
    

    //Exit the code
    return 0;
}

void  view(int numCmpd,float intRate,const vector<int> &nYear,const vector<int> &initD8
                        ,const vector<float> &interst,const vector<float> &savings){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"      $ "<<savings[0]<<"  = Initial Balance in $'s"<<endl;
    cout<<"         "<<intRate*PERCENT<<"%  = Interest Rate %"<<endl;
    cout<<endl;
    cout<<"              Balance      Interest"<<endl;
    cout<<"Year  Date  Beg of Year  End of Year"<<endl;
    for(int year=0;year<=numCmpd;year++){
        cout<<setw(4)<<nYear[year]<<setw(6)<<initD8[year]
                <<"   $"<<setw(7)<<savings[year]<<"      $"
                <<setw(7)<<interst[year]<<endl;
    }
}

void model(int numCmpd,float intRate,vector<int> &nYear,vector<int> &initD8
              ,vector<float> &interst,vector<float> &savings){
    //Computations for all array elements -> Copying formulas in Spreadsheet
    for(int year=0;year<=numCmpd;year++){
        nYear[year]=year;
        interst[year]=savings[year]*intRate;
        initD8[year+1]=initD8[year]+1;
        savings[year+1]=savings[year]+interst[year];
    }
}