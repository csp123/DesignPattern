#include "Colleage.h"

Colleage::Colleage(void)
{
}


Colleage::~Colleage(void)
{
}
Colleage::Colleage(Mediator *mdt)
{
	m_dt = mdt;
}

ConcreteColleageA::ConcreteColleageA()
{

}

ConcreteColleageA::~ConcreteColleageA()
{

}
ConcreteColleageA::ConcreteColleageA(Mediator *mdt):Colleage(mdt)
{

}
void ConcreteColleageA::Action()
{
	m_dt->DoActionFromAtoB();
	cout<<"State of ConcreteColleageB: "<<this->GetState()<<endl;
}
void ConcreteColleageA::SetState(const string &sdt)
{
	m_sdt = sdt;
}
string ConcreteColleageA::GetState()
{
	return m_sdt;
}



ConcreteColleageB::ConcreteColleageB()
{

}
ConcreteColleageB::~ConcreteColleageB()
{

}
ConcreteColleageB::ConcreteColleageB(Mediator *mdt):Colleage(mdt)
{

}
void ConcreteColleageB::Action()
{
	m_dt->DoActionFromBtoA();
	cout<<"State of ConcreteColleageA: "<<this->GetState()<<endl;
}
void ConcreteColleageB::SetState(const string &sdt)
{
	m_sdt = sdt;
}
string ConcreteColleageB::GetState()
{
	return m_sdt;
}
