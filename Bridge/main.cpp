
#include "Abstraction.h"
#include "AbstractionImp.h"

#include <iostream>
using namespace std;

/*

������Bridge���ŵ㣺
	��Bridgeģʽ�Ľṹ�п��Կ�����ϵͳ����Ϊ���������Ĳ��֣�����ǳ��󲿷֣��ұ���ʵ�ֲ��֣����������ֿ����໥�����Ľ����޸ģ�
������������Ŀͻ�����仯�����û�������ҪAbstraction����һ�����������ʱ�򣬲�����Ҫ������ͨ���̳з�ʽʵ��ʱ����Ҫ�������
A1��A2�ˣ����⵱���������������㷨���Ҳֻ�ܸı��ұ�ʵ��(���һ�����廯����)�����ұ߲����ڱ仯��Ҳ������Ӿ��������ˡ�

*/
int main(int argc ,char*argv[])
{

	AbstractionImp *imp = new ConcreteAbstrationImpA();

	Abstraction * abs = new RefinedAbstraction(imp);

	abs->Operator();

	getchar();
	return 0;
}