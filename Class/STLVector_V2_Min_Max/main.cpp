/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on April 16th, 2024, 6:45 PM
 * Purpose:  Example Vectors with Functions
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Library for the Rand function
#include <ctime>     //Time Library to set Random Number seed
#include <vector>    //STL Dynamic Array Class
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void filAray(vector<int> &);
void prntAry(vector<int> &,int);
int  minMax(vector<int> &,int &);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=500;
    vector<int> array(size);
    int mmin,mmax;
    
    //Initialize Variables
    filAray(array);
    
    //Map/Process the Inputs -> Outputs
    mmin=minMax(array,mmax);
    
    //Display Inputs/Outputs
    cout<<"The min of the array = "<<mmin<<endl;
    cout<<"The max of the array = "<<mmax<<endl;
    prntAry(array,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

int  minMax(vector<int> &a,int &mmax){
    //Declare variables
    int mmin;
    
    //Initialize values
    mmin=mmax=a[0];
    
    //Process to find Min and Max
    int n=a.size();
    for(int i=1;i<n;i++){
        if(mmax<a[i])mmax=a[i];
        if(mmin>a[i])mmin=a[i];
    }
    
    //Return the min
    return mmin;
}

void prntAry(vector<int> &a,int perLine){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

void filAray(vector<int> &a){
    int base=100;
    int range=200;
    for(int i=0;i<a.size();i++){
        a[i]=rand()%(range+1)+base;//[100-300]
    }
}