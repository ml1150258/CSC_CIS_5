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
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
void fillAry(vector<vector<int>> &,int,int,int);
void prntAry(const vector<vector<int>> &,int,int);
void prntAry(const vector<vector<int>> &,const string [],int);
void prmAry(const vector<vector<int>> &,string [],int);
bool isPrime(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    const int ROWS=1000;
    const int COLS=2;
    vector<vector<int>> array(ROWS);
    string msg[ROWS];
    int offSet=300;
    
    //Initialize the Array
    fillAry(array,offSet,ROWS,COLS);
 
    //Display the output
    prntAry(array,ROWS,10);
    
    //Create a parallel array stipulating is prime or is not prime;
    prmAry(array,msg,ROWS);
    prntAry(array,msg,ROWS);

    //Exit the Program
    return 0;
}

void prmAry(const vector<vector<int>> &a,string msg[],int n){
    for(int i=0;i<n;i++){
        if(isPrime(a[i][1])){
            msg[i]=" is Prime";
        }else{
            msg[i]=" is not Prime";
        }
    }
}

void fillAry(vector<vector<int>> &a,int offSet,int n,int c){
    for(int i=0;i<n;i++){
        vector<int> a[i](c);
    }
    for(int i=0;i<n;i++){
        a[i][0]=i+1;      //The Count
        a[i][1]=i+offSet; //The number to determine if Prime
    }
}

void prntAry(const vector<vector<int>> &a,const string msg[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Number in Array -> "<<a[i][0]<<setw(6)<<a[i][1]<<msg[i]<<endl;
    }
    cout<<endl;
}

void prntAry(const vector<vector<int>> &a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(6)<<a[i][1];
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