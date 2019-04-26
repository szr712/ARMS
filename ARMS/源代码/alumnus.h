#ifndef Alumnus
#define Alumnus
#include"people.h"
using namespace std;
class alumnus:public people{
	public:
		alumnus(string na="null",string se="null",int ag=0,string gra="null",string col="null",string cls="null",string add="null",string ph="null",string q="null",string e="null")
		:people(na,se,ph),age(ag),grade(gra),college(col),classroom(cls),address(add),qq(q),email(e){}//构造函数 
		alumnus *next;
		alumnus* getnext()const{return next;}
		string gname() const{ return name;}//获得不同的数据 
		string gsex() const {return sex;}
		int gage() const {return age;} 
		string ggrade() const {return grade;} 
		string gcollege() const {return college;} 
		string gclassroom() const {return classroom;} 
		string gaddress() const {return address;} 
		string gphone() const {return phone;}
		string gqq() const {return qq;} 
		string gemail() const {return email;} 
		void alumnusdisplay();//展示校友名录 
		void caddress();//考虑到校友姓名到班级这几项内容不会更改所以只可以更改地址电话QQemail四项内容 
		void cqq();
		void cphone();
		void cemail();
		void setnull(){name="null";}//将姓名设置为null
		bool ifnamefull(); //判断是不是null 
		void changedata(alumnus *a,alumnus *b);//交换数据 

	protected:
		int age;
		string  grade;//用四位年份输入 
		string college;//系
		string classroom;//使用string是因为很多大学班级前都加专业名称 
		string address;
		string qq;
		string email;
		
		 
		 
};

#endif
 

