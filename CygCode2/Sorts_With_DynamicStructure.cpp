/*
     Author: Dr. Mark E. Lehr
     Date:   July 29th, 2025
     Purpose: Mark/Selection/Bubble Sorts with Static Structure
*/

//System Libraries
#include <iostream>  //Input/Output
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time Library
using namespace std;

//User Libraries Static Array with Dynamic Data
struct Array {
    int utlSize;  // Size of the array
    int *data; // Pointer to hold array data
};

//Constants - Physics, Chemistry, Conversions, Higher Dimensions

//Function Prototypes
void fillAry(Array &);
void prntAry(const Array &, int = 10);
void markSrt(Array &);
void selSrt(Array &);
void bubSrt(Array &);

//Execution Begins Here
int main(int argv,char **argc){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    //Declare Variables
    Array array; // Declare an array structure
    array.utlSize = 100; //Size of the array

    //Initialize Variables
    fillAry(array); // Fill the array with random numbers
    prntAry(array); // Print the array elements

    //Process - Map the inputs to outputs
    markSrt(array); // Sort the array using selection sort
    selSrt(array); // Sort the array using selection sort
    bubSrt(array); // Sort the array using selection sort

    //Display the results
    prntAry(array); // Print the array elements

    //Clean up open files, allocated memory
    delete []array.data; // Free dynamically allocated memory for the array data

    //Exit stage right
    return 0;
}

void bubSrt(Array &a){
    bool swap; // Flag to check if a swap occurred
    int n = a.utlSize; // Size of the array
    do{
        swap = false; // Flag to check if a swap occurred
        for(int i = 0; i < n - 1; i++) { // Loop through the array
            if(a.data[i] > a.data[i + 1]) { // If the current element is greater than the next
                int temp = a.data[i]; // Swap the elements
                a.data[i] = a.data[i + 1];
                a.data[i + 1] = temp;
                swap = true; // Set flag to true indicating a swap occurred
            }
        }
        n--; // Reduce the size of the array to be sorted
    } while(swap); // Continue until no swaps occur
}

void selSrt(Array &a){
    for(int lstStrt=0; lstStrt<a.utlSize-1; lstStrt++){// Start beginning of array
        int minIdx = lstStrt; // Assume the first element is the minimum
        for(int pos=lstStrt+1; pos<a.utlSize; pos++){// Compare every element in list with the beginning of the list
            if(a.data[pos]<a.data[minIdx]){//Memory Swap if out of order
                minIdx = pos; // Update minimum index
            }
        }
        int temp=a.data[minIdx]; // Swap the found minimum element with the first element
        a.data[minIdx]=a.data[lstStrt];
        a.data[lstStrt]=temp;
    }
}


void markSrt(Array &a){
    for(int lstStrt=0; lstStrt<a.utlSize-1; lstStrt++){// Start beginning of array
        for(int pos=lstStrt+1; pos<a.utlSize; pos++){// Compare every element in list with the beginning of the list
            if(a.data[pos]<a.data[lstStrt]){//Memory Swap if out of order
                int temp=a.data[pos];
                a.data[pos]=a.data[lstStrt];
                a.data[lstStrt]=temp;
            }
        }
    }
}

int linSrch(const Array &a, int val){
    //Linear search for a value in the array
    for(int i = 0; i < a.utlSize; i++) {
        if(a.data[i] == val) return i; // Return index if found
    }
    return -1; // Return -1 if not found
}

int binSrch(const Array &a, int val){
    //Binary search for a value in the sorted array
    int first = 0, last = a.utlSize - 1, middle;
    while(first <= last) {
        middle = (first + last) / 2; // Find the middle index
        if(a.data[middle] == val) return middle; // Return index if found
        else if(a.data[middle] < val) first = middle + 1; // Search in the right half
        else last = middle - 1; // Search in the left half
    }
    return -1; // Return -1 if not found
}

void fillAry(Array &a){
    //Fill the array with random numbers
    a.data = new int[a.utlSize]; // Dynamically allocate memory for the array
    for(int i = 0; i < a.utlSize; i++) {
        a.data[i] = rand() % 90+10; // Random numbers between 10 and 99
    }
}

void prntAry(const Array &a,int perLine) {
    //Print the array elements
    cout << "Array elements: "<<endl;
    for(int i = 0; i < a.utlSize; i++) {
        cout << a.data[i] << " ";
        if ((i + 1) % perLine == 0) {
            cout << endl; // New line after 'perLine' elements
        }
    }
    cout << endl;
}