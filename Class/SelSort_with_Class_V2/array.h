/* 
 * File:   array.h
 * Author: mlehr
 *
 * Created on June 2, 2022, 10:20 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

class Array{
    private:
        int size;  //Size of the data array
        int *data; //Dynamic data array pointer
        void swap1(int &,int &);
        void swap2(int &,int &);
        void smlPos(int);
    public:
        Array(int);
        ~Array(){
            delete []data;
        }
        void prntAry(int);
        void selSort();
};

#endif /* ARRAY_H */