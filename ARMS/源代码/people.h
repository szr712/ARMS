#ifndef PEOPLE
#define PEOPLE
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
class people{
	public:
		string name;
		string sex;
		string phone;
		people (string na="null",string se="null",string ph="null"):name(na),sex(se),phone(ph){}
		string cname(string a)//������ 
		{
			return name=a;
		}
		string csex(string a)//���Ա� 
		{
			return sex=a;
		}

		void peopledisplay()
		{
			cout<<"����:"<<name<<endl;
			cout<<"�Ա�"<<sex<<endl;
			cout<<"�绰:"<<phone<<endl;
		 } 
		
}; 
#endif
