/*
Name:  Dr. Mark Lehr
Date:  01/16/25
Purpose: Rock Paper Scissors
*/

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time Library
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
	unsigned char p1,//Player 1
	              p2;//Player 2
	
	//Initialize Values
	int score=rand()%3;//[0,1,2]
	p1 = score==0?'r':
	     score==1?'p':'s';
	score=rand()%3;//[0,1,2]
	p2 = score==0?'r':
	     score==1?'p':'s';
	if(p1>'Z')p1-=32;//If lowercase change to upper case
	if(p2>'Z')p2-=32;//If lowercase change to upper case
	
	//Map the Inputs to Outputs - Process
	if(p1==p2){
		cout<<"A Tie"<<endl;
    }else if(p1=='R'){
		if(p2=='S')cout<<"Player 1 wins Rock beats scissors"<<endl;
		else cout<<"Player 2 wins Paper beats rock"<<endl;
	}else if(p1=='P'){
		if(p2=='R')cout<<"Player 1 wins Paper beats rock"<<endl;
		else cout<<"Player 2 wins Scissors beats paper"<<endl;
	}else if(p1=='S'){
		if(p2=='R')cout<<"Player 2 wins Rock beats scissors"<<endl;
		else cout<<"Player 1 wins Scissors beats paper"<<endl;
	}

	
	//Display and output the results
	cout<<"Player 1 = "<<p1<<endl;
	cout<<"Player 2 = "<<p2<<endl;
	
	//Exit the program
	return 0;
}