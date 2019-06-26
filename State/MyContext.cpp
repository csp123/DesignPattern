#include "MyContext.h"

#define NULL  0

MyContext::MyContext(void)
{
}


MyContext::~MyContext(void)
{
	//�������� 1
	//�˷������׵����ڴ�й¶��ӦΪ��ִ��ChangeState������ʱ��m_stateָ��ָ���ֵ�����˱仯��
	//����Զָ�����һ���ַ
	//if(m_state != NULL)
	//{
	//	delete m_state;
	//	m_state = NULL;
	//}
	/*
	// �������� 2
	vector<State *>::iterator ibegin = m_dataBuffer.begin();
	vector<State *>::iterator iend = m_dataBuffer.end();
	for (; ibegin != iend; ibegin++)
	{
	//ɾ������
	//���ɾ�����ݺ��Ƿ��ִ������������
	m_dataBuffer.erase(ibegin); 		
	}
	*/
	//��ȷ���� 1
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

	// ��state ���ݲ��뵽m_dataBuffer�У�����Ҫ����m_databuffer�м���Ƿ��Ѿ�����
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