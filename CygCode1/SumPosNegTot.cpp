/*
Name:  Dr. Mark Lehr
Date:  01/13/25
Purpose: Add numbers and sum Positive, Negative and then Total
*/

//System Libraries
#include <iostream>  //In/Out Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time to set Random Number seed
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	int num,posSum,negSum,totSum;
	
	//Initialize Values
	posSum=negSum=totSum=0;
	
	//Map the Inputs to Outputs - Process
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<",";
	num>=0 ? posSum+=num : negSum+=num;
	
	num=rand()%21-10;//[-10,10]
	cout<<num<<endl;
	num>=0 ? posSum+=num : negSum+=num;
	
	totSum = posSum + negSum;
	
	//Display and output the results
	cout<<"Negative Sum ="<<setw(4)<<negSum<<endl;
	cout<<"Positive Sum ="<<setw(4)<<posSum<<endl;
	cout<<"Total Sum    ="<<setw(4)<<totSum<<endl;
	
	//Exit the program
	return 0;
}