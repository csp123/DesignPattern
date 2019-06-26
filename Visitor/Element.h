#pragma once
#include "Visitor.h"
class Visitor;

class Element
{
public:	
	virtual ~Element(void);
	virtual void Accept(Visitor *vst) = 0;
protected:
	Element(void);	
};


class ConcreteElementA : public Element
{
public:
	ConcreteElementA();
	~ConcreteElementA();
	void Accept(Visitor *vst);
protected:
};




class ConcreteElementB : public Element
{
public:
	ConcreteElementB();
	~ConcreteElementB();
	void Accept(Visitor *vst);
protected:
};