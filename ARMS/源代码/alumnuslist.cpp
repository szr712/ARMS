#include"alumnuslist.h"
#include<fstream>
using namespace std;
alumnus*  alumnuslist::findname(string a){
		
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gname()==a){
				return r;
				
			}
		}		
	
} 
//查找 
void alumnuslist::find(int i){
	int n=0;
	string t; 
	switch(i)
	{
	case 1:{ 
		cout<<"请输入姓名：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){//指针r沿着next部分穿越整个链表
			if(r->gname()==t){//将文本里的每一个名字都与输入的名字匹配一遍
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 2:
		{
		cout<<"请输入性别：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gsex()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 3: 
		 {
		cout<<"请输入年龄：";
		int x;
		cin>>x;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gage()==x){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 4:
		{
		cout<<"请输入届级：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->ggrade()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 5:
		{
		cout<<"请输入系：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gcollege()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 6:
		{
		cout<<"请输入专业班级：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gclassroom()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 7:
		{
		cout<<"请输入届级、系、专业班级：（以空格间隔）";//在以班级为单位查找时，往往前面会规定年级系等信息，因此特意加入此功能 
		string a,b,c; 
		cin>>a>>b>>c;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gcollege()==b&&r->ggrade()==a&&r->gclassroom()==c){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 8:
		{
		cout<<"请输入通讯地址：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gaddress()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 9:
		{
		cout<<"请输入电话：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gphone()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 10:
		{
		cout<<"请输入QQ：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gqq()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	case 11:
		{
		cout<<"请输入E-mail：";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gemail()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"没有找到相关校友信息"<<endl;
		}
		break;
		}
	default:
		cout<<"输入错误"<<endl;
		break;
	}
	
}
//加入信息到链表中
void alumnuslist::add(alumnus& a){
    alumnus* pn=new alumnus(a);
	if(ptr){//ptr指针不为空时，在首部插入
		pn->next=ptr;
	}
	if(!ptr){//如果指针为空，在尾部插入
		pn->next=NULL;
	}
	ptr=pn;//当继续下一校友时指针已经不为空
}

void alumnuslist::addalumnus(alumnus& a){
	add(a);
}
//删除数据 
void alumnuslist::remove(string na){
	alumnus *last=ptr; 
	for(alumnus* pn=ptr;pn;pn=pn->next)
	{
			if(na==pn->gname())
			{
				if(pn==ptr) {
					ptr=ptr->next;
					break;
				}
				else {
					last->next=pn->next;
					break;
				}
			}
			last=pn;
	}
} 

//输出
void alumnuslist::alumnuslistdisplay(){
	for(alumnus* pn=ptr;pn;pn=pn->next)
	{
			pn->alumnusdisplay();
			cout<<endl; 
	}
}

void alumnuslist::write(){
	ofstream out("alumnus.txt");
	for(alumnus* r=ptr;r!=NULL;r=r->next)
	{  
		
		
			out<<r->gname()<<"    "<<r->gsex()<<"     "<<r->gage()<<"     "<<r->ggrade()<<"     "<<r->gcollege()<<"     "<<
				r->gclassroom()<<"     "<<r->gaddress()<<"     "<<r->gphone()<<"     "<<r->gqq()<<"     "<<r->gemail()<<endl;
		
	}
	out.close();
}




void alumnuslist::sortname(){
	for(alumnus* i=ptr;i;i=i->next)
		{
			alumnus *k=i;
			for(alumnus* j=i->next;j;j=j->next)
			
			if(j->gname()<k->gname()) k=j;
				changedata(i,k);//交换数据 
			
			
		} 
	
}

void alumnuslist::sortgrade(){
	for(alumnus* i=ptr;i;i=i->next)
		{
			alumnus* k=i;
			for(alumnus* j=i->next;j;j=j->next)
			if(j->ggrade()<k->ggrade()) k=j;
			changedata(i,k);	
		} 
	
}





//析构 
alumnuslist::~alumnuslist()
{
	for(alumnus* r=ptr;r=ptr;delete r){
		ptr=ptr->next;
	}
}
