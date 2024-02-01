/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: mlehr
 * Created on May 30, 2023, 11:22 AM
 * Purpose:  Array Specification
 */

#ifndef ARRAY_H
#define ARRAY_H

const int SIZE=1000;

class Array{
    private:
        int array[SIZE];
        int nElmnts,perLine;
    public:
        void setProp(int,int);
        void filAray();
        void prtAray();
        void mrkSrt1();
};

#endif /* ARRAY_H */

