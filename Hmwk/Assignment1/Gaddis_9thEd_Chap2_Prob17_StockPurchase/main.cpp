/* 
 * Author: Dr. Mark E. Lehr
 * Created on June 18, 2024, 12:25 PM
 * Purpose:  Stock Purchase
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Mathematical, Scientific, Conversions,
//Higher Dimensions go here.  No Variables
const unsigned char PERCENT=100;//Percent Conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Setting the Random number seed
    
    //Declaring Variables
    unsigned short nShares;//Number of Shares of Stock
    float  shrPrce,        //Share price in $'s
            percCom,       //Percent Commission 
            prcStk,        //Total Price of Stock $'s without Commission
            commshn,       //Commission Price $'s
            totPrc;        //Total price of stock purchase
    
    //Initialize Variables
    nShares=750;
    shrPrce=3.5e1f;//$35
    percCom=2.0f/PERCENT;//Decimal for Computation
    
    //Processing/Mapping Inputs to Outputs
    prcStk=nShares*shrPrce;
    commshn=percCom*prcStk;
    totPrc=prcStk+commshn;
    
    //Displaying Input/Output Information
    cout<<"Number of Shares =                    "<<nShares<<endl;
    cout<<"Share Price =                         $"<<shrPrce<<endl;
    cout<<"Commission Percent =                    "<<percCom*PERCENT<<"%"<<endl;
    cout<<"Price of Stock Before Commission = $"<<prcStk<<endl;
    cout<<"Commission Charge =                  $"<<commshn<<endl;
    cout<<"Total cost of Stock Purchase =     $"<<totPrc<<endl;

    //Exiting stage left/right
    return 0;
}