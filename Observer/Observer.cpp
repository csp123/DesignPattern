#include "Observer.h"
#include <iostream>
using namespace std;

Observer::Observer(void)
{
	m_str = "\0";
}


Observer::~Observer(void)
{
	cout<<"Observer..."<<endl;
	//getchar();
}


ConcreteObserverA::ConcreteObserverA(Subject *sub)
{
	m_sub = sub;
	m_sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
	m_sub->Detach(this);
	if (m_sub != 0)
	{
		delete m_sub;
	}
}
void ConcreteObserverA::Update(Subject *sub)
{
	//cout<<"ConcreteObserverA::Update()..."<<endl;
	m_str = sub->GetState();
	PrintInfo();

}

void ConcreteObserverA::PrintInfo()
{
	cout<<"ConcreteObserverA observer ..."<<m_sub->GetState()<<endl;
}
Subject * ConcreteObserverA::GetSubject()
{
	return m_sub;
}

ConcreteObserverB::ConcreteObserverB(Subject *sub)
{
	m_sub = sub;
	m_sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
	m_sub->Detach(this);

	if (m_sub!= NULL)
	{
		delete m_sub;
	}
}

void ConcreteObserverB::Update(Subject * sub)
{
	//cout<<"ConcreteObserverB::Update()..."<<endl;
	m_str = sub->GetState();
	PrintInfo();
}

void ConcreteObserverB::PrintInfo()
{

	cout<<"ConcreteObserverB observer ..."<<m_sub->GetState()<<endl;
}
Subject * ConcreteObserverB::GetSubject()
{
	return m_sub;
}