/*
Name:  Dr. Mark Lehr
Date:  01/17/25
Purpose: Sum 2 Dice on the way to Craps Game
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
const float MAXRND=pow(2,15)-1;//32767

//Function Prototypes
int randRng(int min,int max);//[0,32767]
float rand_01();//[float point in range of 0,1
float rndMxMn(float min,float max);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	unsigned int nThrows,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
	
	
	//Initialize Values
	nThrows=36000;
	n2=n3=n4=n5=n6=n7=n8=n9=n10=n11=n12=0;
	
	//Map the Inputs to Outputs - Process
	for(int thrw=1;thrw<=nThrows;thrw++){
		int die1=randRng(1,6);
		int die2=randRng(1,6);
		int sum=die1+die2;
		switch(sum){
			case 2:n2++;break;
			case 3:n3++;break;
			case 4:n4++;break;
			case 5:n5++;break;
			case 6:n6++;break;
			case 7:n7++;break;
			case 8:n8++;break;
			case 9:n9++;break;
			case 10:n10++;break;
			case 11:n11++;break;
			case 12:n12++;break;
			default:cout<<"Error"<<endl;break;
		}
	}
	
	//Display and output the results
	cout<<"Number of Throws = "<<nThrows<<endl;
	cout<<"Number of Throws = "<<n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12<<endl;
	cout<<"n2  = "<<n2<<endl;
	cout<<"n12 = "<<n12<<endl;
	cout<<"n3  = "<<n3<<endl;
	cout<<"n11 = "<<n11<<endl;
	cout<<"n4  = "<<n4<<endl;
	cout<<"n10 = "<<n10<<endl;
	cout<<"n5  = "<<n5<<endl;
	cout<<"n9 = "<<n9<<endl;
	cout<<"n6  = "<<n6<<endl;
	cout<<"n8 = "<<n8<<endl;
	cout<<"n7 = "<<n7<<endl;
	
	//Exit the program
	return 0;
}

float rndMxMn(float min,float max){
	float range=max-min;
	float random=rand_01()*range+min;
	return random;
}

float rand_01(){
	return rand()/MAXRND;//[0,1]
}

int randRng(int min,int max){
	int range=max-min;
	int random=rand()%(range+1)+min;
	return random;
}