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
		std::cout<<"ConcreteHandleA �ҰѴ���Ȩ�������ڵ�..."<<std::endl;
		//this->HandleRequest()
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout<<"ConcreteHandleA û�к����ڵ㣬�����Լ�����..."<<std::endl;
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
		std::cout<<"ConcreteHandleB �ҰѴ���Ȩ������̽ڵ�..."<<std::endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		std::cout<<"ConcreteHandleB û�к����ڵ㣬�����Լ�����..."<<std::endl;
	}
}