/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 8th, 2022, 11:49 AM
 * Purpose:  C++ Template
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score,//Score for a homework [50,100]
                  grade;//Typical Grade
    
    //Initial Variables
    score=rand()%51+50;//[50,100]
    
    //Map the Inputs to the Outputs
    switch(score){
        case 100:case  99:case  98:case  97:  case  96:    
        case  95:case  94:case  93:case  92:  case  91:    
        case  90:grade='A';break;
        case  89:case  88:case  87:  case  86:    
        case  85:case  84:case  83:case  82:  case  81:    
        case  80:grade='B';break;
        case  79:case  78:case  77:  case  76:    
        case  75:case  74:case  73:case  72:  case  71:  
        case  70:grade='C';break;
        case  69:case  68:case  67:  case  66:    
        case  65:case  64:case  63:case  62:  case  61:  
        case  60:grade='D';break;
        default:grade='F';
    }
          
    //Display the Inputs and Outputs
    cout<<"Your score of "<<static_cast<int>(score)
        <<" = "<<grade<<endl;

    //Exit the code
    return 0;
}

