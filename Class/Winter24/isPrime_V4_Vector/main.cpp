/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29, 2024, 1:45 PM
 * Purpose:  Prime Investigation
 *
*/

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <iomanip>   //Format Library
#include <cmath>     //Sqrt Function
#include <vector>    //Dynamic Array
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
void fillAry(vector<int> &,int,int);
void prntAry(const vector<int> &,int,int);
void prntAry(const vector<int> &,const vector<string> &,int);
void prmAry(const vector<int> &,vector<string> &,int);
bool isPrime(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    const int SIZE=1000;
    vector<int> array(SIZE);
    vector<string> msg(SIZE);
    int offSet=0;
    
    //Initialize the Array
    fillAry(array,offSet,SIZE);
 
    //Display the output
    prntAry(array,SIZE,10);
    
    //Create a parallel array stipulating is prime or is not prime;
    prmAry(array,msg,SIZE);
    prntAry(array,msg,SIZE);

    //Exit the Program
    return 0;
}

void prmAry(const vector<int> &a,vector<string> &msg,int n){
    for(int i=0;i<n;i++){
        if(isPrime(a[i])){
            msg[i]=" is Prime";
        }else{
            msg[i]=" is not Prime";
        }
    }
}

void fillAry(vector<int> &a,int offSet,int n){
    for(int i=0;i<n;i++){
        a[i]=i+offSet;
    }
}

void prntAry(const vector<int> &a,const vector<string> &msg,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(6)<<a[i]<<msg[i]<<endl;
    }
    cout<<endl;
}

void prntAry(const vector<int> &a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(6)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

bool isPrime(int p){
    if(p<2)return false;
    bool isPrime=true;
    for(int i=2;i<=sqrt(p)&&isPrime;i++){
        if(p%i==0)isPrime=false;
    }
    return isPrime;
}