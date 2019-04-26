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
		void find(int i);//查找    
		void remove(string na);//按姓名删除数据 
		void add(alumnus& a);//添加信息到链表中
    	void alumnuslistdisplay();
		void addalumnus(alumnus& a);//增加新校友 
		void write();//写入文件
		void sortname() ;//按姓名排序 
		void sortgrade();//按届级排序 
		alumnus* findname(string a);
		

		~alumnuslist();
};



#endif
