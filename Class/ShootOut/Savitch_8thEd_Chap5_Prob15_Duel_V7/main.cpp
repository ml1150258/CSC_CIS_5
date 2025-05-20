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
float pUnifrm();//Uniform Random Number Density
bool  pKill(float);//Probability of Kill
void  shoot(bool,float,bool &,bool &);//Shoot and Evaluate
void  incrmnt(bool,bool,bool,int &,int &,int &);//Increment the Living
bool  mrThn1(bool,bool,bool);//Is more than 1 Living?

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    float aSkill,bSkill,cSkill;
    bool aLive,bLive,cLive;
    int nTrials,aCnt,bCnt,cCnt;
    
    //Initialize or input i.e. set variable values
    aSkill=1/3.0f;//Aaron skill level 33.33%
    bSkill=1/2.0f;//Bob skill level 50%
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
            shoot(aLive,aSkill,cLive,bLive);
            //Bob Shoots
            shoot(bLive,bSkill,cLive,aLive);
            //Charlie Shoots
            shoot(cLive,cSkill,bLive,aLive);
            
        }while(mrThn1(aLive,bLive,cLive));
        
        //Which ever lives this pass, increment their achievement
        incrmnt(aLive,bLive,cLive,aCnt,bCnt,cCnt);
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

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                More Than 1
//Inputs:
//     aLive, bLive, cLive -> represents Living = True, Dead = False
//Outputs:
//     True if more than 1 Living
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
bool  mrThn1(bool aLive,bool bLive,bool cLive){
    return aLive+bLive+cLive!=1;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Increment the Living
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void  incrmnt(bool aLive,bool bLive,bool cLive,
              int &aCnt,int &bCnt,int &cCnt){
    aCnt+=(aLive?1:0);
    bCnt+=(bLive?1:0);
    cCnt+=(cLive?1:0);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Shoot the More Capable
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void  shoot(bool live,float skill,bool &x,bool &y){
    if(live){
        if(x)x=!pKill(skill);
        else if(y)y=!pKill(skill);
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                              Probability of Kill
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
bool  pKill(float prb){
    return pUnifrm()<=prb?true:false;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                Uniform Distribution
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float pUnifrm(){
    return rand()/MAXRAND;
}