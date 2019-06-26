#pragma once
#include "command.h"
class Command;
class Invoker
{
public:	
	Invoker(Command *cmd);	
	void DoInvoker();
protected:
	~Invoker(void);
private:
	Command *m_cmd;
};

