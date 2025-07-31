/*
Name:  Dr. Mark Lehr
Date:  01/16/25
Purpose: Roman Numeral Conversion
*/

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Library
#include <ctime>    //Time Library
#include <cstring>
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
	unsigned short number,//Number to convert
				   n1000s,//Number of 1000's
				    n100s,//Number of 100's
				     n10s,//Number of 10's
					  n1s;//Number of 1's
	
	
	//Initialize Values
	number=rand()%4000;//[0-3999]

	//Map the Inputs to Outputs - Process
	n1000s=number%10000/1000;
	n100s =number%1000/100;
	n10s  =number%100/10;
	n1s   =number%10/1;

	
	//Display and output the results
	cout<<number<<"="<<n1000s<<n100s<<n10s<<n1s<<endl;
	
	//Display the 1000's with Switch
	switch(n1000s){
		case 3:cout<<'M';
		case 2:cout<<'M';
		case 1:cout<<'M';
	}
		
	//Display the 100's with Ternary Operator
	n100s==9?cout<<"CM":
	n100s==8?cout<<"DCCC":
	n100s==7?cout<<"DCC":
	n100s==6?cout<<"DC":
	n100s==5?cout<<"D":
	n100s==4?cout<<"CD":
	n100s==3?cout<<"CCC":
	n100s==2?cout<<"CC":
	n100s==1?cout<<"C":cout<<"";
	
	//Display the 10's with Dependent If's
	if     (n10s==9)cout<<"XC";
	else if(n10s==8)cout<<"LXXX";
	else if(n10s==7)cout<<"LXX";
	else if(n10s==6)cout<<"LX";
	else if(n10s==5)cout<<"L";
	else if(n10s==4)cout<<"XL";
	else if(n10s==3)cout<<"XXX";
	else if(n10s==2)cout<<"XX";
	else if(n10s==1)cout<<"X";
	
	//Display the 10's with Independent If's
	if(n1s==9)cout<<"IX";
	if(n1s==8)cout<<"VIII";
	if(n1s==7)cout<<"VII";
	if(n1s==6)cout<<"VI";
	if(n1s==5)cout<<"V";
	if(n1s==4)cout<<"IV";
	if(n1s==3)cout<<"III";
	if(n1s==2)cout<<"II";
	if(n1s==1)cout<<"I";
	
	//Exit the program
	return 0;
}