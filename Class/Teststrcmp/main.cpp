/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on Feb 6th, 2023, 11:03 AM
 * Purpose:  Use string compare to sort 3 names
 */
// C program to illustrate
// strcmp() function
#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
     
    char name1[] = "Ted";
    char name2[] = "Mark";
    char name3[] = "Marc";
     
    // Using strcmp()
    if(strcmp(name1,name2)<=0 && strcmp(name2,name3)<=0){
        cout<<name1<<" < "<<name2<<" < "<<name3<<endl;
    }else if(strcmp(name1,name3)<=0 && strcmp(name3,name2)<=0){
        cout<<name1<<" < "<<name3<<" < "<<name2<<endl;
    }else if(strcmp(name2,name1)<=0 && strcmp(name1,name3)<=0){
        cout<<name2<<" < "<<name1<<" < "<<name3<<endl;
    }else if(strcmp(name2,name3)<=0 && strcmp(name3,name1)<=0){
        cout<<name2<<" < "<<name3<<" < "<<name1<<endl;
    }else if(strcmp(name3,name1)<=0 && strcmp(name1,name2)<=0){
        cout<<name3<<" < "<<name1<<" < "<<name2<<endl;
    }else if(strcmp(name3,name2)<=0 && strcmp(name2,name1)<=0){
        cout<<name3<<" < "<<name2<<" < "<<name1<<endl;
    }
    return 0;
}