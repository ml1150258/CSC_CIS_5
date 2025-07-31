

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argv,char **argc){
	srand(static_cast<unsigned int>(time(0)));
	
	int dlr,plr;
	char plyAgn;
	
	cout<<"This is a blackjack game"<<endl;
	do{
		dlr=rand()%10+1;//1,10
		plr=rand()%10+1+rand()%10+1;//2,21
		
		cout<<"Dealer = "<<dlr<<endl;
		
		char sh;
		do{
			cout<<"Player = "<<plr<<endl;
			cout<<"Do you want to hit Type H anything else Stand"<<endl;
			cin>>sh;
			if(sh=='H'){
				plr+=rand()%10+1;//1,10
			}
		}while(sh=='H');
		
		do{
			if(dlr<17){
				dlr+=rand()%10+1;//1,10
			}
		}while(dlr<17);
		
		cout<<"The Dealer hand = "<<dlr<<endl;
		cout<<"The Player hand = "<<plr<<endl;
		
		if(plr>21)cout<<"Player Loses"<<endl;
		else if(dlr>21)cout<<"Dealer Loses"<<endl;
		else if(plr>dlr)cout<<"Player Wins"<<endl;
		else if(plr==dlr)cout<<"Draw"<<endl;
		else cout<<"Dealer Wins"<<endl;
		
		cout<<"Do you want to Play Again - Y"<<endl;
		cin>>plyAgn;
	}while(plyAgn=='Y');
	
	return 1;
}