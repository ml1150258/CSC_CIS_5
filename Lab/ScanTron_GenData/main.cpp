/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on May 16th, 2024, 11:25 AM
 * Purpose:  ScanTron Generate Data
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <fstream>   //File Input
#include <cstdlib>   //Random Function
#include <ctime>     //Time function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void genData(char [],char [],int);
int  grdData(char [],char [],char [],int);
void prntDat(char [],char [],char [],int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    char key[SIZE+1],answer[SIZE+1],cw[SIZE+1];
    int score;
    
    //Initialize Variables
    genData(key,answer,SIZE);
    
    //Map/Process the Inputs -> Outputs
    score=grdData(key,answer,cw,SIZE);
    
    //Display Inputs/Outputs
    prntDat(key,answer,cw,SIZE);
    cout<<endl<<"Percentage Correct = "<<100.0f*score/SIZE<<"%"<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

int grdData(char key[],char ans[],char cw[],int n){
    int right=0;
    for(int i=0;i<n;i++){
        if(key[i]==ans[i]){
            cw[i]='C';
            right++;
        }
        else cw[i]='W';
    }
    return right;
}

void prntDat(char key[],char ans[],char cw[],int n){
    cout<<"Key     ";
    for(int i=0;i<n;i++){
        cout<<key[i]<<" ";
    }
    cout<<endl;
    cout<<"Answers ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<"C/W     ";
    for(int i=0;i<n;i++){
        cout<<cw[i]<<" ";
    }
}

void genData(char key[],char ans[],int n){
    for(int i=0;i<n;i++){
        key[i]=rand()%4+65;
    }
    for(int i=0;i<n;i++){
        ans[i]=rand()%4+65;
        if(ans[i]!=key[i]&&i%2){
            ans[i]=key[i];
        }
    }
}