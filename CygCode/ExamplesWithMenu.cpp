/*
Name:  Dr. Mark Lehr
Date:  03/25/25
Purpose: Examples with Menus
*/

//System Libraries
#include <iostream>    //I/O Library
//#include <cstdlib>   //Random Library
//#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const float PERCENT=1e2f; //Conversion to a %
const float HALFPNY=5e-3f;//HALF PENNY 0.005 CENTS

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
    unsigned char choice;//The menu selection
	
	//Initialize Values with a request for input using a menu
    cout<<"This is a menu for running any homework problem"<<endl;
    cout<<"Type 0 to Perform an Upper Case Conversion"<<endl;
    cout<<"Type 1 to Perform an Lower Case Conversion"<<endl;
    cout<<"Type 2 Average 5 integers"<<endl;
    cout<<"Type 3 Produce a grade from a random score"<<endl;
    cout<<"Type 4 To determine the Restaurant Bill"<<endl;
    cout<<"Type anything else to end the Program"<<endl;
    cin>>choice;
	
	//Map the Inputs to Outputs - Process
    switch(choice){
        case '0':{
            //Declare a variable
            char letter;
            //Display a prompt and input
            cout<<"This code converts lower case to upper case characters"<<endl;
            cout<<"Input the lower case letter"<<endl;
            cin>>letter;
            //Perform the conversion
            if(letter>=97 && letter<=122)letter-=32;
            //Display the result
            cout<<"The conversion is "<<letter<<endl;
            break;
        }
        case '1':{
            //Declare a variable
            char letter;
            //Display a prompt and input
            cout<<"This code converts upper case to lower case characters"<<endl;
            cout<<"Input the upper case letter"<<endl;
            cin>>letter;
            //Perform the conversion
            if(letter>=65 && letter<=90)letter+=32;
            //Display the result
            cout<<"The conversion is "<<letter<<endl;
            break;
        }
        case '2':{
            //Declare Variables
            unsigned short val1,val2,val3,val4,val5;//5 positve integer values
            float average;//The average of 5 values
            
            //Initialize Values
            cout<<"Type 5 integer values to determine the average"<<endl;
            cin>>val1>>val2>>val3>>val4>>val5;
            
            //Map the Inputs to Outputs - Process
            average=(val1+val2+val3+val4+val5)/5.0f;
            
            //Display and output the results
            cout<<"The average of "<<val1<<","<<val2<<","<<val3<<","
                <<val4<<","<<val5<<" = "<<average<<endl;
            break;
        }
        case '3':{
            //Random Seeds are set for the random number generator
            srand(static_cast<unsigned int>(time(0)));
            
            //Declare Variables
            unsigned char score,//Score for Assignment [50-100]
                        grade;//Grade A,B,C,D,F
            
            //Initialize Values
            score=rand()%51+50;//[50-100]
            
            //Map the Inputs to Outputs - Process
            switch(score/10){
                case 10:
                case  9:grade='A';break;
                case  8:grade='B';break;
                case  7:grade='C';break;
                case  6:grade='D';break;
                default:grade='F';
            }
            
            //Display and output the results
            cout<<"A score of "<<static_cast<int>(score)
                <<" gives a grade = "<<grade<<endl;
            break;
        }
        case '4':{
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
            break;
        }
        default:{}
    }
	
	//Display and output the results
  
	
	//Exit the program
	return 0;
}