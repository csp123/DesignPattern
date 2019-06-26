
#include "MyContext.h"
#include <iostream>
using namespace std;
/********************************************************************************************
练习：Strategy pattern
	  Strategy模式和Template模式要解决的问题是相同的，都是为了给业务逻辑(算法)具体
	  实现和抽象接口之间的解耦。Strategy模式将逻辑(算法)封装到一个类(Context)里面，通过组合
	  的方式将具体算法的实现在组合对象中实现，在通过委托的方式将抽象接口的实现委托给组合对象实现
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