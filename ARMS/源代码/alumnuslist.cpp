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
//���� 
void alumnuslist::find(int i){
	int n=0;
	string t; 
	switch(i)
	{
	case 1:{ 
		cout<<"������������";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){//ָ��r����next���ִ�Խ��������
			if(r->gname()==t){//���ı����ÿһ�����ֶ������������ƥ��һ��
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 2:
		{
		cout<<"�������Ա�";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gsex()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 3: 
		 {
		cout<<"���������䣺";
		int x;
		cin>>x;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gage()==x){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 4:
		{
		cout<<"������켶��";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->ggrade()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 5:
		{
		cout<<"������ϵ��";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gcollege()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 6:
		{
		cout<<"������רҵ�༶��";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gclassroom()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 7:
		{
		cout<<"������켶��ϵ��רҵ�༶�����Կո�����";//���԰༶Ϊ��λ����ʱ������ǰ���涨�꼶ϵ����Ϣ������������˹��� 
		string a,b,c; 
		cin>>a>>b>>c;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gcollege()==b&&r->ggrade()==a&&r->gclassroom()==c){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 8:
		{
		cout<<"������ͨѶ��ַ��";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gaddress()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 9:
		{
		cout<<"������绰��";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gphone()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 10:
		{
		cout<<"������QQ��";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gqq()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	case 11:
		{
		cout<<"������E-mail��";
		cin>>t;
		for(alumnus* r=ptr;r;r=r->next){
			if(r->gemail()==t){
				r->alumnusdisplay();
				n=1;
			}
		}
		if(n==0){
			cout<<"û���ҵ����У����Ϣ"<<endl;
		}
		break;
		}
	default:
		cout<<"�������"<<endl;
		break;
	}
	
}
//������Ϣ��������
void alumnuslist::add(alumnus& a){
    alumnus* pn=new alumnus(a);
	if(ptr){//ptrָ�벻Ϊ��ʱ�����ײ�����
		pn->next=ptr;
	}
	if(!ptr){//���ָ��Ϊ�գ���β������
		pn->next=NULL;
	}
	ptr=pn;//��������һУ��ʱָ���Ѿ���Ϊ��
}

void alumnuslist::addalumnus(alumnus& a){
	add(a);
}
//ɾ������ 
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

//���
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
				changedata(i,k);//�������� 
			
			
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





//���� 
alumnuslist::~alumnuslist()
{
	for(alumnus* r=ptr;r=ptr;delete r){
		ptr=ptr->next;
	}
}
