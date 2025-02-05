/*
Name:  Dr. Mark Lehr
Date:  01/16/25
Purpose: Sorting
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
	const int SIZE=10;
    char a[SIZE],b[SIZE],c[SIZE];
	
	//Initialize Values
    cout<<"Input 3 strings"<<endl;
    cin>>a>>b>>c;
	
	//Map the Inputs to Outputs - Process
    cout<<"The Three Strings are a,b,c = "<<a<<" "<<b<<" "<<c<<endl;
    if(strcmp(a,b)<=0&&strcmp(b,c)<=0)cout<<"Sorted order = "<<a<<" "<<b<<" "<<c<<endl;
    if(strcmp(a,c)<=0&&strcmp(c,b)<=0)cout<<"Sorted order = "<<a<<" "<<c<<" "<<b<<endl;
    if(strcmp(b,a)<=0&&strcmp(a,c)<=0)cout<<"Sorted order = "<<b<<" "<<a<<" "<<c<<endl;
    if(strcmp(b,c)<=0&&strcmp(c,a)<=0)cout<<"Sorted order = "<<b<<" "<<c<<" "<<a<<endl;
    if(strcmp(c,a)<=0&&strcmp(a,b)<=0)cout<<"Sorted order = "<<c<<" "<<a<<" "<<b<<endl;
    if(strcmp(c,b)<=0&&strcmp(b,a)<=0)cout<<"Sorted order = "<<c<<" "<<b<<" "<<a<<endl;
	
	//Display and output the results
	
	//Exit the program
	return 0;
}