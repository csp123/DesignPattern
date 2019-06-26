#pragma once
#include "Reciver.h"

class Command
{
public:	
	virtual ~Command(void);
	virtual void Execute() = 0;

protected:
	Command(void);
};

class ConcreteCommand:public Command
{
public:
	ConcreteCommand(Reciver *rev);
	~ConcreteCommand();
	void Execute();
protected:
private:
	Reciver *m_recv;
};