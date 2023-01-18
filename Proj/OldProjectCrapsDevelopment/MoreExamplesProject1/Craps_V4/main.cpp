/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Craps Implementation
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand/Srand
#include <ctime>    //Time
#include <fstream>  //File i/o
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
    int w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;//Wins given value of dice thrown
    int l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;//Loss given value of dice thrown
    int gameLm,games,totThrw;//Number of games and total throws per game
    short mxThrw;//Max throws per game
    float avgThrw;//Average throw per game
    
    ifstream in;//Input File stream
    ofstream out;//Output file
    string fileIn;
    char fileOut[]="stats.dat";
    
    //Initialize
    gameLm=10000000;
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    fileIn="nGames.dat";
    in.open(fileIn.c_str());
    out.open(fileOut);
    totThrw=0;
    
    //Read in the number of games
    while(in>>games);
    games=games>gameLm?gameLm:games;
    
    //Check the statistics
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        totThrw++;
        char cntThrw=1;
        if(sum==7)w7++;
        else if(sum==11)w11++;
        else if(sum==2)l2++;
        else if(sum==3)l3++;
        else if(sum==12)l12++;
        else{
            bool rollAgn;
            do{
                rollAgn=true;
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sumAgn=die1+die2;
                totThrw++;
                cntThrw++;
                if(sumAgn==7){
                    rollAgn=false;
                    if(sum==4)l4++;
                    if(sum==5)l5++;
                    if(sum==6)l6++;
                    if(sum==8)l8++;
                    if(sum==9)l9++;
                    if(sum==10)l10++;
                }else if(sumAgn==sum){
                    rollAgn=false;
                    switch(sum){
                        case 4:w4++;break;
                        case 5:w5++;break;
                        case 6:w6++;break;
                        case 8:w8++;break;
                        case 9:w9++;break;
                        case 10:w10++;break;
                    }
                }
            }while(rollAgn);
        }
        if(mxThrw<cntThrw)mxThrw=cntThrw;
    }
    avgThrw=static_cast<float>(totThrw)/games;
    
    //Output the results
    cout<<"Number of Craps Games Played = "<<games<<endl;
    cout<<"Result Table"<<endl;
    cout<<"Throw      Wins     Loses"<<endl;
    cout<<"  2  "<<setw(10)<<w2<<setw(10)<<l2<<endl;
    cout<<"  3  "<<setw(10)<<w3<<setw(10)<<l3<<endl;
    cout<<"  4  "<<setw(10)<<w4<<setw(10)<<l4<<endl;
    cout<<"  5  "<<setw(10)<<w5<<setw(10)<<l5<<endl;
    cout<<"  6  "<<setw(10)<<w6<<setw(10)<<l6<<endl;
    cout<<"  7  "<<setw(10)<<w7<<setw(10)<<l7<<endl;
    cout<<"  8  "<<setw(10)<<w8<<setw(10)<<l8<<endl;
    cout<<"  9  "<<setw(10)<<w9<<setw(10)<<l9<<endl;
    cout<<" 10  "<<setw(10)<<w10<<setw(10)<<l10<<endl;
    cout<<" 11  "<<setw(10)<<w11<<setw(10)<<l11<<endl;
    cout<<" 12  "<<setw(10)<<w12<<setw(10)<<l12<<endl;
    int wins=w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12;
    int loss=l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12;
    cout<<" Sum "<<setw(10)
            <<wins<<setw(10)
            <<loss<<setw(10)<<wins+loss<<endl;
    cout<<"Max throws in a game = "<<mxThrw<<endl;
    cout<<"Avg throws per game  = "<<avgThrw<<endl;
    
    //Output the results to a file
    out<<"Number of Craps Games Played = "<<games<<endl;
    out<<"Result Table"<<endl;
    out<<"Throw      Wins     Loses"<<endl;
    out<<"  2  "<<setw(10)<<w2<<setw(10)<<l2<<endl;
    out<<"  3  "<<setw(10)<<w3<<setw(10)<<l3<<endl;
    out<<"  4  "<<setw(10)<<w4<<setw(10)<<l4<<endl;
    out<<"  5  "<<setw(10)<<w5<<setw(10)<<l5<<endl;
    out<<"  6  "<<setw(10)<<w6<<setw(10)<<l6<<endl;
    out<<"  7  "<<setw(10)<<w7<<setw(10)<<l7<<endl;
    out<<"  8  "<<setw(10)<<w8<<setw(10)<<l8<<endl;
    out<<"  9  "<<setw(10)<<w9<<setw(10)<<l9<<endl;
    out<<" 10  "<<setw(10)<<w10<<setw(10)<<l10<<endl;
    out<<" 11  "<<setw(10)<<w11<<setw(10)<<l11<<endl;
    out<<" 12  "<<setw(10)<<w12<<setw(10)<<l12<<endl;
    out<<" Sum "<<setw(10)
            <<wins<<setw(10)
            <<loss<<setw(10)<<wins+loss<<endl;
    out<<"Max throws in a game = "<<mxThrw<<endl;
    out<<"Avg throws per game  = "<<avgThrw<<endl;
    
    //Close the file
    in.close();
    out.close();
    
    //Exit program!
    return 0;
}