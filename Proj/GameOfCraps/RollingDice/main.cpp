/*
    Author: Dr. Mark E. Lehr
    Date:   April 8th, 2021  11:12am
    Purpose:Rolling a pair of Dice
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cstdlib>     //Random number library
#include <ctime>       //Time Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned char sum,die1,die2;
    unsigned int nRolls;
    unsigned int n2s,n3s,n4s,n5s,n6s,n7s,n8s,n9s,n10s,n11s,n12s;
    
    //Initialize variables
    n2s=n3s=n4s=n5s=n6s=n7s=n8s=n9s=n10s=n11s=n12s=0;
    nRolls=36000000;
    
    //Process, map inputs to outputs
    for(int roll=1;roll<=nRolls;roll++){
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        sum=die1+die2;//[2,12]
        switch(sum){
            case 2:n2s++;break;
            case 3:n3s++;break;
            case 4:n4s++;break;
            case 5:n5s++;break;
            case 6:n6s++;break;
            case 7:n7s++;break;
            case 8:n8s++;break;
            case 9:n9s++;break;
            case 10:n10s++;break;
            case 11:n11s++;break;
            case 12:n12s++;break;
            default:cout<<"Bad Dice"<<endl;\
        }
    }
    
    //Display your initial conditions as well as outputs.
    cout<<"n2s = "<<n2s<<endl;
    cout<<"n3s = "<<n3s<<endl;
    cout<<"n4s = "<<n4s<<endl;
    cout<<"n5s = "<<n5s<<endl;
    cout<<"n6s = "<<n6s<<endl;
    cout<<"n7s = "<<n7s<<endl;
    cout<<"n8s = "<<n8s<<endl;
    cout<<"n9s = "<<n9s<<endl;
    cout<<"n10s = "<<n10s<<endl;
    cout<<"n11s = "<<n11s<<endl;
    cout<<"n12s = "<<n12s<<endl;
    cout<<"nRolls = "<<nRolls<<endl;
    cout<<"nRolls = "<<n2s+n3s+n4s+n5s+n6s+n7s+n8s+n9s+n10s+n11s+n12s<<endl;
    
    //Exit stage right
    return 0;
}