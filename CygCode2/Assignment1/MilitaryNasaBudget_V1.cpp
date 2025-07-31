/*
     Author: Dr. Mark E. Lehr
     Date:   June 24th, 2025
     Purpose:  Nasa and Military Budget
*/

//System Libraries
#include <iostream>  //Input/Output
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions
const char PERCENT=100;//Percent Conversion

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
	float fedBdgt,//Federal Budget
	      dodBdgt,//Military Budget
		  nasaBgt,//Nasa Budget
		  dodPrct,//DOD Percentage
		  nasaPct;//Nasa Percentage

    //Initialize Variables
	fedBdgt =   6.8e12f;   //6.8 Trillion
	dodBdgt = 850.0e09f;   //850 Billion
	nasaBgt =  25.0e09f;   // 25 Billion

    //Process - Map the inputs to outputs
	dodPrct = dodBdgt/fedBdgt*PERCENT;
	nasaPct = nasaBgt/fedBdgt*PERCENT;

    //Display the results
	cout<<"The Federal Budget  = $"<<fedBdgt<<endl;
	cout<<"The DOD     Budget  = $"<<dodBdgt<<endl;
	cout<<"The NASA    Budget  = $"<<nasaBgt<<endl;
	cout<<"The DOD Percentage  =  "<<dodPrct<<"%"<<endl;
	cout<<"The NASA Percentage =  "<<nasaPct<<"%"<<endl;

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}