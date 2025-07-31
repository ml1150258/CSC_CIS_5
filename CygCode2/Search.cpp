/*
     Author: Dr. Mark E. Lehr
     Date:   July 24, 2025
     Purpose:  Linear and Binary Search
*/

//System Libraries
#include <iostream>  //Input/Output
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes
void fillAry(int [], int);
void prntAry(const int [], int, int = 10);
int linSrch(const int [], int, int);
int binSrch(const int [], int, int);
void markSrt(int [], int);

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    //Declare Variables
    const int SIZE = 100; //Size of the array
    int array[SIZE];      //Array to hold random numbers

    //Initialize Variables
    fillAry(array, SIZE); // Fill the array with random numbers
    prntAry(array, SIZE); // Print the array elements

    //Process - Map the inputs to outputs
    int val=rand() % 90 + 10; // Random value between 10 and 99
    cout << "Value to search for: " << val << endl;

    //Test the Linear Search and Binary Search
    
    int index = linSrch(array, SIZE, val); // Perform linear search
    cout<<val<<" found at index using Linear Search : "<<index<<endl<<endl; // Display result of linear search

    index = binSrch(array, SIZE, val); // Perform binary search
    cout<<val<<" found at index using Binary Search : "<<index<<endl<<endl; // Display result of linear search
    
    //Sort
    markSrt(array, SIZE); // Sort the array using selection sort

    //Display the results
    prntAry(array, SIZE); // Print the array elements

    //Test the Linear Search and Binary Search
    
    index = linSrch(array, SIZE, val); // Perform linear search
    cout<<val<<" found at index using Linear Search : "<<index<<endl<<endl; // Display result of linear search

    index = binSrch(array, SIZE, val); // Perform binary search
    cout<<val<<" found at index using Binary Search : "<<index<<endl<<endl; // Display result of linear search
    

    //Clean up open files, allocated memory

    //Exit stage right
    return 0;
}

void markSrt(int a[], int n){
    for(int lstStrt=0; lstStrt<n-1; lstStrt++){// Start beginning of array
        for(int pos=lstStrt+1; pos<n; pos++){// Compare every element in list with the beginning of the list
            if(a[pos]<a[lstStrt]){//Memory Swap if out of order
                int temp=a[pos];
                a[pos]=a[lstStrt];
                a[lstStrt]=temp;
            }
        }
    }
}

int linSrch(const int a[], int n, int val){
    //Linear search for a value in the array
    for(int i = 0; i < n; i++) {
        if(a[i] == val) return i; // Return index if found
    }
    return -1; // Return -1 if not found
}

int binSrch(const int a[], int n, int val){
    //Binary search for a value in the sorted array
    int first = 0, last = n - 1, middle;
    while(first <= last) {
        middle = (first + last) / 2; // Find the middle index
        if(a[middle] == val) return middle; // Return index if found
        else if(a[middle] < val) first = middle + 1; // Search in the right half
        else last = middle - 1; // Search in the left half
    }
    return -1; // Return -1 if not found
}

void fillAry(int a[], int n){
    //Fill the array with random numbers
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 90+10; // Random numbers between 10 and 99
    }
}

void prntAry(const int a[], int n,int perLine) {
    //Print the array elements
    cout << "Array elements: "<<endl;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if ((i + 1) % perLine == 0) {
            cout << endl; // New line after 'perLine' elements
        }
    }
    cout << endl;
}