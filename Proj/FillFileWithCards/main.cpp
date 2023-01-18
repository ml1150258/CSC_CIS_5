/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 18, 2022, 11:40 AM
 * Purpose:  Fill a File with cards
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <fstream>   //File Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const char NCARDS=52;
    fstream out;
    char suit;
    char face;
    
    //Initialize Variables
    out.open("cards.dat",ios::out);
    
    //Map the inputs/known to the outputs
    for(int card=0;card<NCARDS;card++){
        switch(card/13){
            case 0:suit='S';break;
            case 1:suit='D';break;
            case 2:suit='C';break;
            default:suit='H';
        }
        char cmod=card%13;
        face=cmod==0?'A':
             cmod==1?'2':
             cmod==2?'3':
             cmod==3?'4':
             cmod==4?'5':
             cmod==5?'6':
             cmod==6?'7': 
             cmod==7?'8':
             cmod==8?'9':
             cmod==9?'T':
             cmod==10?'J':
             cmod==11?'Q':'K';
        out<<face<<suit<<endl;
        cout<<face<<suit<<endl;
    }
    
    //Clean up files
    out.close();

    //Exit the program
    return 0;
}