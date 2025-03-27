/*
Name:  Dr. Mark Lehr
Date:  03/06/25
Purpose: Sum positive, negative numbers and delineate
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    int n,//Positive or Negative Number
        posSum,//Positive Sum
        negSum,//Negative Sum
        totSum;//Total Sum
	
	//Initialize Values
    posSum=negSum=totSum=0;

    //Creat The Header
    cout<<"Type in 10 + or - Integers"<<endl;

    //Input the number and perform the sums
    cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
		
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
		
	cin>>n;
    posSum += n>0 ? n : 0;
    negSum += n<0 ? n : 0;
	
	//Display and output the results
    totSum=posSum+negSum;

    cout<<"Positive Sum = "<<posSum<<endl;
    cout<<"Negative Sum = "<<negSum<<endl;
    cout<<"Total Sum    = "<<totSum<<endl;
	
	//Exit the program
	return 0;
}