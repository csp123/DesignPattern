#include "MyContext.h"

#define NULL  0
MyContext::MyContext(Strategy* stg)
{
	m_stg = stg;
}


MyContext::~MyContext(void)
{
	if (m_stg != NULL)
	{
		delete m_stg;
	}
}


void MyContext::DoAction()
{
	if (m_stg != NULL)
	{
		m_stg->AlgrithmInterface();
	}
}