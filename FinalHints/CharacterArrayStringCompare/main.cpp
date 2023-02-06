/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 8th, 2022, 10:45 AM
 * Purpose:  Final Hint
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
int nCols(char []);

//Execution begins here!
int main () {
   //Declare Variables
   char str[2][15];
   char temp[15];

   //Initialize variables
   strcpy(str[0], "Ted");
   strcpy(str[1], "John");

   //Sort the variables
   if(strcmp(str[0], str[1])>0){
       //Just a string swap
       strcpy(temp,str[1]);
       strcpy(str[1],str[0]);
       strcpy(str[0],temp);
   }
   
   //Display the sorted variables
   cout<<"The sorted Strings"<<endl;
   cout<<setw(5)<<str[0]<<" -> Number of letters = "<<nCols(str[0])<<endl;
   cout<<setw(5)<<str[1]<<" -> Number of letters = "<<nCols(str[1])<<endl;
   
   return(0);
}

int nCols(char a[]){
    int col=0;
    while(a[col++]!='\0'){}
    return col-1;
}