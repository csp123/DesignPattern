#include "Proxy.h"
#include <iostream>
using namespace std;

Subject::Subject()
{

}

Subject::~Subject()
{

}

ConcreteSubject::ConcreteSubject()
{

}

ConcreteSubject::~ConcreteSubject()
{

}
void ConcreteSubject::Request()
{
	cout<<"ConcreteSubject::Request...."<<endl;
}

Proxy::Proxy(void)
{
}
Proxy::Proxy(Subject *sub)
{
	m_sub = sub;
}

Proxy::~Proxy(void)
{
	delete m_sub;
	cout<<"~Proxy..."<<endl;
	m_sub = NULL;
}

void Proxy::Request()
{
	cout<<"Proxy::Request()..."<<endl;
	m_sub->Request();
}