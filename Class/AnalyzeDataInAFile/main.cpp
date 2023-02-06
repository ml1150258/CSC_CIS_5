/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2022, 10:20 aM
 * Purpose:  Analyze Data in a File
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>   //File I/O Library
#include <iomanip>   //Format Library
#include <cstring>   //The String Library
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    fstream in;   //File stream containing the random data
    const int SIZE=80;//Max Size of File Name
    char filName[SIZE];//Name of output stream file
    int random,    //Random number to read from file
            nRand, //Number of random numbers from the file
            mxNum, //Maximum number in the file
            mnNum, //Minimum number in the file
            sum;   //Sum of all the numbers in a file
    float average; //Average of the numbers in the file
    
    //Initialize Variables
    strcpy(filName,"random.dat");
    in.open(filName,ios::in);
    nRand=sum=0;
    
    //Map inputs to outputs -> The Process
    in>>random;
    mxNum=mnNum=random;
    nRand++;
    sum+=random;
    while(in>>random){
        if(mxNum<random)mxNum=random;
        if(mnNum>random)mnNum=random;
        sum+=random;
        nRand++;
    }
    average=static_cast<float>(sum)/nRand;
    
    //Display Results
    cout<<"The total numbers in the file  = "<<nRand<<endl;
    cout<<"The maximum number in the file = "<<mxNum<<endl;
    cout<<"The minimum number in the file = "<<mnNum<<endl;
    cout<<"The sum of all the numbers     = "<<sum<<endl;
    cout<<"The average of all the numbers = "<<average<<endl;
    
    //Close the file
    in.close();

    //Exit stage right
    return 0;
}

