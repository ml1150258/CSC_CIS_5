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

//Function Prototypes
void calcSavings(float [], float [], int [], float,int);
void display(const float [], const float [], const int [], int);
void init(float [], float [], int [],int,float &,int &);

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    const int SIZE = 14;  //Size of the array, not used here but kept for reference
    float savings[SIZE],  //Savings array, not used in this version
          interest[SIZE], //Interest array, not used in this version
          intRate;        //Interest Rate %/year
    int   yrs[SIZE],      //Year Array
          nCmPrds;        //Number of Periods  year

    //Initialize Variables
    init(savings, interest, yrs, SIZE, intRate, nCmPrds);

    //Process - Map the inputs to outputs
    calcSavings(savings, interest, yrs, intRate, nCmPrds);

    //Display the results
    display(savings, interest, yrs, nCmPrds);

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}

void init(float savings[], float interest[],
          int yrs[],int SIZE,float &intRate,int &nCmPrds) {
    //Initialize Variables
    savings[0] = 100.0f; //Example Present Value
    intRate = 6.0e-2f; //Example Interest Rate
    nCmPrds = SIZE-1; //Example Number of Compounding Periods
    interest[0] = 0.0f; //Initialize interest array
    yrs[0] = 0; //Initialize year array
}

void display(const float savings[], const float interest[], 
             const int yrs[], int nCmPrds) {
    //Display the results
    cout<<fixed<<setprecision(2)<<showpoint; //Set output format for currency
    cout<<"Year   Savings  Interest"<<endl;
    cout<<"--------------------------"<<endl;
    for(int year = 0; year < nCmPrds; year++){
        cout<<setw(4)<<yrs[year]<<setw(10)<<savings[year]; //Display the year and present value
        cout<<setw(10)<<interest[year]<<endl; //Display interest earned
    }   
}

void calcSavings(float savings[], float interest[],
                 int yrs[], float intRate, int nCmPrds) {
    //Process - Map the inputs to outputs
    for(int year = 1; year <= nCmPrds; year++){
        yrs[year] = year; //Store the year
        interest[year-1] = savings[year-1] * intRate; //Calculate interest
        savings[year]= savings[year-1]+interest[year-1]; //Update present value
    }       
}