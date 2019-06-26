#include "Iterator.h"


Iterator::Iterator(void)
{
}


Iterator::~Iterator(void)
{
}

ConcreteIterator::ConcreteIterator(Aggregate *ag,int index)
{
	this->m_ag = ag;
	this->m_index = index;
}
ConcreteIterator::~ConcreteIterator()
{

}

Object ConcreteIterator::CurrentItem()
{
	return m_ag->GetItem(m_index);
}
void ConcreteIterator::First()
{

	m_index = 0;
}
void ConcreteIterator::Next()
{

	if (m_index < m_ag->GetSize())
	{
		m_index++;
	}
}
bool ConcreteIterator::IsDone()
{
	return (m_index == m_ag->GetSize());
}
