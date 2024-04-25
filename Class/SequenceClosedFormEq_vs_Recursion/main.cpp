/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 15th, 2024, 11:50 AM
 * Purpose:  Recursions
 */

//System Libraries
#include<iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
float addSeq1(float,float,int);
float addSeq2(float,float,int);
float addSeq3(float,float,int);
float mulSeq1(float,float,int);
float mulSeq2(float,float,int);
float mulSeq3(float,float,int);
float pow(float,int);
float powSeq1(float,int);
float powSeq2(float,int);
float powSeq3(float,int);
float comSeq1(float,float,float,int);
float comSeq2(float,float,float,int);
float comSeq3(float,float,float,int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float p,//Principle
          d,//Deposit
          i,//Investment or Inflation Rate
          c;//Some Rational Number
    int n;//Number of compounding periods
    
    //Initialize Variables
    p=1e2f;//$100
    d=1e1f;//$10
    n=10;//10years
    i=7.2e-2f;//.072 = 7.2 Percent Interest
    c=0.5f;//1/2
    
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"Seq Sum     addSeq1("<<p<<","<<d<<","<<n<<") = $"<<addSeq1(p,d,n)<<endl;
    cout<<"Formula     addSeq2("<<p<<","<<d<<","<<n<<") = $"<<addSeq2(p,d,n)<<endl;
    cout<<"Recursion   addSeq3("<<p<<","<<d<<","<<n<<") = $"<<addSeq3(p,d,n)<<endl;
    cout<<"Seq Product mulSeq1("<<p<<","<<i<<","<<n<<") = $"<<mulSeq1(p,i,n)<<endl;
    cout<<"Formula     mulSeq2("<<p<<","<<i<<","<<n<<") = $"<<mulSeq2(p,i,n)<<endl;
    cout<<"Recursion   mulSeq3("<<p<<","<<i<<","<<n<<") = $"<<mulSeq3(p,i,n)<<endl;
    cout<<"Seq Sum     powSeq1("<<c<<","<<n<<") = "<<powSeq1(c,n)<<endl;
    cout<<"Formula Sum powSeq1("<<c<<","<<n<<") = "<<powSeq2(c,n)<<endl;
    cout<<"Recursion   powSeq3("<<c<<","<<n<<") = "<<powSeq3(c,n)<<endl;
    
    //Initialize Variables
    p=0.0f;//$0
    d=1e4f;//$10k about 10% of $100k
    n=50;//50years
    i=0.05;//5%
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"Retirement Seq Sum     comSeq1("<<p<<","<<i<<","<<d<<","<<n<<") = "
            <<comSeq1(p,i,d,n)<<endl;
    cout<<"Retirement Formula Sum comSeq2("<<p<<","<<i<<","<<d<<","<<n<<") = "
            <<comSeq2(p,i,d,n)<<endl;
    cout<<"Retirement Recursion   comSeq3("<<p<<","<<i<<","<<d<<","<<n<<") = "
            <<comSeq3(p,i,d,n)<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

float comSeq1(float p,float i,float d,int n){
    float retSav=p;
    float c=(1+i);
    for(int i=1;i<=n;i++){
        retSav*=c;
        retSav+=d;
    }
    return retSav;
}

float comSeq2(float p,float i,float d,int n){
    float c=1+i;
    float powcn=pow(c,n);
    return p*powcn+d*(1-powcn)/(1-c);
}

float comSeq3(float p,float i,float d,int n){
    //Base Condition
    if(n<=0)return p;
    //Recursive Condition
    return (1+i)*comSeq3(p,i,d,n-1)+d;
}

float powSeq1(float c,int n){
    float sum=0;
    float pw=1;
    for(int i=0;i<=n;i++){
        sum+=pw;
        pw*=c;
    }
    return sum;
}
float powSeq2(float c,int n){
    return (1-pow(c,n+1))/(1-c);
}
float powSeq3(float c,int n){
    //Base Condition
    if(n<=0)return 1;
    //Recursion
    return powSeq3(c,n-1)+pow(c,n);
}

float pow(float x,int n){
    //Base Condition
    if(n<1)return 1;
    if(n==1)return x;
    //Recursion
    return x*pow(x,n-1);
}

float mulSeq3(float p,float i,int n){
    //Base Condition
    if(n<=0)return p;
    //Recursion
    return mulSeq3(p,i,n-1)*(1+i);
}

float mulSeq2(float p,float i,int n){
    return p*pow(1+i,n);
}

float mulSeq1(float p,float i,int n){
    for(int j=1;j<=n;j++){
        p*=(1+i);
    }
    return p;
}

float addSeq3(float p,float c,int n){
    //Base Condition
    if(n<=0)return p;
    //Recursion
    return addSeq3(p,c,n-1)+c;
}

float addSeq2(float p,float c,int n){
    return p+n*c;
}

float addSeq1(float fvp,float c,int n){
    for(int i=1;i<=n;i++){
        fvp+=c;
    }
    return fvp;
}