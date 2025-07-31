/*
     Author: Dr. Mark E. Lehr
     Date:   July 2nd, 2025
     Purpose:  Order 3 things
*/

//System Libraries
#include <iostream>  //Input/Output
#include <string.h>  //strcpy and strcmp
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    const int SIZE=10;
    char a[SIZE],b[SIZE],c[SIZE];

    //Initialize Variables
    strcpy(c,"Mark");
    strcpy(a,"Mary");
    strcpy(b,"Marc");

    //Process - Map the inputs to outputs
    //Display the results
    cout<<"The Proper order of "<<a<<" "<<b<<" "<<c<<" is ";
    if(strcmp(a,b)<=0 && strcmp(b,c)<=0)cout<<a<<" "<<b<<" "<<c<<endl;
    else if(strcmp(a,c)<=0 && strcmp(c,b)<=0)cout<<a<<" "<<c<<" "<<b<<endl;
    else if(strcmp(b,a)<=0 && strcmp(a,c)<=0)cout<<b<<" "<<a<<" "<<c<<endl;
    else if(strcmp(b,c)<=0 && strcmp(c,a)<=0)cout<<b<<" "<<c<<" "<<a<<endl;
    else if(strcmp(c,a)<=0 && strcmp(a,b)<=0)cout<<c<<" "<<a<<" "<<b<<endl;
    else if(strcmp(c,b)<=0 && strcmp(b,a)<=0)cout<<c<<" "<<b<<" "<<a<<endl;
    else cout<<"If you get here something is wrong"<<endl;
    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}