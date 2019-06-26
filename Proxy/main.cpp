
#include "Proxy.h"
#include <iostream>
using namespace std;
/******************************************************
练习：proxy
*******************************************************/
int main(int argc , char* argv[])
{

	Subject* sub = new ConcreteSubject();
	Proxy *proxy = new Proxy(sub);
	proxy->Request();
	getchar();
	delete proxy;
	getchar();
	if(sub != NULL)
	{
		cout<<"delete sub..."<<endl;
		//delete sub; // 再次执行 delete sub 会出现空指针异常，因为sub所指向的地址\
		//在delete proxy时，执行了proxy的析构函数，在析构函数中已经释放了。
		//因此再次释放此资源的时候会出现空指针异常
	}
	getchar();
	return 0;
}