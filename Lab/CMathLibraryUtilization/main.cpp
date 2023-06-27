/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on June 27, 2023, 10:16 AM
 * Purpose:  Utilize the CMath library
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const float PI=4*atan(1.0f);   //Opp/Adj right triangle 45 degrees * 4 = 180
const float CNVRDEG=180.0f/PI; //Conversion Radians to Degrees
const float CNVDEGR=PI/180.0f;  //Conversion Degrees to Radians

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));//Set the seed to now
    
    //Declare Variables
    float angDeg,//Angle in Degrees
          angRad;//Angle in Radians
    int      var,//Variable to raise to a power
             pwr;//Power to raise variable to
    float ans1,  //Answer 1,2,3
          ans2,
          ans3;
    
    //Initialize Variables
    angDeg=rand()%91;//[0-90]
    var=10;
    pwr=2;
    
    //The Process -> Map Inputs to Outputs
    angRad=angDeg*CNVDEGR;
    ans1=pow(var,pwr);
    ans2=exp(pwr*log(var));
    ans3=var*var;
    
    //Display Inputs/Outputs
    cout<<"Trig and Power Function Illustration"<<endl;
    cout<<"               Sin("<<angDeg<<")="<<sin(angRad)<<endl;
    cout<<"               Cos("<<angDeg<<")="<<cos(angRad)<<endl;
    cout<<"               Tan("<<angDeg<<")="<<tan(angRad)<<endl;
    cout<<"Tan=Sin/Cos -> Tan("<<angDeg<<")="<<sin(angRad)/cos(angRad)<<endl;
    cout<<fixed<<setprecision(8)<<showpoint;
    cout<<"Power Function  "<<var<<"^"<<pwr<<"="<<ans1<<endl;
    cout<<"ExpLog Function "<<var<<"^"<<pwr<<"="<<ans2<<endl;
    cout<<"var *var        "<<var<<"^"<<pwr<<"="<<ans3<<endl;

    //Exit the Program
    return 0;
}