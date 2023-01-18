/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Factorial
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int n,fact;
    
    //Input or initialize values Here
    n=5;
    fact=1;
    
    //Process/Calculations Here
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    //Output the results
    cout<<n<<"!="<<fact<<endl;
 
    //Exit
    return 0;
}
