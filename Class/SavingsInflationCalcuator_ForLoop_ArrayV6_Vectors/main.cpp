/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 31st, 2023, 9:50 AM
 * Purpose:  Savings and Inflation Calculator
 *           Utilizing Arrays!
 *           Design Pattern MVC
 *           Parallel Arrays
 *           Functions
 *           Vectors
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
#include <vector>    //STL Vector Class Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const unsigned char PERCENT=100;//Percent Conversion

//Function Prototypes
void calcul8(vector<float> &,vector<float> &,vector<unsigned short> &,float,int);
void display(vector<float> &,vector<float> &,vector<unsigned short> &,int);
void heading(float,float,unsigned short);
void initial(unsigned char &,float &,vector<float> &,float &,
        unsigned short &,vector<unsigned short> &,const int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    const int SIZE=100;//Max array size = 100 for 100 years
    float bp,//Initial balance or price $'s
          i;//Interest, Investment Rate or Inflation Rate %
    vector<float> sc(SIZE);//Savings or cost over time $'s
    vector<float> interest(SIZE);//Interest $'s at the end of the year
    unsigned char n;//Number of compounding periods years     
    unsigned short yrStrt;//Date year variables
    vector<unsigned short> yrDate(SIZE);//Date year variables
    
    //Initialize Variables
    initial(n,bp,sc,i,yrStrt,yrDate,SIZE);
    
    //Display Header
    heading(bp,i,yrStrt);
    
    //Map/Process the Inputs -> Outputs
    calcul8(sc,interest,yrDate,i,n);
    
    //Display the results
    display(sc,interest,yrDate,n);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void initial(unsigned char &n,float &bp,vector<float> &sc,float &i,
        unsigned short &yrStrt,vector<unsigned short> &yrDate,
        const int SIZE){
    //Initialize Variables
    n=2.4e1f;//24 years
    n=n<SIZE?n:SIZE-1;//Safety so n < SIZE
    bp=1.0e2f;//$100.00
    sc[0]=bp;//Initialize our savings or cost
    i=6;//Inv/Inf rate in Percent
    yrStrt=2023;//This year
    yrDate[0]=yrStrt;//Start the array at the beginning
}

void heading(float bp,float i,unsigned short yrStrt){
    //Display Header
    cout<<"Savings or Cost Calculator"<<endl<<endl;
    cout<<"$"<<bp<<" = Balance or Price"<<endl;
    cout<<i<<"% = Interest/Investment or Information Rate"
            <<endl<<endl;
    cout<<"Year    Amount    Rate"<<endl;
    cout<<setw(4)<<yrStrt<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<bp;
}

void display(vector<float> &sc,vector<float> &interest,
        vector<unsigned short> &yrDate,int n){
    //Display the results
    for(int year=1;year<=n;year++){
        cout<<"  $"<<setw(5)<<interest[year-1]<<endl;
        cout<<setw(4)<<yrDate[year]<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint
            <<setw(6)<<sc[year];
    }
    cout<<"  $"<<setw(5)<<interest[n]<<endl;
}

void calcul8(vector<float> &sc,vector<float> &interest,
        vector<unsigned short> &yrDate,float i,int n){
    //Map/Process the Inputs -> Outputs
    i/=PERCENT;
    for(int year=1;year<=n;year++){
        yrDate[year]=yrDate[year-1]+1;
        interest[year-1]=sc[year-1]*i;
        sc[year]=sc[year-1]+interest[year-1];
    }
    interest[n]=sc[n]*i;
}