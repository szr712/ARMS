#ifndef Alumnuslist
#define Alumnuslist
#include"people.h"
#include"alumnus.h" 
using namespace std;

class alumnuslist:public alumnus{
	protected:
		int size;
		alumnus* ptr;
	public:
		alumnuslist():ptr(0),size(0){}
		void find(int i);//����    
		void remove(string na);//������ɾ������ 
		void add(alumnus& a);//�����Ϣ��������
    	void alumnuslistdisplay();
		void addalumnus(alumnus& a);//������У�� 
		void write();//д���ļ�
		void sortname() ;//���������� 
		void sortgrade();//���켶���� 
		alumnus* findname(string a);
		

		~alumnuslist();
};



#endif
