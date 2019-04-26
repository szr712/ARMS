#include "user.h"
#include<fstream>
using namespace std;

void user::gpass(){
	string pa;
	cout<<"输入修改后的密码："<<endl;
	cin>>pa;
	pass=pa;
	cout<<"修改成功"<<endl;
}

void user::gnum(){
	string nu;
	cout<<"输入修改后的账号："<<endl;
	cin>>nu;
	num=nu;
	cout<<"修改成功"<<endl;
}

void user::search(int i){
	
	find(i); 
}

void user::usersort(int i){
	switch(i){
		case 1:{
			sortname();
			alumnuslistdisplay();
			break;
		}
		case 2:{
			sortgrade();
			alumnuslistdisplay();
			break;
		}
	}
	
}

void user::userdisplay()
{
	alumnuslistdisplay();
}
