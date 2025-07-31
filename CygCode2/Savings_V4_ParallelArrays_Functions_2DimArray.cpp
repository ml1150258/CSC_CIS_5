/*
     Author: Dr. Mark E. Lehr
     Date:   July 23rd, 2025
     Purpose:  Savings Arrays
*/

//System Libraries
#include <iostream>  //Input/Output
#include <iomanip>   //For std::setprecision
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions
const int COLS = 2; //Number of columns in the savings array

//Function Prototypes
void calcSavings(float [][COLS], int [], float,int);
void display(float [][COLS], int [], int);
void init(float [][COLS], int [],int,float &,int &);

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    const int SIZE = 14;  //Size of the array, not used here but kept for reference
    float savInt[SIZE][COLS],  //Savings array, not used in this version
                         //Interest array, not used in this version
          intRate;        //Interest Rate %/year
    int   yrs[SIZE],      //Year Array
          nCmPrds;        //Number of Periods  year

    //Initialize Variables
    init(savInt, yrs, SIZE, intRate, nCmPrds);

    //Process - Map the inputs to outputs
    calcSavings(savInt, yrs, intRate, nCmPrds);

    //Display the results
    display(savInt, yrs, nCmPrds);

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}

void init(float savInt[][COLS],
          int yrs[],int SIZE,float &intRate,int &nCmPrds) {
    //Initialize Variables
    savInt[0][0]= 100.0f; //Example Present Value
    intRate = 6.0e-2f; //Example Interest Rate
    nCmPrds = SIZE-1; //Example Number of Compounding Periods
    savInt[0][1]= 0.0f; //Initialize interest array
    yrs[0] = 0; //Initialize year array
}

void display(float savInt[][COLS], int yrs[], int nCmPrds) {
    //Display the results
    cout<<fixed<<setprecision(2)<<showpoint; //Set output format for currency
    cout<<"Year   Savings  Interest"<<endl;
    cout<<"--------------------------"<<endl;
    for(int year = 0; year < nCmPrds; year++){
        cout<<setw(4)<<yrs[year]<<setw(10)<<savInt[year][0]; //Display the year and present value
        cout<<setw(10)<<savInt[year][1]<<endl; //Display interest earned
    }   
}

void calcSavings(float savInt[][COLS],
                 int yrs[], float intRate, int nCmPrds) {
    //Process - Map the inputs to outputs
    for(int year = 1; year <= nCmPrds; year++){
        yrs[year] = year; //Store the year
        savInt[year-1][1] = savInt[year-1][0] * intRate; //Calculate interest
        savInt[year][0]= savInt[year-1][0]+savInt[year-1][1]; //Update present value
    }       
}