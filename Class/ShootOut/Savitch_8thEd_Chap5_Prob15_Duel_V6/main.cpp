/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2019, 12:46 PM
 * Purpose:  Shoot off simulation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
float pUnifrm();
bool  pKill(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    float aSkill,bSkill,cSkill;
    bool aLive,bLive,cLive;
    int nTrials,aCnt,bCnt,cCnt;
    
    //Initialize or input i.e. set variable values
    aSkill=1.0f/3;//Aaron skill level 33.33%
    bSkill=1.0f/2;//Bob skill level 50%
    cSkill=1.0f;  //Charlie skill level = 100%
    nTrials=1000000;//Number of trials
    aCnt=bCnt=cCnt=0;
    
    //Loop for the number of games/trials
    for(int game=1;game<=nTrials;game++){
        //Start with everyone alive
        aLive=bLive=cLive=true;

        //Loop until 1 Left Standing
        do{
            //Aaron Shoots
            if(aLive){
                if(cLive)cLive=!pKill(aSkill);
                else if(bLive)bLive=!pKill(aSkill);
            }
            //Bob Shoots
            if(bLive){
                if(cLive)cLive=!pKill(bSkill);
                else if(aLive)aLive=!pKill(bSkill);
            }
            //Charlie Shoots
            if(cLive){
                if(bLive)bLive=!pKill(cSkill);
                else if(aLive)aLive=!pKill(cSkill);
            }
        }while(aLive+bLive+cLive!=1);
        aCnt+=(aLive?1:0);
        bCnt+=(bLive?1:0);
        cCnt+=(cLive?1:0);
    }
    
    //Display the outputs
    cout<<"The Number of Trials = "<<nTrials<<endl;
    cout<<"The Number of Trials = "<<aCnt+bCnt+cCnt<<endl;
    cout<<"Aaron   Lives "<<100.0f*aCnt/nTrials<<" % of the time"<<endl;
    cout<<"Bob     Lives "<<100.0f*bCnt/nTrials<<" % of the time"<<endl;
    cout<<"Charlie Lives "<<100.0f*cCnt/nTrials<<" % of the time"<<endl;
    

    //Exit stage right or left!
    return 0;
}

bool  pKill(float prb){
    return pUnifrm()<=prb?true:false;
}

float pUnifrm(){
    return rand()/MAXRAND;
}