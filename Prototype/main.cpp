
#include "Prototype.h"
#include <iostream>
using namespace std;
/**************************************************************************
������Protype ģʽ�ṩ��һ��ͨ���Ѵ��ڵĶ�������¶��󴴽��Ľӿ�(Clone)��Clone()ʵ��
	  �;����ʵ��������أ���C++������ͨ���������캯��ʵ�֡�
���ߣ�csp
ʱ�䣺20190624
***************************************************************************/
int main(int argc ,char*argv[])
{

	Prototype *p = new ConcretePrototype();
	//����������Ŀ������캯�������������ٴ�ʵ����ʱ�ص��û���Ĺ��캯�����Ϳ������캯��
	//��˻����������п�����ִ���˻���Ĺ��캯����������Ŀ������캯��
	Prototype *p1 = p->Clone(); 

	getchar();
	delete p ;
	delete p1;
	getchar();
	//ConcretePrototype* p2 = new ConcretePrototype();
	//getchar();
	//delete p2;
	//getchar();
	Prototype *p2; //����ָ���ʱ���ǲ�������乹�캯����
	getchar();
	return 0;
}