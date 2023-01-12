/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 12th, 2023, 9:55 AM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem Candy Bar"<<endl;
    cout<<"1 To run Problem Grade/Score"<<endl;
    cout<<"2 To run Problem Haircut"<<endl;
    cout<<"3 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"4 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"5 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"6 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"7 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"8 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"9 To run Problem Savtich/Gaddis XXXX"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
            //Declare Variables
            unsigned short height,age,weight;
            char  sex;
            const unsigned char CNDBAR=230;//Calories/candy bar
            float BMR,nmCdBrs;//Number of Candy Bars

            //Initialize Variables
            cout<<"This program calculates the number"<<endl;
            cout<<" of candy bars you may consume "<<endl;
            cout<<"per day to maintain your weight"<<endl;
            cout<<"Input your sex M/F, height in inches, "<<endl;
            cout<<"weight in lbs, and age in years"<<endl;
            cin>>sex>>height>>weight>>age;

            //Map/Process the Inputs -> Outputs
            if(sex=='M'){
                  BMR=66  +(6.3*weight)+(12.9*height)+(6.8*age);
            }else{
                  BMR=655 +(4.3*weight)+( 4.7*height)+(4.7*age);
            }
            nmCdBrs=BMR/CNDBAR;

            //Display Inputs/Outputs
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<endl<<"The number of candy bars I may consume ";
            cout<<"="<<setw(6)<<nmCdBrs<<endl;

            break;
        }
        case '1':{
            //Set random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare Variables
            unsigned char score;
            char grade;
            const char ASCR=90,BSCR=80,CSCR=70,DSCR=60;

            //Initialize Variables
            score=rand()%51+50;//[50-100]

            //Map/Process the Inputs -> Outputs
            //x = (bool expression)?(true statement):(false statement);
            //grade = (1==1)?(true):(false);
            grade = (score>=ASCR)?('A'):
                    (score>=BSCR)?('B'):
                    (score>=CSCR)?('C'):
                    (score>=DSCR)?('D'):('F');

            //Display Inputs/Outputs
            cout<<"The score of "<<static_cast<int>(score)
                    <<" gives a grade = "<<grade<<endl;
            break;
        }
        case '2':{
                //Set random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare Variables
                bool male,supHero,anime,steak;
                string hairCut;

                //Initialize Variables
                male=   rand()%2;//Male or Female
                supHero=rand()%2;//Hero or Villain
                anime=  rand()%2;//Anime or Sitcom
                steak=  rand()%2;//Steak or Sushi

                //Map/Process the Inputs -> Outputs
                //x = (bool expression)?(true statement):(false statement);
                //grade = (1==1)?(true):(false);
                hairCut = (male)?
                            (supHero)?
                                (steak)?
                                    ("Male,Hero,Steak -> You should get a float top"):
                                    ("Male,Hero,Sushi -> You should get a pompadour"):
                                ("Male,Villain -> You should get a mohawk"):
                            (supHero)?
                                (anime)?
                                    ("Female,Hero,Anime -> You should go with bangs"):
                                    ("Female,Hero,Sitcom -> You shoule get a bob"):
                                ("Female,Villain -> You should get a mohawk");

                //Display Inputs/Outputs
                cout<<"What type of Haircut based on "<<
                        "Sex, Hero Status, Food, or Program Type"<<endl;
                cout<<hairCut<<endl;
            break;
        }
        case '3':cout<<"You are in Problem 0"<<endl; break;
        case '4':cout<<"You are in Problem 0"<<endl; break;
        case '5':cout<<"You are in Problem 0"<<endl; break;
        case '6':cout<<"You are in Problem 0"<<endl; break;
        case '7':cout<<"You are in Problem 0"<<endl; break;
        case '8':cout<<"You are in Problem 0"<<endl; break;
        case '9':cout<<"You are in Problem 0"<<endl; break;
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}