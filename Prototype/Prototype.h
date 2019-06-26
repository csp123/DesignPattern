#pragma once

#include <iostream>

class Prototype
{
public:
	~Prototype(void);
	virtual Prototype * Clone() const = 0;
protected:
	Prototype();
};

class ConcretePrototype:public Prototype
{
public :
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype &cp);
	~ConcretePrototype();
	Prototype *Clone() const;
protected:
private:
};