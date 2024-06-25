/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on May 23rd, 2024, 11:03 AM
 * Purpose:  Array Table
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
class Table{
    private:
        const int MAX=1001;
        int size,*x,*sqrx,*cubex;
    public:
        void init(int sz){
            size=sz;
            size=size>1&&size<=MAX?size:MAX-1;
            x=new int[size];
            sqrx=new int[size];
            cubex=new int[size];
        }
        void setX(int idx,int val){
            if(idx>=0&&idx<size)x[idx]=val;
        }
        void setSqrx(int idx,int val){
            if(idx>=0&&idx<size)sqrx[idx]=val;
        }
        void setCubex(int idx,int val){
            if(idx>=0&&idx<size)cubex[idx]=val;
        }
        int getX(int idx){
            return (idx>=0&&idx<size?x[idx]:0);
        }
        int getSqrx(int idx){
            return (idx>=0&&idx<size?sqrx[idx]:0);
        }
        int getCubex(int idx){
            return (idx>=0&&idx<size?cubex[idx]:0);
        }
        void clean(){
            delete []x;
            delete []sqrx;
            delete []cubex;
        }
        
};

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    int size=11;
    Table table;
    
    //Initialize Variables
    table.init(size);
    
    //Map/Process the Inputs -> Outputs
    for(int i=0;i<size;i++){
        table.setX(i,i);
        table.setSqrx(i,table.getX(i)*table.getX(i));
        table.setCubex(i,table.getSqrx(i)*table.getX(i));
    }
    
    //Display Inputs/Outputs
    cout<<setw(10)<<"X"<<setw(10)<<"SQRX"<<setw(10)<<"CUBEX"<<endl;
    for(int i=0;i<size;i++){
        cout<<setw(10)<<table.getX(i)
            <<setw(10)<<table.getSqrx(i)
            <<setw(10)<<table.getCubex(i)<<endl;
    }
    
    //Clean up memory and files
    table.clean();
    
    //Exit the Program
    return 0;
}