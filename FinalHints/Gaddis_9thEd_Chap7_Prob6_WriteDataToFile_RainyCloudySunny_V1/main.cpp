/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2022, 10:10 AM
 * Purpose:  Create Data and Write to File
 *           Illustrate 2D Arrays
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <fstream>   //File Stream Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Function
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const char DAYS=30;//Number of days of month for J/J/A

//Function Prototypes
char typOfDy();
void filWthr(char [][DAYS],char);
void display(char [][DAYS],char);
void wrtFile(fstream &,char [][DAYS],char);


//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    fstream file;
    char fileNm[]="weather.dat";
    const char MONTHS=3;//June=0,July=1,August=2
    char weather[MONTHS][DAYS];
    
    //Initialize Variables
    file.open(fileNm,ios::out);
    filWthr(weather,MONTHS);
    
    //Map the inputs/known to the outputs
    wrtFile(file,weather,MONTHS);
    
    //Display the outputs
    display(weather,MONTHS);
    
    //Close the file
    file.close();

    //Exit the program
    return 0;
}

void wrtFile(fstream &fn,char weather[][DAYS],char months){
    for(int month=0;month<months;month++){
        for(int day=0;day<DAYS;day++){
            fn<<weather[month][day]<<" ";
        }
        fn<<endl;
    }
}

void filWthr(char w[][DAYS],char months){
    for(int month=0;month<months;month++){
        for(int day=0;day<DAYS;day++){
            w[month][day]=typOfDy();
        }
    }
}

void display(char weather[][DAYS],char months){
    for(int month=0;month<months;month++){
        for(int day=0;day<DAYS;day++){
            cout<<weather[month][day]<<" ";
        }
        cout<<endl;
    }
}

char typOfDy(){
    char day[]="CRS";
    return day[rand()%3];
}