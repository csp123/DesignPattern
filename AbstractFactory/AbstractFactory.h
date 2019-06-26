#pragma once
#include "AbstractProduct.h"
class AbstractFactory
{
public:
	
	virtual ~AbstractFactory(void);
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
protected:
	AbstractFactory(void);
};

class ConcreteFactory1:public AbstractFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	AbstractProductA * CreateProductA();
	AbstractProductB * CreateProductB();
};

class ConcreteFactory2:public AbstractFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA * CreateProductA();
	AbstractProductB * CreateProductB();
};