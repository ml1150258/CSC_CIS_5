/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on May 5th, 2022, 10:40 AM
 * Purpose:  Savings Table
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const char PERCENT=100;//Percent Conversion
const int COLS=4;//Number of Columns in the 2D Floating Array

//Function Prototypes
void model(int,float,float [][COLS]);
void  view(int,float,float [][COLS]);

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const int SIZE=100;
    float   balance,//Balance to start $'s
            intRate;//Interest in %
    int     numCmpd;//Number of years, compounding periods
    //COLS 0-> Year, 1-> Date, 2-> Savings, 3-> Interest
    float   save[SIZE][COLS];
    
    //Initial Variables
    balance=1e2f;//$100
    intRate=6.0/PERCENT;//6 Percent
    save[0][1]=2022;//This year
    numCmpd=12;//12 Years
    save[0][2]=balance;
    
    //Map the Inputs to the Outputs
    model(numCmpd,intRate,save);
    
    //Display the Inputs and Outputs
    view(numCmpd,intRate,save);
    

    //Exit the code
    return 0;
}

void  view(int numCmpd,float intRate,float save[][COLS]){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"      $ "<<save[0][2]<<"  = Initial Balance in $'s"<<endl;
    cout<<"         "<<intRate*PERCENT<<"%  = Interest Rate %"<<endl;
    cout<<endl;
    cout<<"              Balance      Interest"<<endl;
    cout<<"Year  Date  Beg of Year  End of Year"<<endl;
    for(int year=0;year<=numCmpd;year++){
        cout<<setw(4)<<static_cast<int>(save[year][0])<<setw(6)
                <<static_cast<int>(save[year][1])
                <<"   $"<<setw(7)<<save[year][2]<<"      $"
                <<setw(7)<<save[year][3]<<endl;
    }
}

void model(int numCmpd,float intRate,float save[][COLS]){
    //Computations for all array elements -> Copying formulas in Spreadsheet
    for(int year=0;year<=numCmpd;year++){
        save[year][0]=year;
        save[year][3]=save[year][2]*intRate;
        save[year+1][1]=save[year][1]+1;
        save[year+1][2]=save[year][2]+save[year][3];
    }
}