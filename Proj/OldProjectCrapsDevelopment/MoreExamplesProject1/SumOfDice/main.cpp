/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Simulate a pair dice
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand/Srand
#include <ctime>    //Time
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char die1,die2;//Dice face values = [1,6]
    int c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12;//count of dice throws
    int toss;
    
    //Initialize
    toss=36000000;
    c2=c3=c4=c5=c6=c7=c8=c9=c10=c11=c12=0;
    
    //Check the statistics
    for(int thrw=1;thrw<=toss;thrw++){
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        switch(sum){
            case 2:c2++;break;
            case 3:c3++;break;
            case 4:c4++;break;
            case 5:c5++;break;
            case 6:c6++;break;
            case 7:c7++;break;
            case 8:c8++;break;
            case 9:c9++;break;
            case 10:c10++;break;
            case 11:c11++;break;
            case 12:c12++;break;
            default:cout<<"Logic Error"<<endl;
        }
    }
    
    //Output the results
    cout<<"Number of Dice Thrown = "<<toss<<endl;
    cout<<"Sum of 2 occurred  = "<<setw(9)<<c2<<" times"<<endl;
    cout<<"Sum of 3 occurred  = "<<setw(9)<<c3<<" times"<<endl;
    cout<<"Sum of 4 occurred  = "<<setw(9)<<c4<<" times"<<endl;
    cout<<"Sum of 5 occurred  = "<<setw(9)<<c5<<" times"<<endl;
    cout<<"Sum of 6 occurred  = "<<setw(9)<<c6<<" times"<<endl;
    cout<<"Sum of 7 occurred  = "<<setw(9)<<c7<<" times"<<endl;
    cout<<"Sum of 8 occurred  = "<<setw(9)<<c8<<" times"<<endl;
    cout<<"Sum of 9 occurred  = "<<setw(9)<<c9<<" times"<<endl;
    cout<<"Sum of 10 occurred = "<<setw(9)<<c10<<" times"<<endl;
    cout<<"Sum of 11 occurred = "<<setw(9)<<c11<<" times"<<endl;
    cout<<"Sum of 12 occurred = "<<setw(9)<<c12<<" times"<<endl;
    cout<<"Number of Dice Thrown = "
            <<c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12<<endl;
    
    //Exit program!
    return 0;
}