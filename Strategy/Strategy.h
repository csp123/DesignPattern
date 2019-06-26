#pragma once
class Strategy
{
public:
	Strategy(void);
	virtual ~Strategy(void);
	virtual void AlgrithmInterface() = 0;
protected:
private:
};

class ConcreteStrategyA:public Strategy
{
public:
	ConcreteStrategyA();
	~ConcreteStrategyA();
	void AlgrithmInterface();
protected:
private:
};

class ConcreteStrategyB:public Strategy
{
public:
	ConcreteStrategyB();
	~ConcreteStrategyB();
	void AlgrithmInterface();
protected:
private:
};

