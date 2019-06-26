#pragma once
class AbstractProductA
{
public:	
	virtual ~AbstractProductA(void);
	virtual void Operator() = 0 ;
protected:
	AbstractProductA(void);
};

class AbstractProductB
{
public:	
	virtual ~AbstractProductB(void);
	virtual void Operator() = 0 ;
protected:
	AbstractProductB(void);
};

class ConcreteProductA1 :public AbstractProductA
{
public:
	ConcreteProductA1();
	~ConcreteProductA1();
	void Operator() ;
};
class ConcreteProductA2 :public AbstractProductA
{
public:
	ConcreteProductA2();
	~ConcreteProductA2();
	void Operator() ;
};

class ConcreteProductB1 : public AbstractProductB
{
public:
	ConcreteProductB1();
	~ConcreteProductB1();
	void Operator();

};

class ConcreteProductB2 : public AbstractProductB
{
public:
	ConcreteProductB2();
	~ConcreteProductB2();
	void Operator();

};