/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 5th, 2022, 11:25 AM
 * Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random Number
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const float ACRFT2=43560;//Conversion from Acres to Ft^2
const float FTMILE=5280;//Number of feet to a mile
const unsigned char PERCENT=100;//Conversion to Decimal from Percent

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Repeat the process
    do{
    
        //Initialize Variables
        cout<<"Which Problem would you like to run"<<endl;
        cout<<"Type 0 for Problem 1 Land Calcuation"<<endl;
        cout<<"Type 1 for Problem 2 Give a Grade"<<endl;
        cout<<"Type 2 for Problem 3 Savings Calculation"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cin>>choice;

        //Map the Inputs to the Outputs
        switch(choice){
            case '0':{
                //Declare Variables
                float ft2,//Area in ft2
                      nAcres;//Number of Acres

                //Initial Variables
                cout<<endl<<"This program performs land calculations"<<endl;
                cout<<"Input the square footage to convert"<<endl;
                cin>>ft2;

                //Map the Inputs to the Outputs
                nAcres=ft2/ACRFT2;

                //Display the Inputs and Outputs
                cout<<"The square footage  = "<<ft2<<" ft^2"<<endl;
                cout<<"The number of acres = "<<nAcres<<" acres"<<endl<<endl;
                break;
            }
            case '1':{
                    //Set the Random Number Seed
                    srand(static_cast<unsigned int>(time(0)));

                    //Declare Variables
                    unsigned char score,//Score for a homework [50,100]
                                  grade;//Typical Grade

                    //Initial Variables
                    score=rand()%51+50;//[50,100]

                    //Map the Inputs to the Outputs
                    grade = score>=90 ? 'A' :
                            score>=80 ? 'B' :
                            score>=70 ? 'C' :
                            score>=60 ? 'D' : 'F';

                    //Display the Inputs and Outputs
                    cout<<endl<<"Your score of "<<static_cast<int>(score)
                        <<" = "<<grade<<endl<<endl;
                break;
            }
            case '2':{
                //Declare Variables
                float pv,    //Present Value in $'s
                 intRate,    //Interest Rate in %
                  intrst,    //Yearly interest $'s
                      fv;    //Future Value in $'s
                unsigned char nCmpPds;//Number of compounding periods years
                unsigned short stYear;//Starting Year 

                //Initialize Variables
                pv=1e2f;//$100
                intRate=6;//6%
                nCmpPds=12;//12 years
                stYear=2022;//Year to start savings

                //Map the inputs/known to the outputs
                //Display the outputs
                intRate/=PERCENT;
                fv=pv;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<endl<<endl;
                cout<<"$"<<pv<<" = Initial Principle $'s"<<endl;
                cout<<intRate*PERCENT<<"% = Interest Rate %"<<endl;
                cout<<endl<<setw(10)<<"Years"<<setw(10)<<"Year"
                            <<setw(15)<<"Retirement"<<setw(10)<<"Interest"<<endl;
                for(int years=0;years<=nCmpPds;years++){
                    intrst=fv*intRate;
                    cout<<setw(10)<<years<<setw(10)<<years+stYear
                            <<setw(15)<<fv<<setw(10)<<intrst<<endl;
                    fv+=intrst;
                }
                cout<<endl<<endl;
                break;
            }
            case '3':cout<<"Homework Problem 4"<<endl;break;
        }
    }while(choice>='0'&&choice<='3');

    //Exit the code
    return 0;
}