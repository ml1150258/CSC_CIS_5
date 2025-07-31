/*
Name:  Dr. Mark Lehr
Date:  01/16/25
Purpose: Compatible Signs
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
	string sign1,sign2,elem1,elem2;
	
	//Initialize Values
	cout<<"Read in 2 Horoscope Signs"<<endl;
	cin>>sign1>>sign2;
	
	//Map the Inputs to Outputs - Process
	if(sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius"){
		elem1="FIRE";
	}else if(sign1=="Taurus"||sign1=="Virgo"||sign1=="Capricorn"){
		elem1="EARTH";
	}else if(sign1=="Gemini"||sign1=="Libra"||sign1=="Aquarius"){
		elem1="AIR";
	}else{
		elem1="WATER";
	}
	
	if(sign2=="Aries"||sign2=="Leo"||sign2=="Sagittarius"){
		elem2="FIRE";
	}else if(sign2=="Taurus"||sign2=="Virgo"||sign2=="Capricorn"){
		elem2="EARTH";
	}else if(sign2=="Gemini"||sign2=="Libra"||sign2=="Aquarius"){
		elem2="AIR";
	}else{
		elem2="WATER";
	}
	
	//Display and output the results
	cout<<"Sign "<<sign1<<" = "<<"Element "<<elem1<<endl;
	cout<<"Sign "<<sign2<<" = "<<"Element "<<elem2<<endl;
	
	//Exit the program
	return 0;
}