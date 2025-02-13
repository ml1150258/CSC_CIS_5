/*
Name:  Dr. Mark Lehr
Date:  02/12/25
Purpose: Compare String Functions
*/

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
int  myStrCm(char [],char []);
int  myStrCp(char [],char []);
int  myStrLn(char []);

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	const int COLS=80;
	const int ROWS=10;
	char words[ROWS][COLS];
	
	//Initialize Values
	char temp[]=" ";
	cout<<myStrLn(temp)<<endl;
	cout<<temp<<endl;
	char a[]="a";
	char b[]="day";
	char c[]="dayton";
	char d[]="Marc";
	char e[]="Marc";
	char f[]="z";
	
	//Map the Inputs to Outputs - Process
	myStrCp(words[0],a);
	myStrCp(words[1],b);
	myStrCp(words[2],c);
	myStrCp(words[3],d);
	myStrCp(words[4],e);
	myStrCp(words[5],f);
	//What does this do
	myStrCp(temp,words[0]);
	myStrCp(words[0],words[5]);
	myStrCp(words[5],temp);
	//strcpy(temp,words[0]);
	//strcpy(words[0],words[5]);
	//strcpy(words[5],temp);
	
	//Display and output the results
	for(int i=0;i<5;i++){
		cout<<words[i]<<
			(myStrCm(words[i],words[i+1])<0?'<':
			 myStrCm(words[i],words[i+1])>0?'>':'=')
		<<words[i+1]<<endl;
		cout<<words[i]<<
			(strcmp(words[i],words[i+1])<0?'<':
			 strcmp(words[i],words[i+1])>0?'>':'=')
		<<words[i+1]<<endl;
	}
	
	
	//Exit the program
	return 0;
}

int  myStrCm(char a[],char b[]){
	int lenA=myStrLn(a);
	int lenB=myStrLn(b);
	int min=lenA<=lenB?lenA:lenB;
	for(int i=0;i<min;i++){
		if(a[i]<b[i])return -1;
		if(a[i]>b[i])return  1;
	}
	if(lenA<lenB)return -1;
	if(lenA>lenB)return  1;
	return 0;
}

int myStrCp(char a[],char b[]){
	if(b[0]=='\0'){
		a[0]='\0';
		return 0;
	}
	int cnt=0;
	do{
		a[cnt]=b[cnt];
	}while(a[cnt++]!='\0');
	return cnt-1;
}

int  myStrLn(char a[]){
	int cnt=0;
	while(a[cnt++]!='\0');
	return cnt-1;
}