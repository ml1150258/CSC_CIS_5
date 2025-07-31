/*
Name:  Dr. Mark Lehr
Date:  01/22/25
Purpose: Menu
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
	
	//Declare Variables
	char choice;
	
	//Initialize Values
	do{
	    //Display the Menu
		cout<<"Type 1 for Horoscope Signs"<<endl;
		cout<<"Type 2 for Problem Rock Paper Scissors"<<endl;
		cout<<"Type 3 for Problem Roman Numeral Conversion"<<endl<<endl;
		cin>>choice;
		 
		switch(choice){
			case '1':{			
				//Declare Variables
				string sign1,sign2,elem1,elem2;
				
				//Initialize Values
				cout<<endl<<"Read in 2 Horoscope Signs"<<endl;
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
				if(elem1==elem2)cout<<sign1<<" is compatible with "
					<<sign2<<endl<<endl;
				else cout<<sign1<<" is not compatible with "
					 <<sign2<<endl<<endl;
				break;}
			case '2':{
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
				cout<<endl;
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
				cout<<endl;
				break;}
			case '3':{
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
				cout<<endl;
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
				
				cout<<endl;
				break;}
	        default: cout<<endl<<endl<<"You will exit Menu"<<endl<<endl;break;
		}
	}while(choice>='1'&&choice<='3');
	
	//Exit the program
	return 0;
}