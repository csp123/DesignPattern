#pragma once

class Component
{
public:
	virtual ~Component();
	virtual void Operator();
protected:
	Component();
private:
};
class ConcreteComponent:public Component
{
public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operator();

protected:
private:
};
class Decorator : public Component
{
public:
	Decorator(Component *com);
	virtual ~Decorator(void);
	void Operator();
protected:
	Component* m_com;
};

class ConcreteDecorator:public Decorator
{
public:
	ConcreteDecorator(Component *com);
	~ConcreteDecorator();
	void Operator();
	void AddedBehavior();
protected:
private:
};