#include <iostream>
#include"alumnuslist.h"
#include<fstream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string na,se,ga,co,cl,add,ph,q,e;
	int ag;
	string pass1,pass2;
	
	ifstream inalumnus("alumnus.txt");
	ifstream inpass("pass.txt");
	alumnuslist alist;
	while(inalumnus>>na>>se>>ag>>ga>>co>>cl>>add>>ph>>q>>e)
	{
		alumnus alu(na,se,ag,ga,co,cl,add,ph,q,e);
		alist.add(alu);
	}
	inalumnus.close();
	inpass>>pass1;
	inpass.close();

	


	cout<<"------------------------------------------------------\n";
	cout<<"|                      ��ӭ����                      |"<<endl;
	cout<<"|                   У��¼����ϵͳ                   |"<<endl; 
	cout<<"|                                   ��Ȩ������Ȩ�ؾ� |"<<endl;  
	cout<<"------------------------------------------------------\n";
    cout<<"�������¼���루ϵͳ��ʼ����Ϊ123456����";
    
    int t=0;
    int i;
    while(1)
	{
    	if(t==0)
		{
			cin>>pass2;
			if(pass2==pass1) {
				cout<<"��¼�ɹ���"<<endl;
				break;
			}		
		}
    	else{
    		if(t>5) return 0;
    		else {
    			printf("��ʣ��%d���������\n",5-t);
    			cout<<"�������¼���룺"<<endl;
				cin>>pass2;
				if(pass2==pass1) {
				cout<<"��¼�ɹ�!"<<endl;break;	
				}
			}
		}
		t++;
	}
	
	while(1)
	{
	system("cls");
	cout<<"--------------����ҽзָ���--------------------\n";	
	cout<<"��ѡ������Ҫ�Ĳ�����"<<endl;
	cout<<"1.���У����Ϣ"<<endl;
	cout<<"2.�޸�У����Ϣ"<<endl;
	cout<<"3.����У����Ϣ"<<endl;
	cout<<"4.ɾ��У����Ϣ"<<endl; 
	cout<<"5.����У����Ϣ"<<endl; 
	cout<<"6.չʾ����У��"<<endl;
	cout<<"7.�޸ĵ�¼����"<<endl;
	cout<<"��ѡ�񣺣�1/2/3/4/5/6/7������-1�˳�����";
	cin>>i;
	switch(i){
		
		case 1:
			{
				system("cls");
				string x;
					
				cout<<"--------------����ҽзָ���--------------------\n";
				cout<<"�밴������Ŀ����(ÿ��Ŀ������ɺ��Իس�����)"<<endl;
				cout<<"������";cin>>na;
				cout<<"�Ա�";cin>>se;
				cout<<"���䣺";cin>>ag;
				cout<<"�켶��(������λ��׼�������)";cin>>ga;
				cout<<"ϵ��";cin>>co;
				cout<<"�༶��";cin>>cl;
				cout<<"ͨѶ��ַ��";cin>>add;
				cout<<"�绰��";cin>>ph;
				cout<<"QQ��";cin>>q;
				cout<<"Email��";cin>>e;
				alumnus alu(na,se,ag,ga,co,cl,add,ph,q,e);
				alist.add(alu);
				cout<<"��ӳɹ���"<<endl;
				
				cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
				cin>>x; 

			break;	 
			}
			
		case 2:{
			while(1)
			{
			system("cls");	
			string na,x;
			int m;
			int y;
			alumnus *p; 
			cout<<"--------------����ҽзָ���--------------------\n";
			cout<<"������������ĵ�У��������"<<endl;
			cin>>na;
			p=alist.findname(na);
			if(p==NULL) {
			cout<<"δ�ҵ���У��"<<endl<<endl;	
			cout<<"����-1�����ϲ�ṹ"<<endl;
			cin>>m;
			} 
			else {
				while(1)
				{
				system("cls");
				cout<<"--------------����ҽзָ���--------------------\n";
				cout<<"��ѡ�е���"<<p->gname()<<"У��"<<endl<<endl; 
				cout<<"��ѡ������Ҫ�Ĳ�����"<<endl;
				cout<<"1.���Ĵ�У�ѵ�ͨѶ��ַ"<<endl;
				cout<<"2.���Ĵ�У�ѵĵ绰"<<endl;
				cout<<"3.���Ĵ�У�ѵ�QQ"<<endl;
				cout<<"4.���Ĵ�У�ѵ�Email"<<endl; 
				cout<<"��ѡ�񣺣�1/2/3/4������-1�����ϲ�ṹ��";
				cin>>m;
					switch(m){
					case 1:{
						p->caddress();
						
						break;
					}
					case 2:{
						p->cphone();
						 
						break;
					}
					case 3:{
						p->cqq();
					
						break;
					}
					case 4:{
						p->cemail();
						 
						break;
					}
					case -1:{
						
						break;
					}
					default:{
						cout<<"�������"<<endl;
						break;
					}
				}
				if(m==-1) break;
				string x;
				cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
				cin>>x;
				
				
				}
				}
			if(m==-1) break;
			
			}
		
			break;
		}
		case 3:{
			while(1)
			{
				int x;
			system("cls");
			cout<<"--------------����ҽзָ���--------------------\n";
				cout<<"��ѡ������Ҫ�Ĳ�����"<<endl;
				cout<<"1.����������"<<endl;
				cout<<"2.���Ա����"<<endl;
				cout<<"3.���������"<<endl;
				cout<<"4.���켶����"<<endl; 
				cout<<"5.��ϵ����"<<endl; 
				cout<<"6.��רҵ�༶����"<<endl;
				cout<<"7.���켶��ϵ��רҵ�༶����"<<endl;
				cout<<"8.��ͨѶ��ַ����"<<endl;
				cout<<"9.���绰����"<<endl;
				cout<<"10.��QQ����"<<endl;
				cout<<"11.��Email����"<<endl;
				cout<<"��ѡ�񣺣�1/2/3/4/5/6/7/8/9/10/11������-1�����ϲ�ṹ��";
				cin>>x;
			if(x!=-1) alist.find(x);
			else break;
			string m;
			cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
			cin>>m; 
			
			}
			break;
		}
		case 4:{
		system("cls");
		cout<<"--------------����ҽзָ���--------------------\n";
		cout<<"����������ɾ����У������:";
		string m,x;
		
		cin>>x;
		alumnus* p=alist.findname(x);
		if(p==NULL){
			cout<<"δ�ҵ���У��"<<endl;
			 
		}
		else {
			alist.remove(x);
			cout<<"ɾ���ɹ�"<<endl; 
		}
		cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
		cin>>m; 
		break;
	}
		case 5:{
		while(1){
		system("cls");	
		int m; 
		cout<<"--------------����ҽзָ���--------------------\n";	
		cout<<"��ѡ������Ҫ�Ĳ�����"<<endl;
		cout<<"1.����������"<<endl;
		cout<<"2.���켶����"<<endl;
		cout<<"��ѡ�񣺣�1/2������-1�����ϲ�ṹ��";
		cin>>m;
		if(m==-1) break;
		switch(m)
		{
			case 1:{
				system("cls");
				
				alist.sortname();
				cout<<"����ɹ���"<<endl;
				cout<<"����1�鿴����ṹ��-1�����ϲ�ṹ"<<endl;
				int c;
				cin>>c;
				if(c==-1) break;
				else if(c==1) alist.alumnuslistdisplay();
				string x;
				cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
				cin>>x;
				break;
			}
			case 2:{
				system("cls");
				
				alist.sortgrade();
				cout<<"����ɹ���"<<endl;
				cout<<"����1�鿴����ṹ��-1�����ϲ�ṹ"<<endl;
				int c;
				cin>>c;
				if(c==-1) break;
				else if(c==1) alist.alumnuslistdisplay();
				string x;
				cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
				cin>>x;
				break;
			}
		}
		
		} 
		break;
	}
		case 6:{
			system("cls");
			cout<<"--------------����ҽзָ���--------------------\n";	
			alist.alumnuslistdisplay();
			string x;
			cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
			cin>>x;
			break;
		}
		case 7:{
			system("cls");
			cout<<"--------------����ҽзָ���--------------------\n";	
			cout<<"�����������룺";
			string pass2;
			cin>>pass2;
			ofstream out("pass.txt"); 
			out<<pass2;
			out.close();
			cout<<"�޸ĳɹ���"<<endl;
			string x;
			cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
			cin>>x;
			break;
		}
		case -1:{
			
			break;
		}
		default:{
			cout<<"�������"<<endl;
			string x;
			cout<<endl<<"�����������ַ����ϲ�ṹ" <<endl;
			cin>>x;
			break;
		}	
		
	}
	if(i==-1) break;
	
	}
	
	alist.write();
	alist.~alumnuslist();
	
	
	if(i==-1) return 0;
}
