#include"people.h"
#include"alumnuslist.h"

using namespace std;

class user :public alumnuslist{
	public:
		user(string nu="null",string pa="null"):num(nu),pass(pa){}
		void gpass();//�޸�����
		void gnum();//�޸��˺� 
		bool operator==(const user& m){return(pass==m.pass&&num==m.num);}//�ж��˺ź������Ƿ�һ��
		string getnum(){return num;}//����˺� 
    	string getpass(){return pass;} 
    	void search(int i);//��ͨ�û�ֻ���Բ��� ������ 
    	void usersort(int i);
    	void userdisplay();
    	
    	
	
	
	protected:
		string num;//�˺� 
		string pass;
		
		
		
};
