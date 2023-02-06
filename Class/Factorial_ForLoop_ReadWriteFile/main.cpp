/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2021, 11:02 AM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <fstream>    //File I/O Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int fact,n;
    string outFile;
    char inFile[10]="n.dat";
    char answer;
    ofstream out;
    ifstream in;
    
    //Initialize variables here
    outFile="nFact.dat";
    out.open(outFile);
    
    //Map inputs to outputs here, i.e. the process
    do{
        in.open(inFile);
        while(in>>n){
            if(n>=1 && n<=12){
                fact=1;
                for(int i=1;i<=n;i++){
                    fact*=i;
                }
                out<<n<<"!="<<fact<<endl;
            }
        }
        cout<<"Would you like to run this again?"<<endl;
        cin>>answer;
        in.close();
    }while(answer=='Y');
    
    //Exit program, make sure to close your input/output files.
    out.close();

    return 0;
}