/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feb 29th, 2024, 10:30 PM
 * Purpose:  How to read in strings and chars
 *           also showing the cin.ignore
 */

//System Libraries
#include <iostream>  //Input-Ouput Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    const int SIZE=80;
    char cName[SIZE]; //Character Array
    string sName;     //String Object
    int test1,test2;  //Test the ignore function
    
    //Initialize all variables
    cout<<"Input 2 Full Names, First and Last with an integer after each"<<endl;
    cin.getline(cName,SIZE);
    cin>>test1;
    cin.ignore();
    getline(cin,sName);
    cin>>test2;
    
    //Process or Map solutions

    //Display the output
    cout<<"Name 1 = "<<cName<<endl;
    cout<<"Name 2 = "<<sName<<endl;

    //Exit the Program
    return 0;
}