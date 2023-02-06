/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on June 30th, 2022, 11:49 AM
 * Purpose:  Mil Budget 2022
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const float TRILION=1e12f;//Magnitude/Conversion to a Trillion
const float BILLION=1e9f; //Magnitude/Conversion to a Billion
const unsigned char PERCENT=100;//Conversion to Percent

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float fedBdgt,//Federal Budget
          milBdgt,//Military Budget
          nasaBdg,//Nasa Budget
          percMil,//Percent Military Budget
          prcNasa;//Percent Nasa Budget
    
    //Initial Variables
    fedBdgt=6.011e12;//Daniel Chvat found on Internet
    milBdgt=778e9;//Fernando Olivares found on Internet
    nasaBdg=24e9;//Moniriddh Bunyay found on Interned
    
    //Map the Inputs to the Outputs
    percMil=milBdgt/fedBdgt*PERCENT;
    prcNasa=nasaBdg/fedBdgt*PERCENT;
            
    //Display the Inputs and Outputs
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Federal Budget  = $"<<setw(7)<<fedBdgt/TRILION<<" Trillions"<<endl;
    cout<<"Military Budget = $"<<setw(7)<<milBdgt/BILLION<<" Billions"<<endl;
    cout<<"NASA Budget     = $"<<setw(7)<<nasaBdg/BILLION<<" Billions"<<endl;
    cout<<"Military Budget Percent = "<<setw(7)<<percMil<<" %"<<endl;
    cout<<"NASA Budget Percent     = "<<setw(7)<<prcNasa<<" %"<<endl;

    //Exit the code
    return 0;
}

