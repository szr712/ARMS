#include "user.h"
#include<fstream>
using namespace std;

void user::gpass(){
	string pa;
	cout<<"�����޸ĺ�����룺"<<endl;
	cin>>pa;
	pass=pa;
	cout<<"�޸ĳɹ�"<<endl;
}

void user::gnum(){
	string nu;
	cout<<"�����޸ĺ���˺ţ�"<<endl;
	cin>>nu;
	num=nu;
	cout<<"�޸ĳɹ�"<<endl;
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
