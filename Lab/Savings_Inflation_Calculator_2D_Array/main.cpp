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
const int COLS=3;//Number of columns in our table

//Function Prototypes
void initial(string &,fstream &,float [][COLS],float &);
void heading(fstream &,unsigned char &,const float [][COLS],float &);
void compute(float [][COLS],unsigned char,float);
void display(const float [][COLS],unsigned char,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string ifname;//Input file name
    fstream in;//Input/output File declaration
    const int SIZE=80;//max Size of Output file name
    const int SIZEP=100;//max Size of the Savings/Cost array
    float p[SIZEP][COLS],//Principle/Price $'s, int_inf, year
          i,//Interest/Inflation rate in %
          s;//Savings/Cost in $'s
    unsigned char n;//Number of compounding periods in years
    
    //Initialize Variables
    initial(ifname,in,p,i);
    
    //The Process -> Map Inputs to Outputs
    //Output the Information and Instructions
    heading(in,n,p,i);

    //Model Computation for Parallel Arrays
    compute(p,n,i);
    
    //View Display Arrays Here
    display(p,n,i);
    
    //Close Files
    in.close();

    //Exit the Program
    return 0;
}

void display(const float p[][COLS],unsigned char n,float i){
    cout<<fixed<<setprecision(2)<<showpoint;//Format floats
    for(int year=0;year<=n;year++){
        cout<<setw(4)<<static_cast<int>(p[year][2])<<"     $"
                <<setw(5)<<p[year][0]
                <<"         $"<<setw(5)<<p[year][1]<<endl;
    }
}

void compute(float p[][COLS],unsigned char n,float i){
    for(int year=0;year<=n;year++){
        p[year][1]=p[year][0]*i;//Calculate the interest/inflation each year
        p[year][2]=year;
        p[year+1][0]=p[year][0]+p[year][1];//Add the interest/inflation each year
    }
}

void heading(fstream &in,unsigned char &n,const float p[][COLS],float &i){
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
    cout<<"Principle/Cost = $"<<p[0][0]<<endl;
    cout<<"Interest Rate/Inflation Rate = "<<i<<"%"<<endl;
    cout<<"Number of compounding periods = "
            <<static_cast<unsigned int>(n)<<" years"<<endl;
    cout<<"Year  Savings/Cost  Interest/Inflation"<<endl;
    //Loop on the number of compounding periods
    i/=CNVPERC;//Convert to decimal
}

void initial(string &ifname,fstream &in,float p[][COLS],float &i){
    ifname="input.dat";//Input file name
    in.open(ifname,ios::in);//Input File Instructions
    p[0][0]=1.0e2f;//$100
    i=6.0e0f;//6 percent interest/inflation
}