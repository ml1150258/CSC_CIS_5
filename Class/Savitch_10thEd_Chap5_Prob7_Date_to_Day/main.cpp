/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 3rd, 2022, 9:50 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void input(int &,int &,int &);
bool lpYear(int);
int  cntryVl(int);
int yrVal(int);
int mnVal(int,int);
string dyOfWk(int,int,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int iYear,
       iMonth,
         iDay;
    
    //Initialize Variables
    input(iYear,iMonth,iDay);
    
    //Map the inputs/known to the outputs
    cout<<"The day of the Week is "<<dyOfWk(iMonth,iDay,iYear);

    //Exit the program
    return 0;
}

string dyOfWk(int month,int day,int year){
    //First Calculate the day number
    int dyNum=day+mnVal(month,year)+
              yrVal(year)+cntryVl(year);
    dyNum%=7;
    switch(dyNum){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
    }
}

int mnVal(int month,int year){
    switch(month){
        case 1: return lpYear(year)?6:0;
        case 2: return lpYear(year)?2:3;
        case 3:case 11: return 3;
        case 4:case 7:  return 6;
        case 5:         return 1;
        case 6:         return 4;
        case 8:         return 2;
        case 9:case 12: return 5;
        case 10:        return 0;
    }
}

int yrVal(int year){
    //Step 1
    int stp1=year%100;
    //Step 2
    int stp2=stp1/4;
    //Step 3
    return stp1+stp2;
}

int  cntryVl(int year){
    //Step 1
    int cent=year/100;
    //Step 2
    cent%=4;
    //Step 3
    cent=3-cent;
    //Step 4
    return 2*cent;
}

bool lpYear(int year){
    return ((year%400==0)||((year%4==0)&&!(year%100==0)));
}

void input(int &iYear,int &iMonth,int &iDay){
    //Declare variables
    string month;
    const int SIZE=4;
    char day[SIZE];
    
    //Prompt for input
    cout<<"Input the date to convert to day here"<<endl;
    cout<<"Format date like July 4, 2008"<<endl;
    cin>>month>>day>>iYear;
    
    cout<<month<<" "<<day<<" "<<iYear<<endl;
    if(iYear<0){
        cout<<"Your having a bad year"<<endl;
        exit(EXIT_FAILURE);
    }
    
    //Convert char day to integer day
    int cnt=0;
    while(day[cnt]!='\0'){
        cnt++;
    }
    if(cnt==2)iDay=day[0]-48;//Single Digit Days
    if(cnt==3)iDay=(day[0]-48)*10+(day[1]-'0');//2 Digit days
    if(iDay<0 || iDay>31){
        cout<<"Your having a bad day"<<endl;
        exit(EXIT_FAILURE);
    }
    
    
    //Convert Month to integer Month
    if(month=="January")       iMonth=1;
    else if(month=="February") iMonth=2;
    else if(month=="March")    iMonth=3;
    else if(month=="April")    iMonth=4;
    else if(month=="May")      iMonth=5;
    else if(month=="June")     iMonth=6;
    else if(month=="July")     iMonth=7;
    else if(month=="August")   iMonth=8;
    else if(month=="September")iMonth=9;
    else if(month=="October")  iMonth=10;
    else if(month=="November") iMonth=11;
    else if(month=="December") iMonth=12;
    else{
        cout<<"Bad Month"<<endl;
        exit(EXIT_FAILURE);
    }
}

