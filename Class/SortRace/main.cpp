/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 17, 2023, 9:40 AM
 * Purpose:  Sort Race
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float racer1,racer2,racer3;
    
    //Initialize Variables
    racer1=(rand()%91+10)/10.0f;
    racer2=(rand()%91+10)/10.0f;
    racer3=(rand()%91+10)/10.0f;
    
    //Map/Process the Inputs -> Outputs
    cout<<"Who wins in the Race"<<endl;
    if(racer1<=racer2 && racer2<=racer3){
        cout<<racer1<<" beats "<<racer2<<" beats "<<racer3<<endl;
    }
    if(racer1<=racer3 && racer3<=racer2){
        cout<<racer1<<" beats "<<racer3<<" beats "<<racer2<<endl;
    }
    if(racer2<=racer1 && racer1<=racer3){
        cout<<racer2<<" beats "<<racer1<<" beats "<<racer3<<endl;
    }
    if(racer2<=racer3 && racer3<=racer1){
        cout<<racer2<<" beats "<<racer3<<" beats "<<racer1<<endl;
    }
    if(racer3<=racer1 && racer1<=racer2){
        cout<<racer3<<" beats "<<racer1<<" beats "<<racer2<<endl;
    }
    if(racer3<=racer2 && racer2<=racer1){
        cout<<racer3<<" beats "<<racer2<<" beats "<<racer1<<endl;
    }
    cout<<endl;
    
    //Display Inputs/Outputs
    cout<<"Racer 1 time = "<<racer1<<" seconds"<<endl;
    cout<<"Racer 2 time = "<<racer2<<" seconds"<<endl;
    cout<<"Racer 3 time = "<<racer3<<" seconds"<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}