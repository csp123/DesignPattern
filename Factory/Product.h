#pragma once
class Product
{
public:
	virtual ~Product(void);
	virtual void Operation() = 0;
protected:
	Product(void);
};


class ConcreteProductA:public Product
{
public:
	ConcreteProductA();
	~ConcreteProductA();

public:
	void Operation();
};

class ConcreteProductB : public Product
{
public:
	void Operation();
public:
	ConcreteProductB();
	~ConcreteProductB();
};