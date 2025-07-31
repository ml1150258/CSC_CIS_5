/*
Name:  Dr. Mark Lehr
Date:  02/25/25
Purpose: Calculate the Stupid way your total Restaurant
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float PERCENT=1e2f; //Conversion to a %
const float HALFPNY=5e-3f;//HALF PENNY 0.005 CENTS

//Function Prototypes

int main(int argv,char **argc){
	//Declare Variables
	float mealChg,//Meal Charge $'s 
	      taxPct,//Tax in Percent
		  tipPct,//Tip in Percent
		  chrgTax,//Charge due to the tax
		  chrgTip,//Charge due to tip
          totb4Tp,//Total Before tip
          total;//Total Altogether
	
	//Initialize Values
	mealChg=8.867e1f;
    taxPct=6.75f/PERCENT;
    tipPct=2.0e1f/PERCENT;
	
	//Map the Inputs to Outputs - Process
	chrgTax=mealChg*taxPct+HALFPNY;//Round up to nearest Penny
    int icTax=chrgTax*100;//Truncate into PENNIES 
    chrgTax=icTax/100.0f;//Turn back into Dollars
    totb4Tp=mealChg+chrgTax;
    chrgTip=totb4Tp*tipPct+HALFPNY;//Round up to nearest Penny
	int ichrgTp=chrgTip*100;//Truncate into Pennies
	chrgTip=ichrgTp/100.0f;//Turn Back into Dollars
    total=totb4Tp+chrgTip;
	
	//Display and output the results
	cout<<"Meal charge    = $ "<<mealChg<<endl;
    cout<<"Tax Percentage =    "<<taxPct*PERCENT<<"%"<<endl;
    cout<<"Tip Percentage =   "<<tipPct*PERCENT<<"%"<<endl;
	cout<<"Tax charge     = $  "<<chrgTax<<endl;
	cout<<"Total after Tax= $ "<<totb4Tp<<endl;
	cout<<"Tip            = $ "<<chrgTip<<endl;
	cout<<"Total Bill     = $"<<total<<endl;
	
	//Exit the program
	return 0;
}