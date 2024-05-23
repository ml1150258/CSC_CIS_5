/* 
 * File:   main.cpp
 * Author: 
 * Created:
 * Purpose:  
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int a[][COLS],int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<COLS;j++){
            a[i][j]=(i+1)+(j+1);
        }
    }
}
void prntTbl(const int a[][COLS],int rows){
    string side=" ROWS ";
    char row[] ={'1','2','3','4','5','6'};
    cout<<"               C o l u m n s"<<endl;
    cout<<endl;
    cout<<"     |   1   2   3   4   5   6"<<endl;
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    for(int i=0;i<rows;i++){
        cout<<side[i]<<"  "<<row[i]<<" | ";
        for(int j=0;j<COLS;j++){
            cout<<setw(3)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}