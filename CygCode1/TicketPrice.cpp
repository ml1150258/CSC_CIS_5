/*
Name:  Dr. Mark Lehr
Date:  03/18/25
Purpose: Ticket Price
*/

//System Libraries
#include <iostream>    //I/O Stream Library
#include <iomanip>     //Format library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    unsigned short age;   //0 - 100
    unsigned char dayOfWk,//Day of Week M,T,W,R,F
                  loylty;//LoyaLty program yes or no
    float prTckt;//Ticket price in $'s

	
	//Initialize Values
    cout<<"This program calculates a ticket price!"<<endl;
    cout<<"Input your age as an integer number of years"<<endl;
    cin>>age;
    cout<<"Input The day of the week (e.g., M, T, W, R, F )  Where R is Thursday."<<endl;
    cin>>dayOfWk;
    cout<<"Input loyalty program?"<<endl;
    cin>>loylty;
	
	//Map the Inputs to Outputs - Process
    prTckt = age>=65? 8.00f: 12.0f;   //Senior Discount
    prTckt = age<=12? 6.00f :prTckt;  //Child Discount
    switch(dayOfWk){                  //Day of the Week Discounts
        case 'M': prTckt = prTckt>7.0f? 7.0f: prTckt;break;
        case 'T': ;break;
        case 'W': prTckt = age>=65? 5.00f: prTckt;break;
        case 'R': ;break;
        case 'F': prTckt = age<=12? 4.00f :prTckt;break;
        default: ;
    }
    prTckt = loylty=='Y'? prTckt*0.90f : prTckt; //Loaylty discount
	
	//Display and output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your Ticket Price with Discounts = $"<<prTckt<<endl;

	
	//Exit the program
	return 0;
}