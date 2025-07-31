/* 
 * File:   Array.h
 * Author: mlehr
 * Created on May 29th, 2025, 10:26 AM
 * Purpose:  Array Class Specification
 */


#ifndef ARRAY_H
#define ARRAY_H

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Function
#include <ctime>      //Set Random Seed with Time
using namespace std;  //STD Name-space where Library is compiled

class Array{
    private:
        int utlSize;
        int *data;
    public:
        Array(int);
        ~Array(){delete []data;}
        void prntAry(int);
        void swap1(int,int);
        void bublSrt();
};

#endif