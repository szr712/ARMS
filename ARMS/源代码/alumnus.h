#ifndef Alumnus
#define Alumnus
#include"people.h"
using namespace std;
class alumnus:public people{
	public:
		alumnus(string na="null",string se="null",int ag=0,string gra="null",string col="null",string cls="null",string add="null",string ph="null",string q="null",string e="null")
		:people(na,se,ph),age(ag),grade(gra),college(col),classroom(cls),address(add),qq(q),email(e){}//���캯�� 
		alumnus *next;
		alumnus* getnext()const{return next;}
		string gname() const{ return name;}//��ò�ͬ������ 
		string gsex() const {return sex;}
		int gage() const {return age;} 
		string ggrade() const {return grade;} 
		string gcollege() const {return college;} 
		string gclassroom() const {return classroom;} 
		string gaddress() const {return address;} 
		string gphone() const {return phone;}
		string gqq() const {return qq;} 
		string gemail() const {return email;} 
		void alumnusdisplay();//չʾУ����¼ 
		void caddress();//���ǵ�У���������༶�⼸�����ݲ����������ֻ���Ը��ĵ�ַ�绰QQemail�������� 
		void cqq();
		void cphone();
		void cemail();
		void setnull(){name="null";}//����������Ϊnull
		bool ifnamefull(); //�ж��ǲ���null 
		void changedata(alumnus *a,alumnus *b);//�������� 

	protected:
		int age;
		string  grade;//����λ������� 
		string college;//ϵ
		string classroom;//ʹ��string����Ϊ�ܶ��ѧ�༶ǰ����רҵ���� 
		string address;
		string qq;
		string email;
		
		 
		 
};

#endif
 

