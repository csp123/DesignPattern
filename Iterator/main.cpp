
#include "Iterator.h"
#include "Aggregate.h"

#include <iostream>
using namespace std;
/*****************************************************************
���⣺
	IteratorģʽӦ������Ϊ��Ϥ��ģʽ�ˡ�
Iterator ģʽҲ�����������һ���ۺ϶���ı������⣬�����󼯺ϵı�����װ��һ�����У�
���У������ͱ����˱�¶����ۺ϶�����ڲ���ʾ�Ŀ��ܡ�
******************************************************************/
int main(int argc ,char* argv[])
{

	Aggregate * ag = new ConcreteAggregate();
	Iterator * it = new ConcreteIterator(ag);

	for (; !(it->IsDone());it->Next())
	{
		cout<<it->CurrentItem()<<endl;
	}
	getchar();
	return 0;
}