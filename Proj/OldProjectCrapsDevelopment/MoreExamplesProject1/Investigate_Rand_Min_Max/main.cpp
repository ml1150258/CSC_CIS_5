/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Investigate Rand
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Srand/Rand
#include <ctime>    //Time function
#include <cmath>    //Math Function
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
    int loop,maxRnd,minRnd;
    
    //Initialize values
    loop=2100000000;
    maxRnd=minRnd=rand();
    for(int i=1;i<=loop;i++){
        int random=rand();
        if(maxRnd<random)maxRnd=random;
        if(minRnd>random)minRnd=random;
    }
    
    //Display the min and max Random number
    cout<<fixed<<setprecision(0);
    cout<<"Number of random function calls = "<<loop<<endl;
    cout<<"The Minimum random number detected = "<<minRnd<<endl;
    cout<<"The Maximum random number detected = "<<maxRnd<<endl;
    cout<<"                            2^31-1 = "
            <<setw(10)<<(pow(2,31)-1)<<endl;
    
    //Exit program!
    return 0;
}