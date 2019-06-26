#include "Facade.h"
#include <iostream>

using namespace std;

Subsystem1::Subsystem1()
{

}
Subsystem1::~Subsystem1()
{

}

void Subsystem1::Operation()
{
	cout<<"Subsystem1::Operation()..."<<endl;
}
Subsystem2::Subsystem2()
{

}

Subsystem2::~Subsystem2()
{

}
void Subsystem2::Operation()
{
	cout<<"Subsystem2::Operation()..."<<endl;
}

Facade::Facade(void)
{
	m_sub1 = new Subsystem1();
	m_sub2 = new Subsystem2();
}

Facade::~Facade(void)
{
	delete m_sub1;
	delete m_sub2;
}

void Facade::OperatorWrapper()
{
	m_sub1->Operation();
	m_sub2->Operation();
}