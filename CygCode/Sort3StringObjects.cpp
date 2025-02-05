/*
Name:  Dr. Mark Lehr
Date:  01/16/25
Purpose: Sorting
*/

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Library
#include <ctime>    //Time Library
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
    string a,b,c;
	
	//Initialize Values
    cout<<"Input 3 strings"<<endl;
    cin>>a>>b>>c;
	
	//Map the Inputs to Outputs - Process
    cout<<"The Three Strings are a,b,c = "<<a<<" "<<b<<" "<<c<<endl;
    if(a<=b&&b<=c)cout<<"Sorted order = "<<a<<" "<<b<<" "<<c<<endl;
    if(a<=c&&c<=b)cout<<"Sorted order = "<<a<<" "<<c<<" "<<b<<endl;
    if(b<=a&&a<=c)cout<<"Sorted order = "<<b<<" "<<a<<" "<<c<<endl;
    if(b<=c&&c<=a)cout<<"Sorted order = "<<b<<" "<<c<<" "<<a<<endl;
    if(c<=a&&a<=b)cout<<"Sorted order = "<<c<<" "<<a<<" "<<b<<endl;
    if(c<=b&&b<=a)cout<<"Sorted order = "<<c<<" "<<b<<" "<<a<<endl;
	
	//Display and output the results
	
	//Exit the program
	return 0;
}