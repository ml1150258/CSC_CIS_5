/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on February 15, 2022, 11:49 AM
 * Purpose:  C++ Template
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
#include <cstring>   //String Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=80;
    char name[SIZE];
    string city;
    int x,y,z;
    
    //Initial Variables
    cout<<"Type in a Name"<<endl;
    cin.getline(name,SIZE);
    cout<<name<<endl<<endl;
    cout<<"Type in a City"<<endl;
    getline(cin,city);
    cout<<city<<endl<<endl;
    
    //Add inputs
    cout<<"Input 3 values"<<endl;
    cin>>x>>y>>z;
    cout<<"x="<<x<<" , y="<<y<<" , z="<<z<<endl<<endl;
    cin.ignore();
    
    //Initial Variables Again
    cout<<"Type in a Name"<<endl;
    cin.getline(name,SIZE);
    cout<<name<<endl<<endl;
    cout<<"Type in a City"<<endl;
    getline(cin,city);
    cout<<city<<endl<<endl;

    //Exit the code
    return 0;
}

