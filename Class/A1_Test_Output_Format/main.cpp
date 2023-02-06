/* 
 * Author:   Dr Mark E. Lehr
 * Date:     January 13th, 2020
 * Purpose:  Format the Output with spaces, tabs, etc....
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables or constants here
    //7 characters or less
    int intX;
    float floatY;
    
    //Initialize or input data here
    cin>>intX;    //This is my code
    cin>>floatY;
    
    //Format and display outputs here
    cout<<intX<<endl;
    cout<<floatY<<endl;
    cout<<"Hello World     "<<endl;
    cout<<"\tTab it!"<<endl;
    cout<<"Compare . . . to space   ";
    
    //Exit stage left
    return 0;
}