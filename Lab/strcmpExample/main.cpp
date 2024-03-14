/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on March 14th, 2024, 10:05 AM
 * Purpose:  String Compare Example
 */

//System Libraries
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str1[] = "Megadeth";
  char str2[] = "Metallica";
  char str3[] = "Meme";
  const int SIZE=80;
  char str4[SIZE];
  
  //Initialize char string4
  strcpy(str4,str1);

  // compare str1 and str2 lexicographically
  cout<<str1<<" compare to "<<str2<<" = "<<strcmp(str1, str2)<<endl;
  cout<<str1<<" compare to "<<str3<<" = "<<strcmp(str1, str3)<<endl;
  cout<<str2<<" compare to "<<str1<<" = "<<strcmp(str2, str1)<<endl;
  cout<<str2<<" compare to "<<str3<<" = "<<strcmp(str2, str3)<<endl;
  cout<<str3<<" compare to "<<str1<<" = "<<strcmp(str3, str1)<<endl;
  cout<<str3<<" compare to "<<str2<<" = "<<strcmp(str3, str2)<<endl;
  cout<<str3<<" compare to "<<str3<<" = "<<strcmp(str3, str3)<<endl;
  cout<<"String copy function output = "<<str4<<endl;

  return 0;
}