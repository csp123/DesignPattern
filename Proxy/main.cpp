
#include "Proxy.h"
#include <iostream>
using namespace std;
/******************************************************
��ϰ��proxy
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
		//delete sub; // �ٴ�ִ�� delete sub ����ֿ�ָ���쳣����Ϊsub��ָ��ĵ�ַ\
		//��delete proxyʱ��ִ����proxy�������������������������Ѿ��ͷ��ˡ�
		//����ٴ��ͷŴ���Դ��ʱ�����ֿ�ָ���쳣
	}
	getchar();
	return 0;
}