//Normally Resides in the .h file  Array.h
const int SIZE=1000;//Size of Array Fields in this structure
class Array{
    private://Data
        int size;          //Size of Array Fields utilized in this structure
        int data[SIZE];    //Data
        int indx[SIZE];    //Index of the data
    public://Function Prototypes
        void fillAry(int);       //Fills the Structure
        void prtAry1(int) const; //Prints the arrays Seperately
        void prtAry2(int) const; //Prints using index
        void mrkSort();           //Sorting with Structure
};