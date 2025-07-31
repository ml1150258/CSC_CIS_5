/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 14th, 2025, 12:45 PM
 * Purpose:  Some more complex recursions
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //Time to set the random number seed
#include <cmath>     //Math library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Recursive Function Comparison
int linMax(int *,int);
int mrkMax(int *,int,int);

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
 
    int a[]={1,2,3,4,5,4,3,2,1};
    int b[]={6,5,4,3,4,5,3,2,1};
    int d[]={1,2,3,4,5,6,7,8,9};
    
    cout<<"Max a = "<<mrkMax(a,0,9)<<" = "<<linMax(a,9)<<endl;
    cout<<"Max b = "<<mrkMax(b,0,9)<<" = "<<linMax(b,9)<<endl;
    cout<<"Max d = "<<mrkMax(d,0,9)<<" = "<<linMax(d,9)<<endl;
    
    //Clean up the code, close files, deallocate memory, etc....

    
    //Exit stage right
    return 0;
}

int linMax(int *a,int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i])max=a[i];
    }
    return max;
}

int mrkMax(int *a,int beg,int end){
    //Base Case
    if(end-beg<=1)return a[beg];
    //Recursive function
    int half=(beg+end)/2;
    int m1=mrkMax(a,beg,half);
    int m2=mrkMax(a,half,end);
    return m1>m2?m1:m2;
}