/*
Name:  Dr. Mark Lehr
Date:  01/09/25
Purpose: Savitch Chap1 Prob1 Add Sub Mul Div Mod
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Only use Scientific Values like PI, Speed of Light, etc...
//Conversion between units

//Function Prototypes

int main(int argv,char **argc){
	//Random Seeds are set for the random number generator
	
	//Declare Variables
	unsigned short op1,op2;//Two variables to input, operand1 and operand2
	unsigned short add,//Adding the 2 operands
	    sub,//Subtracting the 2 operands
		mul,//Multiplying the 2 operands
		div,//Dividing the 2 operands
		mod;//Moding op1%op2 gives the integer remainder
	
	//Initialize Values
	cout<<"Input the 2 operands"<<endl;
	cin>>op1>>op2;
	
	//Map the Inputs to Outputs - Process
	add=op1+op2;
	sub=op1-op2;
	mul=op1*op2;
	div=op1/op2;
	mod=op1%op2;
	
	//Display and output the results
	cout<<"Operand 1 = "<<op1<<endl<<"Operand 2 = "<<op2<<endl;
	cout<<add<<" = "<<op1<<" + "<<op2<<endl;
	cout<<sub<<" = "<<op1<<" - "<<op2<<endl;
	cout<<mul<<" = "<<op1<<" * "<<op2<<endl;
	cout<<div<<" = "<<op1<<" / "<<op2<<endl;
	cout<<mod<<" = "<<op1<<" % "<<op2<<endl;
	
	//Exit the program
	return 0;
}