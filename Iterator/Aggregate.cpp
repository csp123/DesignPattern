#include "Aggregate.h"


Aggregate::Aggregate(void)
{
}


Aggregate::~Aggregate(void)
{
}

ConcreteAggregate::ConcreteAggregate()
{
	for (int i = 0; i < SIZE ; i++)
	{
		m_objs[i] = i;
	}
}
ConcreteAggregate::~ConcreteAggregate()
{

}

Iterator *ConcreteAggregate::CreateIterator()
{
	return new ConcreteIterator(this);
}
Object ConcreteAggregate::GetItem(int index)
{
	if (index < this->GetSize())
	{
		return m_objs[index];
	}
	else
		return -1;
}
int ConcreteAggregate::GetSize()
{
	return SIZE;
}
