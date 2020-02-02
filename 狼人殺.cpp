#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	srand(time(0));
	
	int choice,position[9]={},player[9]={1,2,3,4,5,6,7,8,9},start,player_out,choice_witch;
	int poison; 
	
	cout<<"歡迎進入狼人殺，請挑選遊戲模式："<<endl;
	cout<<"三神三狼三民（女巫、獵人、預言家 / 小狼 / 平民）請打 1 "<<endl;
	cout<<"四神三狼三民（女巫、獵人、騎士、預言家 / 狼王、小狼 / 平民）請打 2 "<<endl;
	
	cin>>choice;	//選擇模式 
	system("CLS");
	
	if(choice==1){ //三神三狼三民
		for(int i=0; i<9; i++){
			while(position[i]==0){								
				position[i]=rand()%9+1;
				for(int j=0; j<i; j++){
					if(position[i]==position[j]){
						position[i]=0;
						break;
					}//if
				}//forj
			}//while
			cout<<"玩家"<<player[i]<<"請確認你的身分，"; 
			system("pause");
			cout<<"你的身分是："; 
			
			if(position[i]==1) cout<<"女巫"<<endl;			
			else if(position[i]==2) cout<<"獵人"<<endl;
			else if(position[i]==3) cout<<"預言家"<<endl;
			else if(position[i]<=6) cout<<"狼人"<<endl;
			else if(position[i]<=9) cout<<"平民"<<endl; 
			
			cout<<"查看結束後";
			system("pause");
			system("CLS");
		}//fori	
		
		//////////////////////////////////////
		cout<<"天黑請閉眼"<<endl; //閉眼時間 
		system("pause");
		system("CLS");
		cout<<"狼人請睜眼，請選擇要刀的玩家：";
		cin>>player_out;
		system("CLS");
		
		cout<<"女巫請睜眼，被刀的玩家是你要救他嗎？(救他請打1，不救請打2)：";
		cin>>choice_witch;
		if(choice_witch==1){   //女巫的選擇 
			system("pause");
			system("CLS");
			cout<<"昨晚是平安夜"<<endl;
		}
		else if(choice_witch==2){ 
			player[player_out-1]=0;
			cout<<"請問你要毒人嗎？要毒的玩家是？(不毒請打0，毒人請選玩家號碼)：";
			cin>>poison;
			if(poison!=0){
				player[poison-1]=0;
			}
			system("CLS");
		}
		
		//////////////////////////////////////
		
		
		start=rand()%9+1;
		if(poison!=0) cout<<"昨晚是"<<player_out<<"號及"<<poison<<"號玩家死亡"<<endl; 
		else cout<<"昨晚是"<<player_out<<"號玩家死亡"<<endl; 
		
		cout<<"抽籤，由玩家"<<start<<"號玩家開始發言"<<endl; 
		system("pause");
		system("CLS");
		
		for(int i=0; i<9; i++){  //發言時間 
			if(start+i>9) start-=9;
			if(player[i]==0) continue;
			cout<<"玩家"<<player[start+i-1]<<"的發言時間"<<endl<<"結束"; 
			system("pause");
			system("CLS");
		}
		
		cout<<"開始投票，請選擇投票出去的人：";
		cin>>player_out;
		
	}//if outside 
	
	
}


