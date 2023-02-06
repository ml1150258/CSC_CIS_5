/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 24, 2022, 11:00 AM
 * Purpose:  Avg Score Dropping the Lowest
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
void  getScr(int &,int &,int &,int &,int &);
int   fndLwst(int,int,int,int,int);
float calcAvg(int,int,int,int,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    int score1,score2,score3,score4,score5;
    
    //Initialize Variables
    score1=score2=score3=score4=score5=0;
    getScr(score1,score2,score3,score4,score5);
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout<<"These are the 5 test scores"<<endl;
    cout<<"Score 1 = "<<score1<<endl;
    cout<<"Score 2 = "<<score2<<endl;
    cout<<"Score 3 = "<<score3<<endl;
    cout<<"Score 4 = "<<score4<<endl;
    cout<<"Score 5 = "<<score5<<endl;
    cout<<"The average of the 4 highest scores = "
        <<calcAvg(score1,score2,score3,score4,score5)<<endl;
    
    //Exit the program
    return 0;
}

float calcAvg(int s1,int s2,int s3,int s4,int s5){
    return (s1+s2+s3+s4+s5-fndLwst(s1,s2,s3,s4,s5))/4.0f;
}

int  fndLwst(int s1,int s2,int s3,int s4,int s5){
    int lowest=s1;
    if(s2<lowest)lowest=s2;
    if(s3<lowest)lowest=s3;
    if(s4<lowest)lowest=s4;
    if(s5<lowest)lowest=s5;
    return lowest;
}

void getScr(int &s1,int &s2,int &s3,int &s4,int &s5){
    //Prompt for Inputs
    cout<<"This program calculates the average score"<<endl;
    cout<<"Type in 5 integers >= 0 and <= 100"<<endl;
    cout<<"The original scores before inputing values are"<<endl;
    cout<<"Score 1 = "<<s1<<endl;
    cout<<"Score 2 = "<<s2<<endl;
    cout<<"Score 3 = "<<s3<<endl;
    cout<<"Score 4 = "<<s4<<endl;
    cout<<"Score 5 = "<<s5<<endl;   
    cout<<"Type each in individually"<<endl;
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s1;
        cout<<"You entered "<<s1<<endl;
        if(s1<0||s1>100)cout<<"This is invalid"<<endl;
    }while(s1<0||s1>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s2;
        cout<<"You entered "<<s2<<endl;
        if(s2<0||s2>100)cout<<"This is invalid"<<endl;
    }while(s2<0||s2>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s3;
        cout<<"You entered "<<s3<<endl;
        if(s3<0||s3>100)cout<<"This is invalid"<<endl;
    }while(s3<0||s3>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s4;
        cout<<"You entered "<<s4<<endl;
        if(s4<0||s4>100)cout<<"This is invalid"<<endl;
    }while(s4<0||s4>100);
    
    //Input a Value
    do{
        cout<<"Input a valid score"<<endl;
        cin>>s5;
        cout<<"You entered "<<s5<<endl;
        if(s5<0||s5>100)cout<<"This is invalid"<<endl;
    }while(s5<0||s5>100);
}