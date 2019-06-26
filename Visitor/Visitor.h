#pragma once
#include "Element.h"

class Element;
class Visitor
{
public:	
	virtual ~Visitor(void);
	//virtual void DoVistor() = 0;
	virtual void VisitorConcreteElementA(Element *ele) = 0;
	virtual void VisitorConcreteElementB(Element *ele) = 0;
protected:
	Visitor(void);
};

class ConcreteVisitorA:public Visitor
{
public:
	ConcreteVisitorA();
	~ConcreteVisitorA();
	void VisitorConcreteElementA(Element *ele);
	void VisitorConcreteElementB(Element *ele);
};

class ConcreteVisitorB:public Visitor
{
public:
	ConcreteVisitorB();
	~ConcreteVisitorB();
	void VisitorConcreteElementA(Element *ele);
	void VisitorConcreteElementB(Element *ele);
};
