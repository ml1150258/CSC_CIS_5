/*
Name:  Dr. Mark Lehr
Date:  01/27/25
Purpose: Approximate PI
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
//const float MAXRND=pow(2,15)-1;//32767
const float MAXRND=(1<<15)-1;//32767
const float PI=4*atan(1);//atan(1)=PI/4


//Function Prototypes
int randRng(int min,int max);//[0,32767]
float rand_01();//[float point in range of 0,1
float rndMxMn(float min,float max);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	unsigned int nDarts,inCrcle;
	float piApprx;
	
	//Initialize Values
	nDarts=100000;
	inCrcle=0;

	//Map the Inputs to Outputs - Process
	for(int dart=1;dart<=nDarts;dart++){
		float x=rand_01();//x position or horizontal coordinate of the dart
		float y=rand_01();//y position or vertical   coordinate of the dart
		//cout<<"x = "<<x<<" y = "<<y<<endl;
		if((x*x+y*y)<=1.0f)inCrcle++;
	}
	piApprx=4.0f*inCrcle/nDarts;//4 * what is in the circle/divided by the square
	
	//Display and output the results
	cout<<"Total Darts used     = "<<nDarts<<endl;
	cout<<"Total In Circle      = "<<inCrcle<<endl;
	cout<<"The Pi Approximation = "<<piApprx<<endl;
	cout<<"The Pi Cmath Library = "<<PI<<endl;
	
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