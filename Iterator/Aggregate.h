#pragma once
#include "Iterator.h"
class Iterator;
typedef int Object;

class Aggregate
{
public:	
	virtual ~Aggregate(void);
	virtual Iterator *CreateIterator() = 0;
	virtual Object GetItem(int index) = 0;
	virtual int GetSize() = 0;
protected:
	Aggregate(void);
};


class ConcreteAggregate:public Aggregate
{
public:
	enum{SIZE = 3};
	ConcreteAggregate();
	~ConcreteAggregate();
	Iterator *CreateIterator();
	Object GetItem(int index);
	int GetSize();
protected:
private:
	Object m_objs[SIZE];
};
