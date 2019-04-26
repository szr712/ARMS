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
		string cname(string a)//改名字 
		{
			return name=a;
		}
		string csex(string a)//改性别 
		{
			return sex=a;
		}

		void peopledisplay()
		{
			cout<<"姓名:"<<name<<endl;
			cout<<"性别："<<sex<<endl;
			cout<<"电话:"<<phone<<endl;
		 } 
		
}; 
#endif
