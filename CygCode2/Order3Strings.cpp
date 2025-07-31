/*
     Author: Dr. Mark E. Lehr
     Date:   July 2nd, 2025
     Purpose:  Order 3 things
*/

//System Libraries
#include <iostream>  //Input/Output
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    string a,b,c;

    //Initialize Variables
    c="Mark";
    a="Mary";
    b="Marc";

    //Process - Map the inputs to outputs
    //Display the results
    cout<<"The Proper order of "<<a<<" "<<b<<" "<<c<<" is ";
    if(a<=b && b<=c)cout<<a<<" "<<b<<" "<<c<<endl;
    else if(a<=c && c<=b)cout<<a<<" "<<c<<" "<<b<<endl;
    else if(b<=a && a<=c)cout<<b<<" "<<a<<" "<<c<<endl;
    else if(b<=c && c<=a)cout<<b<<" "<<c<<" "<<a<<endl;
    else if(c<=a && a<=b)cout<<c<<" "<<a<<" "<<b<<endl;
    else if(c<=b && b<=a)cout<<c<<" "<<b<<" "<<a<<endl;
    else cout<<"If you get here something is wrong"<<endl;
    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}