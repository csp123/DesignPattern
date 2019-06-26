#pragma once
#include "MyContext.h"

class MyContext;
class State
{
public:
	State(void);
	virtual ~State(void);
	virtual void OperationChangeState(MyContext *) = 0;
	virtual void OperationInterface(MyContext *) = 0;
protected:
	bool ChangeState(MyContext * con, State *state);
};


class ConcreteStateA : public State
{
public:
	ConcreteStateA();
	~ConcreteStateA();

	void OperationChangeState(MyContext *) ;
	void OperationInterface(MyContext *) ;
protected:
private:
};


class ConcreteStateB : public State
{
public:
	ConcreteStateB();
	~ConcreteStateB();	
	void OperationChangeState(MyContext *) ;
	void OperationInterface(MyContext *) ;
protected:
private:
};