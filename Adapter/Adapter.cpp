#include "Adapter.h"

#include <iostream>
using namespace std;


Target::Target()
{

}
Target::~Target()
{

}
void Target::Request()
{
	cout<<"Target::Request..."<<endl;
}

Adaptee::Adaptee(void)
{
}


Adaptee::~Adaptee(void)
{
}
void Adaptee::SpecificRequest()
{
	cout<<"Adaptee::SpecificRequest..."<<endl;
}


Adapter::Adapter(Adaptee *ade)
{
	m_ade = ade;
}

Adapter::~Adapter(void)
{
}

void Adapter::Request()
{
	this->SpecificRequest();
}