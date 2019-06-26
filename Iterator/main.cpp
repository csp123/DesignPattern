
#include "Iterator.h"
#include "Aggregate.h"

#include <iostream>
using namespace std;
/*****************************************************************
问题：
	Iterator模式应该是最为熟悉的模式了。
Iterator 模式也正是用来解决一个聚合对象的遍历问题，将对象集合的遍历封装到一个类中，
进行，这样就避免了暴露这个聚合对象的内部表示的可能。
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