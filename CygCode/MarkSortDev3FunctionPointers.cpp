/*
Name:  Dr. Mark Lehr
Date:  03/06/25
Purpose: Dev for Mark Sort
*/

//System Libraries
#include <iostream> //IOstream Library
#include <cstdlib>  //Random seed function
#include <ctime>    //Time Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes
int *fillAry(int);
void prntAry(int *,int,int);
void smlPos(int *,int,int);
void markSrt(int *,int);

int main(int argv,char *argc[]){
	//Random Seeds are set for the random number generator
    srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
    int size=100;
    int *array;
	
	//Initialize Values
    array=fillAry(size);
    prntAry(array,size,10);
	
	//Map the Inputs to Outputs - Process
    markSrt(array,size);
	
	//Display and output the results
    prntAry(array,size,10);

    //Clean up, deallocate memory
    delete []array;
	
	//Exit the program
	return 0;
}

void markSrt(int *a,int n){
    for(int i=0;i<n-1;i++){
        smlPos(a,n,i);
    }
}

void smlPos(int *a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(*(a+pos)>a[i]){
            *(a+pos)=*(a+pos)^a[i];
            a[i]=*(a+pos)^a[i];
            *(a+pos)=*(a+pos)^a[i];
        }
    }
}

int *fillAry(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;
    }
    return a;
}

void prntAry(int *a,int n,int perCol){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perCol==(perCol-1))cout<<endl;
    }
    cout<<endl;
}
