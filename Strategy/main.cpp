
#include "MyContext.h"
#include <iostream>
using namespace std;
/********************************************************************************************
��ϰ��Strategy pattern
	  Strategyģʽ��TemplateģʽҪ�������������ͬ�ģ�����Ϊ�˸�ҵ���߼�(�㷨)����
	  ʵ�ֺͳ���ӿ�֮��Ľ��Strategyģʽ���߼�(�㷨)��װ��һ����(Context)���棬ͨ�����
	  �ķ�ʽ�������㷨��ʵ������϶�����ʵ�֣���ͨ��ί�еķ�ʽ������ӿڵ�ʵ��ί�и���϶���ʵ��
********************************************************************************************/
int main(int argc ,char *argv[])
{
	Strategy * m_strA = new ConcreteStrategyA();
	Strategy * m_strB = new ConcreteStrategyB();
	MyContext * myContextA = new MyContext(m_strA);
	MyContext * myContextB = new MyContext(m_strB);

	myContextA->DoAction();
	myContextB->DoAction();

	getchar();

	delete myContextA;
	delete myContextB;
	getchar();
	return 0;
}