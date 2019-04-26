#include"people.h"
#include"alumnuslist.h"

using namespace std;

class user :public alumnuslist{
	public:
		user(string nu="null",string pa="null"):num(nu),pass(pa){}
		void gpass();//修改密码
		void gnum();//修改账号 
		bool operator==(const user& m){return(pass==m.pass&&num==m.num);}//判断账号和密码是否一致
		string getnum(){return num;}//获得账号 
    	string getpass(){return pass;} 
    	void search(int i);//普通用户只可以查找 、排序 
    	void usersort(int i);
    	void userdisplay();
    	
    	
	
	
	protected:
		string num;//账号 
		string pass;
		
		
		
};
