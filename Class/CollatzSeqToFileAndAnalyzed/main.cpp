/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 23rd, 2024, 12:20 PM
 * Purpose:  Collatz Sequence Count Written to File
 *           and used for analysis
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <fstream>   //Read and Write to a File
#include <cstring>   //String Library for copy
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int colatz1(int);
int colatz2(int);
void wrtSqFl(fstream &,int);
int  analyze(fstream &,int &,int &);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    fstream out;   //Variable to hold the output information
    fstream in;    //Variable to read for sequence information
    string fileout;//File to store information
    const int SIZE=50;//Char File Name SIZE
    char filein[SIZE];//file input
    int n,nFreq;         //Sequence to Investigate
    
    //Initialize Variables
    n=100;
    fileout="collatz_seq.dat";
    strcpy(filein,fileout.c_str());
    out.open(fileout,ios::out);
    in.open(filein,ios::in);
    
    //Map/Process the Inputs -> Outputs
    wrtSqFl(out,n);
    
    //Display Inputs/Outputs
    cout<<"Maximum Sequence Length from File = "<<analyze(in,n,nFreq)<<endl;
    cout<<"Sequence start where the Max Length Occurred = "<<n<<endl;
    cout<<"The number of times the Max Length Occurred  = "<<nFreq<<endl;
 
    //Clean up memory and files
    out.close();
    in.close();
    
    //Exit the Program
    return 0;
}

void wrtSqFl(fstream &out,int n){
    for(int i=2;i<=n;i++){
        out<<i<<" "<<colatz2(i)<<endl;
    }
}

int  analyze(fstream &in,int &nMax,int &nFreq){
    int seqLen=0;
    int maxLen=0;
    nFreq=0;
    int n;//Start of Sequence
    while(in>>n>>seqLen){
        if(maxLen<seqLen){
            nMax=n;
            maxLen=seqLen;
            nFreq=1;
        }else if(maxLen==seqLen){
            nFreq++;
        }
    }
    return maxLen;
}

int colatz2(int n){
    int count=1;
    do{
        if(n%2==0)n>>=1;//Divide by 2
        else{
            int t2=n<<1;//2x N
            n=t2+n;//Multiple by 3
            n++; //Add 1
        }
        count++;//Increment the sequence count
    }while(n!=1);//Exit when reaching 1
    return count;
}

int colatz1(int n){
    int count=1;
    do{
        if(n%2==0)n/=2;//Divide by 2
        else{
            n*=3;//Multiple by 3
            n++; //Add 1
        }
        count++;//Increment the sequence count
    }while(n!=1);//Exit when reaching 1
    return count;
}