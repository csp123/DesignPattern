#pragma once
class AbstractionImp
{
public:	
	virtual ~AbstractionImp(void);
	virtual void Operator() = 0;
protected:
	AbstractionImp(void);
};

class ConcreteAbstrationImpA:public AbstractionImp
{
public:
	ConcreteAbstrationImpA();
	~ConcreteAbstrationImpA();
	virtual void Operator();
};

class ConcreteAbstrationImpB:public AbstractionImp
{
public:
	ConcreteAbstrationImpB();
	~ConcreteAbstrationImpB();
	virtual void Operator();
};
