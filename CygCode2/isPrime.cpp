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
bool check(int [],int [],int);
void mrkSort(int [],int);

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed

    //Declare Variables
    int n;
    const int SIZE=(1<<16)-1;
    int index[SIZE],rArray[SIZE];

    //Initialize Variables
    n=1;

    //Process - Map the inputs to outputs
    for(int i=1;i<=31;i++){
        n*=2;
        int nm1=n-1;
        cout<<"2^"<<i<<"-1 = "<<nm1<<(isPrime(nm1)?" is Prime":" is not Prime")<<endl;
    }

    for(int i=33105;i<=33150;i++){
        cout<<i<<(isPrime(i)?" is Prime":" is not Prime")<<endl;
    }

    for(int i=33000;i<=33100;i++){
        cout<<"Random Number = "<<usRand()<<endl;
    }

    //Display the results
    cout<<"The Random Sequence is "<<(check(index,rArray,SIZE)?"good":"bad")<<endl;

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}

bool check(int index[],int rArray[],int SIZE){
    for(int i=0;i<SIZE;i++){
        index[i]=i;
        rArray[i]=usRand();
    }
    mrkSort(rArray,SIZE);
    for(int i=0;i<SIZE;i++){
        cout<<index[i]<<" "<<i<<" "<<rArray[i]<<endl;
        //if(index[i]!=rArray[i])return false;
    }
    return true;
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

unsigned short usRand(unsigned short Xo){
    static unsigned short Xn,count;
    if(count++==0){
        Xn=Xo;
    }
    
    static int b=(1<<17)-1;//Prime
    static int a=(1<<19)-1;//Prime
    static int m=(1<<16)-1;//Not Prime

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