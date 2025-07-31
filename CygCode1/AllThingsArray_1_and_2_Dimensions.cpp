/*
Name:  Dr. Mark Lehr
Date:  03/13/25
Purpose: All Things Arrays 1 and 2 D Static/Dynamic
*/

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units
const int COLS=8;//Number of cols for a 1Dim or 2Dim static or Dynamic array

//Function Prototypes
void fillAry(int [],int);//1D static Array fill
void fillAry(int [],int,int);//1D static Array fill acting like a 2D Array
void fillAry(int [][COLS],int);//2D static Array fill
int  *fillAry(int);  //1D Dynamic Fill
int **fillAry(int,int);//2D Dynamic Fill
void prntA12(int [],int,int);//1D static Array print acting like a 2D Array
void prntAry(int [],int,int);//1D static Array print
void prntAry(int [][COLS],int);//2D static array print
void prntAry(int **,int,int);//2D Dynamic array print
void destroy(int *);
void destroy(int **,int);


int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
    const int ROWS=15;
	const int SIZE=COLS*ROWS;
	int rows=ROWS;
	int cols=COLS;
	int a1DStic[SIZE];
    int a1D2Stc[ROWS*COLS];
    int a2DStic[ROWS][COLS];
    int *a1DDmic, **a2DDmic;
    int size;

	//Initialize Values
	fillAry(a1DStic,SIZE);
    fillAry(a1D2Stc,ROWS,COLS);
    fillAry(a2DStic,ROWS);
    size=SIZE;
    a1DDmic=fillAry(size);
	a2DDmic=fillAry(rows,cols);
	
	//Map the Inputs to Outputs - Process

	//Display and output the results
    cout<<"1 Dimensional Static Array"<<endl;
    prntAry(a1DStic,SIZE,COLS);
    cout<<"1 Dimensional Dynamic Array"<<endl;
    prntAry(a1DDmic,size,COLS);
    cout<<"1 Dimensional As 2D Static Array"<<endl;
    prntA12(a1D2Stc,ROWS,COLS);
    cout<<"2D Static Array"<<endl;
    prntAry(a2DStic,ROWS);
	cout<<"2D Dynamic Array"<<endl;
    prntAry(a2DStic,ROWS);

    //De-allocate memory
    destroy(a1DDmic);
	destroy(a2DDmic,rows);
	
	//Exit the program
	return 0;
}

void destroy(int *a){
	delete []a;
}

void destroy(int **a,int rows){
	for(int r=0;r<rows;r++){
		delete []a[r];
	}
	delete []a;
}


int **fillAry(int rows,int cols){
    int **a=new int *[rows];
	for(int r=0;r<rows;r++){
		a[r]=new int[cols];
		for(int c=0;c<cols;c++){
			a[r][c]=rand()%90+10;//[10-99] 2 digit random numbers
		}
	}
    return a;
}


int *fillAry(int n){
    int *a=new int[n];
	for(int i=0;i<n;i++){
		a[i]=rand()%90+10;//[10-99] 2 digit random numbers
	}
    return a;
}

void fillAry(int a[],int r,int c){
	for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
		    a[i*COLS+j]=rand()%90+10;//[10-99] 2 digit random numbers
        }
	}
}

void fillAry(int a[][COLS],int ROWS){
	for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
		    a[i][j]=rand()%90+10;//[10-99] 2 digit random numbers
        }
	}
}

void fillAry(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=rand()%90+10;//[10-99] 2 digit random numbers
	}
}

void prntA12(int a[],int r,int c){
	cout<<endl;
	for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
		    cout<<a[i*COLS+j]<<" ";//[10-99] 2 digit random numbers
        }
        cout<<endl;
	}
	cout<<endl;
}

void prntAry(int a[],int n,int perLine){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}

void prntAry(int a[][COLS],int ROWS){
	cout<<endl;
	for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
		    cout<<a[i][j]<<" ";//[10-99] 2 digit random numbers
        }
        cout<<endl;
	}
	cout<<endl;
}

void prntAry(int **a,int rows,int cols){
	cout<<endl;
	for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
			//cout<<a[i][j]<<" ";//[10-99] 2 digit random numbers
			//cout<<*(a[i]+j)<<" ";//[10-99] 2 digit random numbers
		    cout<<*(*(a+i)+j)<<" ";//[10-99] 2 digit random numbers
        }
        cout<<endl;
	}
	cout<<endl;
}