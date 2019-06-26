#include "HHandler.h"
#include <iostream>
#define NULL 0
HHandler::HHandler(void)
{
	m_handle = NULL;
}


HHandler::~HHandler(void)
{
	if (m_handle != NULL)
	{
		delete m_handle;
	}
}

HHandler::HHandler(HHandler *succ)
{
	m_handle = succ;
}
void HHandler::SetSuccessor(HHandler * succ)
{
	m_handle  = succ;
}
HHandler * HHandler::GetSuccessor()
{
	return m_handle;
}

//////////////////////////////////////////////////////////////////////////
//ConcreteHandlerA

ConcreteHandlerA::ConcreteHandlerA()
{

}
ConcreteHandlerA::ConcreteHandlerA(HHandler *hander):HHandler(hander)
{

}
ConcreteHandlerA::~ConcreteHandlerA()
{

}
void ConcreteHandlerA::HandleRequest()
{

}
//////////////////////////////////////////////////////////////////////////
//ConcreteHandlerB
ConcreteHandlerB::ConcreteHandlerB()
{
	if (this->GetSuccessor() != 0)
	{
		std::cout<<"ConcreteHandleA 我把处理权给后续节点..."<<std::endl;
		//this->HandleRequest()
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout<<"ConcreteHandleA 没有后续节点，必须自己处理..."<<std::endl;
	}
}
ConcreteHandlerB::ConcreteHandlerB(HHandler* hander):HHandler(hander)
{

}
ConcreteHandlerB::~ConcreteHandlerB()
{

}

void ConcreteHandlerB::HandleRequest()
{
	if (this->GetSuccessor() !=0)
	{
		std::cout<<"ConcreteHandleB 我把处理权交给后继节点..."<<std::endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout<<"ConcreteHandleB 没有后续节点，必须自己处理..."<<std::endl;
	}
}