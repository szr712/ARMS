#include"alumnus.h"
using namespace std;
void alumnus:: alumnusdisplay()
{
		cout<<"����:"<<name<<endl;
		cout<<"�Ա�"<<sex<<endl;
		cout<<"���䣺"<<age<<endl;
		cout<<"�켶��"<<grade<<endl; 
		cout<<"ϵ��"<<college<<endl;
		cout<<"רҵ�༶��"<<classroom<<endl;
		cout<<"ͨѶ��ַ��"<<address<<endl; 
		cout<<"�绰:"<<phone<<endl;
		cout<<"QQ��"<<qq<<endl;
		cout<<"E-mail��"<<email<<endl; 
}

void alumnus::caddress()
{
	string add;
	cout<<"�����޸ĺ��ͨѶ��ַ��"<<endl;
	cin>>add;
	address=add;
	cout<<"�޸ĳɹ�"<<endl;
}

void alumnus::cqq()
{
	string q;
	cout<<"�����޸ĺ��QQ��"<<endl;
	cin>>q;
	qq=q;
	cout<<"�޸ĳɹ�"<<endl;
}

void alumnus::cphone(){
	string ph;
	cout<<"�����޸ĺ�ĵ绰��"<<endl;
	cin>>ph;
	phone=ph;
	cout<<"�޸ĳɹ�"<<endl;
}

void alumnus::cemail(){
	string e;
	cout<<"�����޸ĺ��E-mail��"<<endl;
	cin>>e;
	email=e;
	cout<<"�޸ĳɹ�"<<endl;
	
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


