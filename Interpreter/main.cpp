
#include "myContext.h"
#include "Interpreter.h"

#include <iostream>
using namespace std;
/*********************************************************************
����������
	һЩӦ���ṩ���ڽ�(build-in)�Ľű����ߺ��������û����Զ��������ܹ���ϵͳ�н��еĲ�����
	Interpretorģʽ��Ŀ�ľ���ʹ��һ��������Ϊ�û��ṩһ��һ�Ŷ������Ե��﷨��ʾ�Ľ�������
	Ȼ��ͨ����������������������еľ��ӡ�
**********************************************************************/

int main(int argc,char* argv[])
{
	myContext *ctx = new myContext();
	AbstractExpression *te = new TerminalExpression("hello");
	AbstractExpression *nte = new NonterminalExpression(te,2);

	nte->Interpret(*ctx);
	getchar();

	return 0;
}