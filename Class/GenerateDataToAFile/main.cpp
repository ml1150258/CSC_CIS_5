/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2022, 10:20 aM
 * Purpose:  Generate Random Data then Save in a File
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>   //File I/O Library
#include <cstdlib>   //For the random number function
#include <ctime>     //Time the set the random seed
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    fstream out;   //File stream containing the random data
    string filName;//Name of output stream file
    int random,    //Random number to print to file
        nRand;     //Number of random integers to generate   
    
    //Initialize Variables
    nRand=100;
    filName="random.dat";
    out.open(filName,ios::out);
    
    //Map inputs to outputs -> The Process
    for(int i=1;i<=nRand;i++){
        random=rand()%90+10;//[10-100]
        out<<random<<endl;
        cout<<setw(3)<<i<<" "<<random<<endl;
    }
    
    //Close file
    out.close();

    //Exit stage right
    return 0;
}

