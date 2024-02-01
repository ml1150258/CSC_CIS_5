/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29, 2024, 1:45 PM
 * Purpose:  Prime Investigation
 *
*/

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <cmath>     //Sqrt Function
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    int p;
    bool isPrime;
    
    //Initialize all variables
    p=97;
    
    //Process or Map solutions
    isPrime=true;
    for(int i=2;i<=sqrt(p)&&isPrime;i++){
        if(p%i==0)isPrime=false;
        cout<<p<<" "<<i<<endl;
    }

    //Display the output
    cout<<"The number "<<p<<(isPrime?" is ":" is not ")<<" Prime"<<endl;

    //Exit the Program
    return 0;
}