/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 10th, 2023, 9:55 AM
 * Purpose:  Type of Haircut
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Number Library
#include <cstring>   //String Library
#include <ctime>     //Time to set Random Number Seed
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
    char male,superH,anime,steak;
    string msg;
    
    //Initialize Variables
    male=rand()%2;
    superH=rand()%2;
    anime=rand()%2;
    steak=rand()%2;
    
    //Map/Process the Inputs -> Outputs
    //(true)?("true"):("false")
    msg=(male)?
            ((superH)?
                ((steak)?
                    ("You should get a flat top"):
                    ("You should get a pompadour"))
                :("You should get a mohawk")):
            ((superH)?
                ((anime)?
                    ("You should go with bangs"):
                    ("You should get a bob")):
                ("You should get a mohawk"));
    
    //Display Inputs/Outputs
    cout<<"The inputs to the Haircut program are:"<<endl;
    cout<<(male?"Male":"Female")<<endl;
    cout<<(superH?"Super Hero":"Super Villain")<<endl;
    cout<<(male?(steak?"Steak":"Sushi"):(anime?"Anime":"Sitcom"))<<endl;
    cout<<msg<<endl;
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}