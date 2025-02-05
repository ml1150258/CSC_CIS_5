/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 12th, 2023, 9:55 AM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const char PERCENT=100;//Percent conversion
const float HLFPNY=0.005f;//Half Penny

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
	do{
		cout<<endl<<"This program presents a menu of options"<<endl;
		cout<<"0 To run Problem e^x"<<endl;
		cout<<"1 To run Problem Factorial"<<endl;
		cout<<"2 To run Problem Gaddis Total Purchase"<<endl;
		cout<<"3 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"4 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"5 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"6 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"7 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"8 To run Problem Savtich/Gaddis XXXX"<<endl;
		cout<<"9 To run Problem Savtich/Gaddis XXXX"<<endl<<endl;
		cin>>chose;
		
		//Map/Process the Inputs -> Outputs
		switch(chose){
			case '0':{
				//Declare Variables
				unsigned int n, nfact, nterms;
				float x,etox;
				
				//Initialize Values
				cout<<"Input x to Calculate e^x"<<endl;
				cin>>x;
				cout<<"Approximate with how many terms"<<endl;
				cin>>nterms;
				etox=1;//First Term
				
				
				//Map the Inputs to Outputs - Process
				for(int i=1;i<nterms;i++){
					nfact=1;
					for(int j=1;j<=i;j++){
						nfact*=j;
					}
					etox+=pow(x,i)/nfact;
				}
				
				//Display and output the results
				cout<<"Approximate e^"<<x<<"="<<etox<<endl;
				cout<<"Exact       e^"<<x<<"="<<exp(x)<<endl;
				break;
			}
			case '1':{
				//Declare Variables
				unsigned int n, nfact;
				float nLogFact,nLogF10;
				
				//Initialize Values
				cout<<"Input n to Calculate n!"<<endl;
				cin>>n;
				nfact=1;
				nLogFact=0;
				
				//Map the Inputs to Outputs - Process
				for(int i=1;i<=n;i++){
					nfact*=i;
					nLogFact+=log(i);
				}
				nLogF10=nLogFact/log(10);
				int inLogF10=nLogF10;
				float fnLog10=nLogF10-inLogF10;
				
				//Display and output the results
				cout<<n<<"!="<<nfact<<endl;
				cout<<"log("<<n<<"!)="<<nLogFact<<endl;
				cout<<n<<"!="<<"e^"<<nLogFact<<endl;
				cout<<n<<"!="<<exp(nLogFact)<<endl;
				cout<<n<<"!="<<"10^"<<nLogF10<<endl;
				cout<<n<<"!="<<pow(10,fnLog10)<<"x10^"<<inLogF10<<endl;
				break;
			}
			case '2':{
				//Declare Variables
				float val1,val2,val3,val4,val5,//5 sale items in $'s
					  slsTax,//Sales Tax
					  purPrc;//Purchase Price in $'s
				
				//Initialize Values
				val1=1.595e1f;//$15.95
				val2=2.495e1f;//$24.95
				val3=6.95e0f; //$6.95
				val4=1.295e1f;//$12.95
				val5=3.95e0f; //3.95
				slsTax=7.0f/PERCENT;//7%
				
				//Map the Inputs to Outputs - Process
				purPrc=(val1+val2+val3+val4+val5)*(1+slsTax)+HLFPNY;//Rounding
				int a=purPrc*100;//Shift by 2 Decimal Places and truncate
				purPrc=a/100.0f;//Shift back 2 to round up
				
				//Display and output the results
				cout<<"Product 1   = $"<<val1<<endl;
				cout<<"Product 2   = $"<<val2<<endl;
				cout<<"Product 3   = $ "<<val3<<endl;
				cout<<"Product 4   = $"<<val4<<endl;
				cout<<"Product 5   = $ "<<val5<<endl;
				cout<<"Sales Price = $"<<purPrc<<endl;
				break;
			}
			case '3':cout<<"You are in Problem 3"<<endl; break;
			case '4':cout<<"You are in Problem 4"<<endl; break;
			case '5':cout<<"You are in Problem 5"<<endl; break;
			case '6':cout<<"You are in Problem 6"<<endl; break;
			case '7':cout<<"You are in Problem 7"<<endl; break;
			case '8':cout<<"You are in Problem 8"<<endl; break;
			case '9':cout<<"You are in Problem 9"<<endl; break;
		}
	}while(chose>='0'&&chose<='9');
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}