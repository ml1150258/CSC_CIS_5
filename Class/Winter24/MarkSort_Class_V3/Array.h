/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: mlehr
 *
 * Created on July 25, 2023, 9:54 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

const int SIZE=100;
class Array{
    private:
        int size;
        int data[SIZE];
    public:
        void setSize(int);
        void setData();
        void setData(int,int);
        int  getSize();
        int  getData(int);
        void mrkSrt1();
        void prntAry(int);
};

#endif /* ARRAY_H */

