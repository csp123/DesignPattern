#include "Invoker.h"

Invoker::~Invoker(void)
{
}

Invoker::Invoker(Command *cmd)
{
	m_cmd = cmd;
}

/*******************************************

********************************************/
void Invoker::DoInvoker()
{	
	m_cmd->Execute();
}
