#include "Subject.h"



Subject::Subject(void)
{
	//m_list
}


Subject::~Subject(void)
{
}

void Subject::Attach(Observer *obv)
{
	m_list.push_front(obv);
}
void Subject::Detach(Observer *obv)
{
	if (obv != NULL)
	{
		m_list.remove(obv);
	}
}
void Subject::Notify()
{
	list<Observer *>::iterator iBegin = m_list.begin();
	list<Observer *>::iterator iEnd = m_list.end();
	for (; iBegin != iEnd ; iBegin++)
	{
		//
		(*iBegin)->Update(this);
	}
}

//////////////////////////////////////////////////////////////////////////
//ConcreteSubject

ConcreteSubject::ConcreteSubject()
{
	m_state = "\0";
}

ConcreteSubject::~ConcreteSubject()
{

}


// GetState()
State ConcreteSubject::GetState()
{
	return m_state;
}
// SetState()

void ConcreteSubject::SetState(State state)
{
	m_state = state;
}