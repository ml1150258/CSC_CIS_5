/*
Name:  Dr. Mark Lehr
Date:  01/17/25
Purpose: Craps Game
*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
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
	unsigned int nGames,nWins,nLosses;
	
	//Initialize Values
	nGames=100000000;
	nWins=nLosses=0;
	
	//Map the Inputs to Outputs - Process
	for(int game=1;game<=nGames;game++){
		int die1=rand()%6+1;//[1,6]
		int die2=rand()%6+1;//[1,6]
		int sum=die1+die2;
		switch(sum){
			case 7:
			case 11:nWins++;break;
			case 2:
			case 3:
			case 12:nLosses++;break;
			default:{
				bool rollAgn=true;
				do{
					die1=rand()%6+1;//[1,6]
					die2=rand()%6+1;//[1,6]
					int sum2=die1+die2;
					if(sum2==7){
						rollAgn=false;
						nLosses++;
					}else if(sum2==sum){
						rollAgn=false;
						nWins++;
					}
				}while(rollAgn);
			}
		}
	}
	
	//Display and output the results
	cout<<"Number of Games   = "<<nGames<<endl;
	cout<<"Number of Games   = "<<nWins+nLosses<<endl;
	cout<<"Number of Wins    = "<<nWins<<endl;
	cout<<"Number of Losses  = "<<nLosses<<endl;
	cout<<"Probability of a Win   = "<<100.0f*nWins/nGames<<"%"<<endl;
	cout<<"Probability of a Loss  = "<<100.0f*nLosses/nGames<<"%"<<endl;
	
	
	//Exit the program
	return 0;
}