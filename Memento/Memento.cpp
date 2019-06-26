#include "Memento.h"

#include <iostream>
using namespace std;

#define  NULL 0
//////////////////////////////////////////////////////////////////////////
//Originator
//////////////////////////////////////////////////////////////////////////
Originator::Originator()
{
	m_sdt ="";
	m_mt = 0;
}
Originator::Originator(const State &sdt)
{
	m_sdt = sdt;
	m_mt = 0;
}
Originator::~Originator()
{

}
Memento * Originator::CreateMemento()
{
	return new Memento(m_sdt);
}
void Originator::SetMemento(Memento * men)
{

}
void Originator::RestoreToMemento(Memento *mt)
{
	this->m_sdt = mt->GetState();
	if (mt != NULL)
	{
		delete mt;
		mt = NULL;
	}
}
State Originator::GetState()
{
	return m_sdt;
}
void Originator::SetState(const State &sdt)
{
	m_sdt = sdt;
}
void Originator::PrintState()
{
	cout << this->m_sdt <<"...."<<endl;
}

//////////////////////////////////////////////////////////////////////////
//Memento
//////////////////////////////////////////////////////////////////////////


Memento::Memento(void)
{
}


Memento::~Memento(void)
{
	cout<<"~Memento"<<endl;
}

Memento::Memento(const State &sdt)
{
	this->m_sdt = sdt;
}
State Memento::GetState()
{
	return this->m_sdt;
}

void Memento::SetState(const State & sdt)
{
	this->m_sdt = sdt;
}