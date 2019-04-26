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
	cout<<"|                      欢迎进入                      |"<<endl;
	cout<<"|                   校友录管理系统                   |"<<endl; 
	cout<<"|                                   版权所有侵权必究 |"<<endl;  
	cout<<"------------------------------------------------------\n";
    cout<<"请输入登录密码（系统初始密码为123456）：";
    
    int t=0;
    int i;
    while(1)
	{
    	if(t==0)
		{
			cin>>pass2;
			if(pass2==pass1) {
				cout<<"登录成功！"<<endl;
				break;
			}		
		}
    	else{
    		if(t>5) return 0;
    		else {
    			printf("您剩余%d次输入机会\n",5-t);
    			cout<<"请输入登录密码："<<endl;
				cin>>pass2;
				if(pass2==pass1) {
				cout<<"登录成功!"<<endl;break;	
				}
			}
		}
		t++;
	}
	
	while(1)
	{
	system("cls");
	cout<<"--------------你好我叫分割线--------------------\n";	
	cout<<"请选择您需要的操作："<<endl;
	cout<<"1.添加校友信息"<<endl;
	cout<<"2.修改校友信息"<<endl;
	cout<<"3.查找校友信息"<<endl;
	cout<<"4.删除校友信息"<<endl; 
	cout<<"5.排序校友信息"<<endl; 
	cout<<"6.展示所有校友"<<endl;
	cout<<"7.修改登录密码"<<endl;
	cout<<"请选择：（1/2/3/4/5/6/7，输入-1退出程序）";
	cin>>i;
	switch(i){
		
		case 1:
			{
				system("cls");
				string x;
					
				cout<<"--------------你好我叫分割线--------------------\n";
				cout<<"请按以下条目输入(每条目输入完成后以回车结束)"<<endl;
				cout<<"姓名：";cin>>na;
				cout<<"性别：";cin>>se;
				cout<<"年龄：";cin>>ag;
				cout<<"届级：(请以四位标准年份输入)";cin>>ga;
				cout<<"系：";cin>>co;
				cout<<"班级：";cin>>cl;
				cout<<"通讯地址：";cin>>add;
				cout<<"电话：";cin>>ph;
				cout<<"QQ：";cin>>q;
				cout<<"Email：";cin>>e;
				alumnus alu(na,se,ag,ga,co,cl,add,ph,q,e);
				alist.add(alu);
				cout<<"添加成功！"<<endl;
				
				cout<<endl<<"键入任意数字返回上层结构" <<endl;
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
			cout<<"--------------你好我叫分割线--------------------\n";
			cout<<"请输入您想更改的校友姓名："<<endl;
			cin>>na;
			p=alist.findname(na);
			if(p==NULL) {
			cout<<"未找到此校友"<<endl<<endl;	
			cout<<"输入-1返回上层结构"<<endl;
			cin>>m;
			} 
			else {
				while(1)
				{
				system("cls");
				cout<<"--------------你好我叫分割线--------------------\n";
				cout<<"您选中的是"<<p->gname()<<"校友"<<endl<<endl; 
				cout<<"请选择您需要的操作："<<endl;
				cout<<"1.更改此校友的通讯地址"<<endl;
				cout<<"2.更改此校友的电话"<<endl;
				cout<<"3.更改此校友的QQ"<<endl;
				cout<<"4.更改此校友的Email"<<endl; 
				cout<<"请选择：（1/2/3/4，输入-1返回上层结构）";
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
						cout<<"输入错误"<<endl;
						break;
					}
				}
				if(m==-1) break;
				string x;
				cout<<endl<<"键入任意数字返回上层结构" <<endl;
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
			cout<<"--------------你好我叫分割线--------------------\n";
				cout<<"请选择您需要的操作："<<endl;
				cout<<"1.按姓名查找"<<endl;
				cout<<"2.按性别查找"<<endl;
				cout<<"3.按年龄查找"<<endl;
				cout<<"4.按届级查找"<<endl; 
				cout<<"5.按系查找"<<endl; 
				cout<<"6.按专业班级查找"<<endl;
				cout<<"7.按届级、系、专业班级查找"<<endl;
				cout<<"8.按通讯地址查找"<<endl;
				cout<<"9.按电话查找"<<endl;
				cout<<"10.按QQ查找"<<endl;
				cout<<"11.按Email查找"<<endl;
				cout<<"请选择：（1/2/3/4/5/6/7/8/9/10/11，输入-1返回上层结构）";
				cin>>x;
			if(x!=-1) alist.find(x);
			else break;
			string m;
			cout<<endl<<"键入任意数字返回上层结构" <<endl;
			cin>>m; 
			
			}
			break;
		}
		case 4:{
		system("cls");
		cout<<"--------------你好我叫分割线--------------------\n";
		cout<<"请输入您想删除的校友姓名:";
		string m,x;
		
		cin>>x;
		alumnus* p=alist.findname(x);
		if(p==NULL){
			cout<<"未找到此校友"<<endl;
			 
		}
		else {
			alist.remove(x);
			cout<<"删除成功"<<endl; 
		}
		cout<<endl<<"键入任意数字返回上层结构" <<endl;
		cin>>m; 
		break;
	}
		case 5:{
		while(1){
		system("cls");	
		int m; 
		cout<<"--------------你好我叫分割线--------------------\n";	
		cout<<"请选择您需要的操作："<<endl;
		cout<<"1.按姓名排序"<<endl;
		cout<<"2.按届级排序"<<endl;
		cout<<"请选择：（1/2，输入-1返回上层结构）";
		cin>>m;
		if(m==-1) break;
		switch(m)
		{
			case 1:{
				system("cls");
				
				alist.sortname();
				cout<<"排序成功！"<<endl;
				cout<<"输入1查看排序结构，-1返回上层结构"<<endl;
				int c;
				cin>>c;
				if(c==-1) break;
				else if(c==1) alist.alumnuslistdisplay();
				string x;
				cout<<endl<<"键入任意数字返回上层结构" <<endl;
				cin>>x;
				break;
			}
			case 2:{
				system("cls");
				
				alist.sortgrade();
				cout<<"排序成功！"<<endl;
				cout<<"输入1查看排序结构，-1返回上层结构"<<endl;
				int c;
				cin>>c;
				if(c==-1) break;
				else if(c==1) alist.alumnuslistdisplay();
				string x;
				cout<<endl<<"键入任意数字返回上层结构" <<endl;
				cin>>x;
				break;
			}
		}
		
		} 
		break;
	}
		case 6:{
			system("cls");
			cout<<"--------------你好我叫分割线--------------------\n";	
			alist.alumnuslistdisplay();
			string x;
			cout<<endl<<"键入任意数字返回上层结构" <<endl;
			cin>>x;
			break;
		}
		case 7:{
			system("cls");
			cout<<"--------------你好我叫分割线--------------------\n";	
			cout<<"请输入新密码：";
			string pass2;
			cin>>pass2;
			ofstream out("pass.txt"); 
			out<<pass2;
			out.close();
			cout<<"修改成功！"<<endl;
			string x;
			cout<<endl<<"键入任意数字返回上层结构" <<endl;
			cin>>x;
			break;
		}
		case -1:{
			
			break;
		}
		default:{
			cout<<"输入错误！"<<endl;
			string x;
			cout<<endl<<"键入任意数字返回上层结构" <<endl;
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
