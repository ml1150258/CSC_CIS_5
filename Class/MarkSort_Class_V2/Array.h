/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: mlehr
 *
 * Created on July 26, 2022, 9:55 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

class Array{
    private:
        int size;  //Size of the data array
        int *data; //Data elements in the array
    public:
        Array(int);
        ~Array(){
            delete []data;
        }
        void prntAry(int);
        void mrkSort();
        int  linSrch(int);
        int  binSrch(int);
};


#endif /* ARRAY_H */

