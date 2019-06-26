#include "MyContext.h"

#define NULL  0

MyContext::MyContext(void)
{
}


MyContext::~MyContext(void)
{
	//错误做法 1
	//此方法容易导致内存泄露，应为在执行ChangeState函数的时候，m_state指针指向的值发生了变化，
	//它永远指向最后一块地址
	//if(m_state != NULL)
	//{
	//	delete m_state;
	//	m_state = NULL;
	//}
	/*
	// 错误做法 2
	vector<State *>::iterator ibegin = m_dataBuffer.begin();
	vector<State *>::iterator iend = m_dataBuffer.end();
	for (; ibegin != iend; ibegin++)
	{
	//删除数据
	//检测删除数据后，是否会执行其析构函数
	m_dataBuffer.erase(ibegin); 		
	}
	*/
	//正确做法 1
	vector<State *>::iterator ibegin = m_dataBuffer.begin();
	vector<State *>::iterator iend = m_dataBuffer.end();
	for (; ibegin != iend; ibegin++)
	{		
		State * pt = *ibegin;
		delete pt;
		pt = NULL;
	}
	cout<<"dataBuffer Size Before clear: "<<m_dataBuffer.size()<<endl;
	m_dataBuffer.clear();
	cout<<"dataBuffer Size After clear: "<<m_dataBuffer.size()<<endl;
}
MyContext::MyContext(State *state)
{
	m_state = state;
	m_dataBuffer.push_back(m_state);
}

bool MyContext::ChangeState(State * state)
{
	cout<<"MyContext::ChangeState()..."<<endl;

	// 将state 数据插入到m_dataBuffer中，但需要现在m_databuffer中检测是否已经存在
	bool bFindFlag = false;
	vector<State *>::iterator ibegin = m_dataBuffer.begin();
	vector<State *>::iterator iend = m_dataBuffer.end();
	for (; ibegin != iend; ibegin++)
	{
		if((*ibegin) == state)
		{
			bFindFlag = true;
			break;
		}
	}
	if (!bFindFlag)
	{
		m_dataBuffer.push_back(state);
	}
	this->m_state = state;
	return true;
}
void MyContext::OperationInterface()
{
	cout<<"MyContext::OperationInterface()..."<<endl;
	m_state->OperationInterface(this);
}
void MyContext::OperationChangeState()
{
	cout<<"MyContext::OperationChangeState()..."<<endl;
	m_state->OperationChangeState(this);
}