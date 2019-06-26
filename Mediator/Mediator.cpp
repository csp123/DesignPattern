#include "Mediator.h"


Mediator::Mediator(void)
{
}


Mediator::~Mediator(void)
{
}

ConcreteMediator::ConcreteMediator()
{

}
ConcreteMediator::~ConcreteMediator()
{

}
ConcreteMediator::ConcreteMediator(Colleage *clgA,Colleage *clgB)
{
	m_clgA = clgA;
	m_clgB = clgB;
}
void ConcreteMediator::SetConcreteColleageA(Colleage *clgA)
{
	this->m_clgA = clgA;
}
void ConcreteMediator::SetConcreteColleageB(Colleage *clgB)
{
	this->m_clgB = clgB;
}
Colleage * ConcreteMediator::GetConcreteColleageA()
{
	return this->m_clgA;
}
Colleage * ConcreteMediator::GetConcreteColleageB()
{
	return this->m_clgB;
}

void ConcreteMediator::DoActionFromAtoB()
{
	m_clgB->SetState(m_clgA->GetState());
}
void ConcreteMediator::DoActionFromBtoA()
{
	m_clgA->SetState(m_clgB->GetState());
}

void ConcreteMediator::IntroColleage(Colleage *clgA,Colleage *clgB)
{
	m_clgA = clgA;
	m_clgB = clgB;
}