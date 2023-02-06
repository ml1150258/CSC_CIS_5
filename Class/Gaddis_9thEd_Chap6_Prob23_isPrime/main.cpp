/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 28th, 2022, 10:05 AM
 * Purpose:  Prime Function
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cmath>     //Math Library for Square Root
#include <iomanip>   //Format Library
#include <fstream>   //File stream Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
bool isPrime(unsigned int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    fstream out;
    unsigned int endPt,wide,cnt,perLine;
    
    //Initialize Variables
    out.open("prime.dat",ios::out);
    cout<<"This program finds Prime Numbers"<<endl;
    cout<<"Input the range of numbers n>1 to display list"<<endl;
    cout<<"Input an integer representing the endpoint of the range"<<endl;
    cin>>endPt;
    cout<<"Input the number of columns per line"<<endl;
    cin>>perLine;
    
    //Map the inputs/known to the outputs
    //Determine the width
    cout<<"All the prime numbers between 2 and "<<endPt<<endl<<endl;
    out<<"All the prime numbers between 2 and "<<endPt<<endl<<endl;
    wide=log(endPt)/log(10)+2;//Power of 10 with 2 space buffer
    cnt=-1;
    for(int i=1;i<=endPt;i++){
        if(isPrime(i)){
            cout<<setw(wide)<<i;
            out<<setw(wide)<<i;
            cnt++;
            if((cnt%perLine) == (perLine-1)){
                cout<<endl;//New row
                out<<endl;//New row
            }
        }
    }
    cout<<endl<<"There are "<<cnt<<" prime numbers < "<<endPt<<endl;
    out<<endl<<"There are "<<cnt<<" prime numbers < "<<endPt<<endl;
    
    //Clear Up
    out.close();

    //Exit the program
    return 0;
}

bool isPrime(unsigned int n){
    //Initialize Variables, Base Conditions
    if(n==0 || n==1)return false;//Not Prime
    if(n==2)return true;//2 is Prime
    unsigned int stpPnt=sqrt(n)+1;//Stopping point in search of Prime
    //Loop to find and multiplicative factor
    for(int test=2;test<=stpPnt;test++){
        if(n%test==0)return false;
    }
    return true;
}