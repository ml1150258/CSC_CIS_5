/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 11:07 AM
 * Purpose:  Random Guess - Illustrate the Binary Search
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Number Library
#include <ctime>      //Time Library to set the Random number seed
#include <cmath>      //Math Library - Log function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    unsigned int range,//Range of values to guess [1-2Bil]
                nGuess,//Total guesses allowed to win
                 value,//Value to guess
               counter,//Count the number of guesses
              usrGuess;//The users guess
    
    //Initialize variables here
    cout<<"Find a random number by guessing"<<endl;
    cout<<"You will be given a certain number of Guesses "<<endl;
    cout<<"Based upon the range of values to select from "<<endl;
    cout<<"For instance, a range of 1000 you will only have 10 guesses"<<endl;
    cout<<"Choose your range from 1 to 2 Billion"<<endl<<endl;
    cin>>range;
    nGuess=log(range)/log(2)+1;//Number of Guesses
    value=rand()%range+1;      //Range of the value to guess
    counter=0;
    
    //Map inputs to outputs here, i.e. the process
    do{
        cout<<"Input a guess"<<endl;
        cin>>usrGuess;
        counter++;
        if(usrGuess>value){
            cout<<"The guess was high"<<endl<<endl;
        }else if(usrGuess<value){
            cout<<"The guess was low"<<endl<<endl;
        }else{
            cout<<endl<<"Congratulations, you solved the puzzle"<<endl<<endl;
        }
    }while(counter<=nGuess && value!=usrGuess);
    
    //Display the results
    cout<<endl<<"Solution Statistics"<<endl;
    cout<<"The range of possible values = [1-"<<range<<"]"<<endl;
    cout<<"The allowed number of guesses = "<<nGuess<<endl;
    cout<<"The value to find = "<<value<<endl;
    cout<<"The number of guesses = "<<counter<<endl;
    cout<<"The final user guess = "<<usrGuess<<endl;

    return 0;
}