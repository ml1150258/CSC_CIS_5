/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 6th, 2023, 10:16 AM
 * Purpose:  Inflation/Savings Calculator
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <fstream>//File Input/Output Library
#include <iomanip>//Formatting Library
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions and Higher Dimension only
const unsigned char CNVPERC=100;//Conversion to and from Percentage

//Function Prototypes
void initial(string &,fstream &,float [],float &);
void heading(fstream &,unsigned char &,const float [],float &);
void compute(float [],float [],char [],unsigned char,float);
void display(const float [],const float [],const char [],unsigned char,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string ifname;//Input file name
    fstream in;//Input/output File declaration
    const int SIZE=80;//max Size of Output file name
    const int SIZEP=100;//max Size of the Savings/Cost array
    float p[SIZEP],//Principle/Price $'s
          i,//Interest/Inflation rate in %
          s;//Savings/Cost in $'s
    float int_inf[SIZEP];//Interest/inflation per year
    char yrAry[SIZEP];//Hold the year values
    unsigned char n;//Number of compounding periods in years
    
    //Initialize Variables
    initial(ifname,in,p,i);
    
    //The Process -> Map Inputs to Outputs
    //Output the Information and Instructions
    heading(in,n,p,i);

    //Model Computation for Parallel Arrays
    compute(p,int_inf,yrAry,n,i);
    
    //View Display Arrays Here
    display(p,int_inf,yrAry,n,i);
    
    //Close Files
    in.close();

    //Exit the Program
    return 0;
}

void display(const float p[],const float int_inf[],const char yrAry[],
        unsigned char n,float i){
    cout<<fixed<<setprecision(2)<<showpoint;//Format floats
    for(int year=0;year<=n;year++){
        cout<<setw(4)<<static_cast<int>(yrAry[year])<<"     $"
                <<setw(5)<<p[year]
                <<"         $"<<setw(5)<<int_inf[year]<<endl;
    }
}

void compute(float p[],float int_inf[],char yrAry[],unsigned char n,float i){
    for(int year=0;year<=n;year++){
        int_inf[year]=p[year]*i;//Calculate the interest/inflation each year
        yrAry[year]=year;
        p[year+1]=p[year]+int_inf[year];//Add the interest/inflation each year
    }
}

void heading(fstream &in,unsigned char &n,const float p[],float &i){
    //The Process -> Map Inputs to Outputs
    //Output the Information and Instructions
    string instruc;//Instruction String
    while(in>>instruc){
        cout<<instruc<<" ";
    }
    //Calculate n by the rule of 72
    n=72/i;//Rule of 72 or 72/n=i
    //Display the Heading
    cout<<"     Savings/Inflation Calculator"<<endl;
    cout<<endl;
    cout<<"Principle/Cost = $"<<p[0]<<endl;
    cout<<"Interest Rate/Inflation Rate = "<<i<<"%"<<endl;
    cout<<"Number of compounding periods = "
            <<static_cast<unsigned int>(n)<<" years"<<endl;
    cout<<"Year  Savings/Cost  Interest/Inflation"<<endl;
    //Loop on the number of compounding periods
    i/=CNVPERC;//Convert to decimal
}

void initial(string &ifname,fstream &in,float p[],float &i){
    ifname="input.dat";//Input file name
    in.open(ifname,ios::in);//Input File Instructions
    p[0]=1.0e2f;//$100
    i=6.0e0f;//6 percent interest/inflation
}