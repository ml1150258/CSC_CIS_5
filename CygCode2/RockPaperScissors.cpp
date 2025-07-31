/*
     Author: Dr. Mark E. Lehr
     Date:   July 2nd, 2025
     Purpose: Rock Paper Scissors
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
    char p1,p2;

    //Initialize Variables
    cout<<"This is a game of Rock Paper Scissors"<<endl;
    cout<<"Player 1 type in R,r,P,p,S,s"<<endl;
    cin>>p1;
    cout<<"Player 2 type in R,r,P,p,S,s"<<endl;
    cin>>p2;

    //Process - Map the inputs to outputs
    if(p1>=97)p1-=32;//Lower Case to Upper Case
    if(p2>=97)p2-=32;//Lower Case to Upper Case
    if(!(p1=='R' || p1=='S' || p1=='P')){
        cout<<"Not Possible"<<endl;
        return 1;
    }
    if(!(p2=='R' || p2=='S' || p2=='P')){
        cout<<"Not Possible"<<endl;
        return 1;
    }

    //Display the results
    cout<<"Player 1 type in "<<p1<<endl;
    cout<<"Player 2 type in "<<p2<<endl;
    if(p1==p2)cout<<"The is a Tie"<<endl;
    else if(p1=='R'){
        if(p2=='S')cout<<"Player 1 Wins"<<endl;
        else cout<<"Player 2 Wins"<<endl;
    }else if(p1=='P'){
        if(p2=='S')cout<<"Player 2 Wins"<<endl;
        else cout<<"Player 1 Wins"<<endl;       
    }else{
        if(p2=='P')cout<<"Player 1 Wins"<<endl;
        else cout<<"Player 2 Wins"<<endl;       
    }


    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}