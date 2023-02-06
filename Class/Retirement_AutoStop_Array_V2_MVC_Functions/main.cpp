/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 1st, 2022, 11:05 AM
 * Purpose:  Savings
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
void retCalc(float [],float [],int [],int [],
             float [],float,float,int);
void heading(float,float,float,float,float);
void tabDisp(float [],int [],int [],
             float [],float [],float);
void init(float &,float &,unsigned short &,
          float &,float &,float &,
          float [],float []);

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float initSav,    //Initial Savings in $'s
          invRate,    //Investment Rate in %
           salary,    //Salary $'s/year
          percDep,    //Percent of Salary to save each year %
          req2Rtr;    //Required Savings to Retire with $'s
    unsigned short stYear;//Starting Year 
    const int SIZE=100;
    int   years[SIZE],//Index of the Arrays
           date[SIZE];//Date Year
    float retSavs[SIZE],//Retirement Savings $'s
          intrst[SIZE], //Interest/Year $'s
          yrlyDep[SIZE];//Yearly Deposit

    //Initialize Variables
    init(initSav,invRate,stYear,salary,percDep,req2Rtr,
         retSavs,yrlyDep);

    //Business Logic/Computations
    retCalc(retSavs,intrst,years,date,yrlyDep,
            req2Rtr,invRate,stYear);
    
    //Display the Arrays
    heading(initSav,invRate,percDep,salary,req2Rtr);
    tabDisp(retSavs,years,date,intrst,yrlyDep,req2Rtr);

    //Exit the program
    return 0;
}
void init(float &initSav,float &invRate,unsigned short &stYear,
          float &salary,float &percDep,float &req2Rtr,
          float retSavs[],float yrlyDep[]){
        //Initialize Variables
    initSav=0;//$0 change if you have retirement to this point
    invRate=5;//5%
    stYear=2022;//Year to start savings
    salary=1e5f;//$100,000
    percDep=10; //10%
    
    //Map the inputs/known to the outputs
    //Display the outputs
    invRate/=PERCENT;
    percDep/=PERCENT;
    retSavs[0]=initSav;
    req2Rtr=salary/invRate;
    yrlyDep[0]=salary*percDep;
}

void tabDisp(float retSavs[],int years[],int date[],
             float intrst[],float yrlyDep[],float req2Rtr){
    //Table Display
    for(int yrs=0;retSavs[yrs]<req2Rtr;yrs++){
        cout<<setw(10)<<years[yrs]<<setw(10)<<date[yrs]
                <<setw(15)<<retSavs[yrs]<<setw(10)<<intrst[yrs]
                <<setw(10)<<yrlyDep[yrs]<<endl;
    }    
}

void heading(float initSav,float invRate,float percDep,
             float salary,float req2Rtr){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<initSav<<" = Initial Principle $'s"<<endl;
    cout<<invRate*PERCENT<<"% = Investment Rate %"<<endl;
    cout<<"$"<<salary<<" = Salary/Income at Retirement"<<endl;
    cout<<percDep*PERCENT<<" = % Salary to Deposit for Retirement"<<endl;
    cout<<"$"<<req2Rtr<<" = Savings required to Retire"<<endl;
    cout<<endl<<setw(10)<<"Years"<<setw(10)<<"Year"
                <<setw(15)<<"Retirement"<<setw(10)<<"Interest"
                <<setw(10)<<"Deposit"<<endl;
}

void retCalc(float retSavs[],float intrst[],
        int years[],int date[],float yrlyDep[],
        float req2Rtr,float invRate,int stYear){
    //Table Calculations
    for(int yrs=0;retSavs[yrs]<req2Rtr;yrs++){
        intrst[yrs]=retSavs[yrs]*invRate;
        years[yrs]=yrs;
        date[yrs]=yrs+stYear;
        yrlyDep[yrs]=yrlyDep[0];
        retSavs[yrs+1]=retSavs[yrs]+intrst[yrs];
        retSavs[yrs+1]+=yrlyDep[yrs];
    }
}