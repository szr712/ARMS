#include"alumnus.h"
using namespace std;
void alumnus:: alumnusdisplay()
{
		cout<<"姓名:"<<name<<endl;
		cout<<"性别："<<sex<<endl;
		cout<<"年龄："<<age<<endl;
		cout<<"届级："<<grade<<endl; 
		cout<<"系："<<college<<endl;
		cout<<"专业班级："<<classroom<<endl;
		cout<<"通讯地址："<<address<<endl; 
		cout<<"电话:"<<phone<<endl;
		cout<<"QQ："<<qq<<endl;
		cout<<"E-mail："<<email<<endl; 
}

void alumnus::caddress()
{
	string add;
	cout<<"输入修改后的通讯地址："<<endl;
	cin>>add;
	address=add;
	cout<<"修改成功"<<endl;
}

void alumnus::cqq()
{
	string q;
	cout<<"输入修改后的QQ："<<endl;
	cin>>q;
	qq=q;
	cout<<"修改成功"<<endl;
}

void alumnus::cphone(){
	string ph;
	cout<<"输入修改后的电话："<<endl;
	cin>>ph;
	phone=ph;
	cout<<"修改成功"<<endl;
}

void alumnus::cemail(){
	string e;
	cout<<"输入修改后的E-mail："<<endl;
	cin>>e;
	email=e;
	cout<<"修改成功"<<endl;
	
}

bool alumnus::ifnamefull()
{
	return (name=="null");

}

void alumnus::changedata(alumnus *a,alumnus *b){
	swap(a->name,b->name);
	swap(a->sex,b->sex);
	swap(a->age,b->age);
	swap(a->grade,b->grade);
	swap(a->college,b->college);
	swap(a->classroom,b->classroom);
	swap(a->address,b->address);
	swap(a->phone,b->phone);
	swap(a->qq,b->qq);
	swap(a->email,b->email);
	
} 


