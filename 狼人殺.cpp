#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	srand(time(0));
	
	int choice,position[9]={},player[9]={1,2,3,4,5,6,7,8,9},start,player_out,choice_witch;
	int poison,nothing; 
	
	cout<<"�w��i�J�T�H���A�ЬD��C���Ҧ��G"<<endl;
	cout<<"�T���T�T�T���]�k�šB�y�H�B�w���a / �p�T / �����^�i�J�C���Х� 1 "<<endl;
	//cout<<"�|���T�T�T���]�k�šB�y�H�B�M�h�B�w���a / �T���B�p�T / �����^�Х� 2 "<<endl;
	
	cin>>choice;	//��ܼҦ� 
	system("CLS");
	
	if(choice==1){ //�T���T�T�T��
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
			cout<<"���a"<<player[i]<<"�нT�{�A�������A"; 
			system("pause");
			cout<<"�A�������O�G"; 
			
			if(position[i]==1) cout<<"�k��"<<endl;			
			else if(position[i]==2) cout<<"�y�H"<<endl;
			else if(position[i]==3) cout<<"�w���a"<<endl;
			else if(position[i]<=6) cout<<"�T�H"<<endl;
			else if(position[i]<=9) cout<<"����"<<endl; 
			
			cout<<"�d�ݵ�����";
			system("pause");
			system("CLS");
		}//fori	
		
		////////////////////////////////////// �Ĥ@�� 
		cout<<"�Ѷ½г���"<<endl;  
		system("pause");
		system("CLS");
		cout<<"�T�H�иC���A�п�ܭn�M�����a�G";
		cin>>player_out;
		system("CLS");
		
		cout<<"�k�ŽиC���A�Q�M�����a�O�A�n�ϥL�ܡH(�ϥL�Х�1�A���ϽХ�2)�G";
		cin>>choice_witch;
		if(choice_witch==1){   //�k�Ū���� 
			cout<<"�аݧA�n�r�H�ܡH�n�r�����a�O�H(�u��ϥΤ@�~��)�G";
			system("pause");
			system("CLS");
			cout<<"�Q�߬O���w�]"<<endl;
		}
		else if(choice_witch==2){ 
			player[player_out-1]=0;
			cout<<"�аݧA�n�r�H�ܡH�n�r�����a�O�H(���r�Х�0�A�r�H�п缾�a���X)�G";
			cin>>poison;
			if(poison!=0){
				player[poison-1]=0;
			}
			system("CLS");
			if(poison!=0) cout<<"�Q�߬O"<<player_out<<"����"<<poison<<"�����a���`"<<endl; 			
			else cout<<"�Q�߬O"<<player_out<<"�����a���`"<<endl; 			
		}
		
		//////////////////////////////////////
				
		start=rand()%9;
	
		cout<<"���ҡA�Ѫ��a"<<start+1<<"�����a�}�l�o��"<<endl; 
		system("pause");
		system("CLS");
		
		for(int i=0; i<9; i++){  //�o���ɶ� 
			if(start+i>8) start-=9;
			if(player[start+i]==0) continue;		
			cout<<"���a"<<player[start+i]<<"���o���ɶ�"<<endl<<"����"; 
			system("pause");
			system("CLS");
		}
		
		cout<<"�}�l�벼�A�п�ܧ벼�X�h���H�G";
		cin>>player_out;
		player[player_out-1]=0;
		
					
		////////////////////////////////////// �ĤG�� 
		cout<<"�Ѷ½г���"<<endl;  
		system("pause");
		system("CLS");
		cout<<"�T�H�иC���A�п�ܭn�M�����a�G";
		cin>>player_out;
		system("CLS");
		
		if(choice_witch==1){ //�ϥθ��� ���ϥάr�� 
			//cout<<"�ϥθ��� ���ϥάr�� "<<endl;
			cout<<"�k�ŽиC���A�Q�M�����a�O�A�n�ϥL�ܡH(�A�w�S������)�G";
			system("pause");
			cout<<"�аݧA�n�r�H�ܡH�n�r�����a�O�H(���r�Х�0�A�r�H�п缾�a���X)�G";
			cin>>poison;
			player[player_out-1]=0;
			if(poison!=0){
				player[poison-1]=0;
				cout<<"�Q�߬O"<<player_out<<"����"<<poison<<"�����a���`"<<endl; 			
			}//if poison		
			else cout<<"�Q�߬O"<<player_out<<"�����a���`"<<endl;  
		}//�ϥθ��� ���ϥάr�� 
		
		if(choice_witch==2 && poison!=0){ //���ϥθ��� �w�ϥάr�� 
			//cout<<"���ϥθ��� �w�ϥάr�� "<<endl;
			cout<<"�k�ŽиC���A�Q�M�����a�O�A�n�ϥL�ܡH(�ϥL�Х�1�A���ϽХ�2)�G";
			cin>>choice_witch;
			if(choice_witch==1){   //�k�Ū���� 
				cout<<"�аݧA�n�r�H�ܡH�n�r�����a�O�H(�u��ϥΤ@�~��)�G";
				system("pause");
				system("CLS");
				cout<<"�Q�߬O���w�]"<<endl;
			}
			else if(choice_witch==2){			
				player[player_out-1]=0;
				cout<<"�аݧA�n�r�H�ܡH�n�r�����a�O�H(�w�ϥάr��)�G";
				system("pause");
				system("CLS"); 
			}	
		} //���ϥθ��� �w�ϥάr�� 		
		
		if(choice_witch==2 && poison==0){ //���ϥθ��� ���ϥάr�� 
			//cout<<"���ϥθ��� ���ϥάr��  "<<endl;
			cout<<"�k�ŽиC���A�Q�M�����a�O�A�n�ϥL�ܡH(�ϥL�Х�1�A���ϽХ�2)�G";
			cin>>choice_witch;
			if(choice_witch==1){   //�k�Ū���� 
				cout<<"�аݧA�n�r�H�ܡH�n�r�����a�O�H(�u��ϥΤ@�~��)�G";
				system("pause");
				system("CLS");
				cout<<"�Q�߬O���w�]"<<endl;
			}
			else if(choice_witch==2){ 
				player[player_out-1]=0;
				cout<<"�аݧA�n�r�H�ܡH�n�r�����a�O�H(���r�Х�0�A�r�H�п缾�a���X)�G";
				cin>>poison;
				if(poison!=0){
					player[poison-1]=0;
				}
				system("CLS");
				if(poison!=0) cout<<"�Q�߬O"<<player_out<<"����"<<poison<<"�����a���`"<<endl; 			
				else cout<<"�Q�߬O"<<player_out<<"�����a���`"<<endl; 			
			}		
		}//���ϥθ��� ���ϥάr�� 
		
		start=rand()%9;
	
		cout<<"���ҡA�Ѫ��a"<<start+1<<"�����a�}�l�o��"<<endl; 
		system("pause");
		system("CLS");
		
		for(int i=0; i<9; i++){  //�o���ɶ� 
			if(start+i>8) start-=9;
			if(player[start+i]==0) continue;		
			cout<<"���a"<<player[start+i]<<"���o���ɶ�"<<endl<<"����"; 
			system("pause");
			system("CLS");
		}
		
		cout<<"�}�l�벼�A�п�ܧ벼�X�h���H�G";
		cin>>player_out;
		player[player_out-1]=0;
		
		
		
//		for(int i=0; i<9; i++){
//			cout<<player[i];
//		}
		
		
	}//if outside 
}




