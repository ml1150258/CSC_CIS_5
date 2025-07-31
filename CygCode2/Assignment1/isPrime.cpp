/*
     Author: Dr. Mark E. Lehr
     Date:   June 23rd, 2025
     Purpose:  Template to start all Programming Assignments
*/

//System Libraries
#include <iostream>  //Input/Output
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes
bool isPrime(int);
unsigned short usRand(unsigned short Xo=2);

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    int n;

    //Initialize Variables
    n=1;

    //Process - Map the inputs to outputs
    for(int i=1;i<=31;i++){
        n*=2;
        int nm1=n-1;
        cout<<"2^"<<i<<"-1 = "<<nm1<<(isPrime(nm1)?" is Prime":" is not Prime")<<endl;
    }

    for(int i=13105;i<=13110;i++){
        cout<<i<<(isPrime(i)?" is Prime":" is not Prime")<<endl;
    }

    for(int i=0;i<50;i++){
        cout<<"Random Number = "<<usRand(i+53)<<endl;
    }

    //Display the results

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}

unsigned short usRand(unsigned short Xo){
    static unsigned short Xn,count;
    if(count++==0){
        Xn=Xo;
    }
    static int a=1<<16;
    static int b=65497;
    static int m=a-1;
    cout<<a<<endl;
    cout<<m<<endl;
    int iXn=(a*Xn)%m;
    Xn=(iXn+b)%m;
    return Xn;
}

bool isPrime(int n){
    if(n<=1)return false;
    int sqrN=sqrt(n);
    for(int i=2;i<=sqrN;i++){
        if(n%i==0)return false;
    }
    return true;
}