/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void print1(const string &);
void read(const char [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[]="key.dat",fileAns[]="answer.dat";
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(fileKey,key);
    read(fileAns,answers);
    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    print1(key);
    print1(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

void print1(const string &scr){
    for(int i=0;i<scr.size();i++){
        cout<<scr[i];
    }
    cout<<endl;
}

void print(const string &scr){
    for(int i=0;i<scr.size();i++){
        cout<<scr[i]<<" ";
    }
    cout<<endl;
}
void read(const char x[],string &result){
    fstream in;
    in.open(x,ios::in);
    getline(in,result);
    in.close();
}
void readCM(const char x[],string &result){
    getline(cin,result);
}
int  compare(const string &key,const string &ans,string &scr){
    scr="";
    int right=0;
    for(int i=8;i<key.size();i+=2){
        if(key[i]==ans[i]){
            scr+="C";
            right++;
        }else{
            scr+="W";
        }
    }
    return right;
}