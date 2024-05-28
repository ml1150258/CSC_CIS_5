/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on May 23rd, 2024, 11:03 AM
 * Purpose:  Array Table
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
struct Table{
    int *x;
    int *sqrx;
    int *cubex;
};

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    int size=11;
    Table table;
    
    //Initialize Variables
    table.x=new int[size];
    table.sqrx=new int[size];
    table.cubex=new int[size];
    
    //Map/Process the Inputs -> Outputs
    for(int i=0;i<size;i++){
        table.x[i]=i;
        table.sqrx[i]=table.x[i]*table.x[i];
        table.cubex[i]=table.sqrx[i]*table.x[i];
    }
    
    //Display Inputs/Outputs
    cout<<setw(10)<<"X"<<setw(10)<<"SQRX"<<setw(10)<<"CUBEX"<<endl;
    for(int i=0;i<size;i++){
        cout<<setw(10)<<table.x[i]
            <<setw(10)<<table.sqrx[i]
            <<setw(10)<<table.cubex[i]<<endl;
    }
    
    //Clean up memory and files
    delete []table.x;
    delete []table.sqrx;
    delete []table.cubex;
    
    //Exit the Program
    return 0;
}