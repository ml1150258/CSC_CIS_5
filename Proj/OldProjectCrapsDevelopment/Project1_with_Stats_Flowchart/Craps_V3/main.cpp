/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  The game of craps
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Srand/Rand
#include <ctime>     //Time
#include <iomanip>   //Format
#include <fstream>   //File I/O
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
float CNVPERC=100.0f;//Conversion to Percentage

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ifstream in;
    ofstream out;
    int nGames,wins,losses,nThrows,mxThrGm,fGames;
    int w12,w11,w10,w9,w8,w7,w6,w5,w4,w3,w2;
    int l12,l11,l10,l9,l8,l7,l6,l5,l4,l3,l2;

    
    //Initialize variables
    nGames=3600000,wins=0,losses=0,nThrows=0,mxThrGm=0;
    w12=w11=w10=w9=w8=w7=w6=w5=w4=w3=w2=0;
    l12=l11=l10=l9=l8=l7=l6=l5=l4=l3=l2=0;
    
    //Open the file and read-in the number of games to
    //play from the file
    in.open("fGames.dat");
    out.open("stats.dat");
    while(in>>fGames);
    nGames=fGames<nGames?fGames:nGames;
    
    //Play Craps
    for(int game=1;game<=nGames;game++){
        //Throw a pair of die
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
        unsigned short gmThrws=1;
        bool win=false;
        nThrows++;
        if(sum1==2||sum1==3||sum1==12)losses++;
        else if(sum1==7||sum1==11){
            wins++;
            win=true;
        }else{
            bool stpGame=false;
            do{
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sum2=die1+die2;
                nThrows++;gmThrws++;
                if(sum1==sum2){
                    wins++;
                    stpGame=true;
                    win=true;
                }else if(sum2==7){
                    losses++;
                    stpGame=true;
                }
            }while(!stpGame);
        }
        if(gmThrws>mxThrGm)mxThrGm=gmThrws;
        switch(sum1){
            case 12:win?w12++:l12++;break;
            case 11:win?w11++:l11++;break;
            case 10:win?w10++:l10++;break;
            case  9:win?w9++:l9++;break;
            case  8:win?w8++:l8++;break;
            case  7:win?w7++:l7++;break;
            case  6:win?w6++:l6++;break;
            case  5:win?w5++:l5++;break;
            case  4:win?w4++:l4++;break;
            case  3:win?w3++:l3++;break;
            default:win?w2++:l2++;
        }
    }
    
    //Output the transformed data
    cout<<"Number of Games played = "<<nGames<<endl;
    cout<<"Number of Games played = "<<wins+losses<<endl;
    cout<<"Number of wins         = "<<wins<<endl;
    cout<<"Number of losses       = "<<losses<<endl;
    cout<<"Percentage wins        = "<<CNVPERC*wins/nGames<<"%"<<endl;
    cout<<"Percentage losses      = "<<CNVPERC*losses/nGames<<"%"<<endl;
    cout<<"Average Throws/Game    = "<<static_cast<float>(nThrows)/nGames<<endl;
    cout<<"Max Throws in a Game   = "<<mxThrGm<<endl;
    cout<<"Throw    Wins  Losses   Total"<<endl;
    cout<<"  2  "<<setw(8)<<w2<<setw(8)<<l2<<setw(8)<<w2+l2<<endl;
    cout<<"  3  "<<setw(8)<<w3<<setw(8)<<l3<<setw(8)<<w3+l3<<endl;
    cout<<"  4  "<<setw(8)<<w4<<setw(8)<<l4<<setw(8)<<w4+l4<<endl;
    cout<<"  5  "<<setw(8)<<w5<<setw(8)<<l5<<setw(8)<<w5+l5<<endl;
    cout<<"  6  "<<setw(8)<<w6<<setw(8)<<l6<<setw(8)<<w6+l6<<endl;
    cout<<"  7  "<<setw(8)<<w7<<setw(8)<<l7<<setw(8)<<w7+l7<<endl;
    cout<<"  8  "<<setw(8)<<w8<<setw(8)<<l8<<setw(8)<<w8+l8<<endl;
    cout<<"  9  "<<setw(8)<<w9<<setw(8)<<l9<<setw(8)<<w9+l9<<endl;
    cout<<" 10  "<<setw(8)<<w10<<setw(8)<<l10<<setw(8)<<w10+l10<<endl;
    cout<<" 11  "<<setw(8)<<w11<<setw(8)<<l11<<setw(8)<<w11+l11<<endl;
    cout<<" 12  "<<setw(8)<<w12<<setw(8)<<l12<<setw(8)<<w12+l12<<endl;
    cout<<"Total Games using wins and losses = "<<w2+w3+w4+w5+w6+w7+w8+w9+
            w10+w11+w12+l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12<<endl;
    
    //Output the data to a file
    out<<"Number of Games played = "<<nGames<<endl;
    out<<"Number of Games played = "<<wins+losses<<endl;
    out<<"Number of wins         = "<<wins<<endl;
    out<<"Number of losses       = "<<losses<<endl;
    out<<"Percentage wins        = "<<CNVPERC*wins/nGames<<"%"<<endl;
    out<<"Percentage losses      = "<<CNVPERC*losses/nGames<<"%"<<endl;
    out<<"Average Throws/Game    = "<<static_cast<float>(nThrows)/nGames<<endl;
    out<<"Max Throws in a Game   = "<<mxThrGm<<endl;
    out<<"Throw    Wins  Losses   Total"<<endl;
    out<<"  2  "<<setw(8)<<w2<<setw(8)<<l2<<setw(8)<<w2+l2<<endl;
    out<<"  3  "<<setw(8)<<w3<<setw(8)<<l3<<setw(8)<<w3+l3<<endl;
    out<<"  4  "<<setw(8)<<w4<<setw(8)<<l4<<setw(8)<<w4+l4<<endl;
    out<<"  5  "<<setw(8)<<w5<<setw(8)<<l5<<setw(8)<<w5+l5<<endl;
    out<<"  6  "<<setw(8)<<w6<<setw(8)<<l6<<setw(8)<<w6+l6<<endl;
    out<<"  7  "<<setw(8)<<w7<<setw(8)<<l7<<setw(8)<<w7+l7<<endl;
    out<<"  8  "<<setw(8)<<w8<<setw(8)<<l8<<setw(8)<<w8+l8<<endl;
    out<<"  9  "<<setw(8)<<w9<<setw(8)<<l9<<setw(8)<<w9+l9<<endl;
    out<<" 10  "<<setw(8)<<w10<<setw(8)<<l10<<setw(8)<<w10+l10<<endl;
    out<<" 11  "<<setw(8)<<w11<<setw(8)<<l11<<setw(8)<<w11+l11<<endl;
    out<<" 12  "<<setw(8)<<w12<<setw(8)<<l12<<setw(8)<<w12+l12<<endl;
    out<<"Total Games using wins and losses = "<<w2+w3+w4+w5+w6+w7+w8+w9+
            w10+w11+w12+l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12<<endl;
    
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}