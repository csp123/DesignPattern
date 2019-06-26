#pragma once
#include "Aggregate.h"
typedef int Object;

class Aggregate;
class Iterator
{
public:
	
	virtual ~Iterator(void);
	virtual void First() = 0;
	virtual void Next()	 = 0;
	virtual bool IsDone() = 0;
	virtual Object CurrentItem() = 0;
protected:
	Iterator(void);
};

class ConcreteIterator:public Iterator
{
public:
	ConcreteIterator();
	ConcreteIterator(Aggregate *ag,int index = 0);
	~ConcreteIterator();

	void First();
	void Next();
	bool IsDone();
	Object CurrentItem();
protected:
private:
	Aggregate *m_ag;
	int m_index;
};